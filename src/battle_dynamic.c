#include "global.h"
#include "battle.h"
#include "battle_util.h"
#include "pokemon.h"
#include "item.h"
#include "data.h"
#include "battle_dynamic.h"
#include "constants/pokemon.h"
#include "constants/abilities.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/species.h"



static u8 calculateWeatherBallType(u16 holdEffect, u16 weather); // EFFECT_WEATHER_BALL
static u8 calculateHiddenPowerType(u32 hp_iv, u32 atk_iv, u32 def_iv, u32 speed_iv, u32 spatk_iv, u32 spdef_iv); //EFFECT_HIDDEN_POWER
static u8 calculateItemType(u16 item); //EFFECT_CHANGE_TYPE_ON_ITEM
static u8 calculateRevelationDanceType(u8 type1, u8 type2, u8 type3); //EFFECT_REVELATION_DANCE
static u8 calculateNaturalGiftType(u16 item); //EFFECT_NATURAL_GIFT
static u8 calculateTerrainPulseType(u32 battlerAtk); //EFFECT_TERRAIN_PULSE

static void handleFieldMoves(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility);
static void handleAteAbilty(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility);
static void handleSpecificAbility(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility);
static void handleSpecificMove(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility);
static void handleSpecificSpecies(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility);


u8 displayTypeSummary(struct Pokemon* mon, u16 move)
{
    u8 type;
    u16 species;
    switch (gBattleMoves[move].effect)
    {
        case EFFECT_HIDDEN_POWER:
            type = calculateHiddenPowerType(GetMonData(mon, MON_DATA_HP_IV),
                                            GetMonData(mon, MON_DATA_ATK_IV),
                                            GetMonData(mon, MON_DATA_DEF_IV),
                                            GetMonData(mon, MON_DATA_SPEED_IV),
                                            GetMonData(mon, MON_DATA_SPATK_IV),
                                            GetMonData(mon, MON_DATA_SPDEF_IV));
            break;
        case EFFECT_CHANGE_TYPE_ON_ITEM:
            type = calculateItemType(GetMonData(mon, MON_DATA_HELD_ITEM));
            break;
        case EFFECT_REVELATION_DANCE:
            type = GetMonData(mon, MON_DATA_SPECIES);
            type = calculateRevelationDanceType(gSpeciesInfo[species].types[0], gSpeciesInfo[species].types[1], TYPE_NONE);
            break;
        case EFFECT_NATURAL_GIFT:
            type = calculateNaturalGiftType(GetMonData(mon, MON_DATA_HELD_ITEM));
            break;
        case EFFECT_WEATHER_BALL:
        case EFFECT_TERRAIN_PULSE:
        default:
            type = gBattleMoves[move].type; 
    }

    return (type | 0xC0) & 0x3F;
}

u8 displayTypeInBattle(u32 battlerAtk, u16 move, bool8 modify)
{
    u8 type;
    u16 holdEffect = GetBattlerHoldEffect(battlerAtk, TRUE);
    u32 moveType, attackerAbility;
    struct BattlePokemon mon = gBattleMons[battlerAtk];

    switch (gBattleMoves[move].effect)
    {
        case EFFECT_WEATHER_BALL:
            if (WEATHER_HAS_EFFECT)
                type = calculateWeatherBallType(holdEffect, gBattleWeather);
            break;
        case EFFECT_HIDDEN_POWER:
            type = calculateHiddenPowerType(mon.hpIV, mon.attackIV, mon.defenseIV, mon.speedIV, mon.spAttackIV, mon.spDefenseIV) | (F_DYNAMIC_TYPE_1 | F_DYNAMIC_TYPE_2);
            break;
        case EFFECT_CHANGE_TYPE_ON_ITEM:
            type = calculateItemType(mon.item);
            break;
        case EFFECT_REVELATION_DANCE:
            type = calculateRevelationDanceType(mon.type1, mon.type2, mon.type3);
            break;
        case EFFECT_NATURAL_GIFT:
            type = calculateNaturalGiftType(mon.item);
            break;
        case EFFECT_TERRAIN_PULSE:
            type = calculateTerrainPulseType(battlerAtk);
            break;
        default:
            type = 0;
        break;
    }
    attackerAbility = GetBattlerAbility(battlerAtk);
    moveType = type ? type & DYNAMIC_TYPE_MASK : gBattleMoves[move].type;
     
    handleFieldMoves(&type, battlerAtk, moveType, move, attackerAbility);
    switch (attackerAbility)
    {
        case ABILITY_PIXILATE:
        case ABILITY_REFRIGERATE:
        case ABILITY_AERILATE:
        case ABILITY_GALVANIZE:
        case ABILITY_NORMALIZE:
            handleAteAbilty(&type, battlerAtk, moveType, move, attackerAbility);
            if (modify)
                gBattleStruct->ateBoost[battlerAtk] = 1;
            break;
        case ABILITY_LIQUID_VOICE:
            handleSpecificAbility(&type, battlerAtk, moveType, move, attackerAbility);
            break;
        default:
            break;
    }
    
    handleSpecificMove(&type, battlerAtk, moveType, move, attackerAbility);
    handleSpecificSpecies(&type, battlerAtk, moveType, move, attackerAbility);
    return type;
}


static u8 calculateHiddenPowerType(u32 hp_iv, u32 atk_iv, u32 def_iv, u32 speed_iv, u32 spatk_iv, u32 spdef_iv) 
{
    u8 type;
    u8 typeBits  = ((hp_iv & 1) << 0) | ((atk_iv & 1) << 1) | ((def_iv & 1) << 2) | ((speed_iv & 1) << 3) | ((spatk_iv & 1) << 4) | ((spdef_iv & 1) << 5);

    type = ((NUMBER_OF_MON_TYPES - HIDDEN_POWER_OFFSET) * typeBits) / 63 + 1;
    if (type >= TYPE_MYSTERY)
        type++;
    return type;
}

static u8 calculateWeatherBallType(u16 holdEffect, u16 weather)
{
    if (weather & B_WEATHER_RAIN && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA)
        return TYPE_WATER | F_DYNAMIC_TYPE_2;
    else if (weather & B_WEATHER_SANDSTORM)
        return TYPE_ROCK | F_DYNAMIC_TYPE_2;
    else if (weather & B_WEATHER_SUN && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA)
        return TYPE_FIRE | F_DYNAMIC_TYPE_2;
    else if (weather & (B_WEATHER_HAIL |B_WEATHER_SNOW))
        return TYPE_ICE | F_DYNAMIC_TYPE_2;
    else
        return TYPE_NORMAL | F_DYNAMIC_TYPE_2;
}

static u8 calculateItemType(u16 item)
{
    return ItemId_GetSecondaryId(item) | F_DYNAMIC_TYPE_2;
}

static u8 calculateRevelationDanceType(u8 type1, u8 type2, u8 type3)
{
    if (type1 != TYPE_MYSTERY)
        return type1 | F_DYNAMIC_TYPE_2;
    else if (type2 != TYPE_MYSTERY)
        return type2 | F_DYNAMIC_TYPE_2;
    else if (type3 != TYPE_MYSTERY)
        return type3 | F_DYNAMIC_TYPE_2;
}

static u8 calculateNaturalGiftType(u16 item)
{
    if (ItemId_GetPocket(item) == POCKET_BERRIES)
        return gNaturalGiftTable[ITEM_TO_BERRY(item)].type;
}

static u8 calculateTerrainPulseType(u32 battlerAtk)
{
    if (IsBattlerTerrainAffected(battlerAtk, STATUS_FIELD_TERRAIN_ANY))
    {
        if (gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN)
            return TYPE_ELECTRIC | F_DYNAMIC_TYPE_2;
        else if (gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN)
            return TYPE_GRASS | F_DYNAMIC_TYPE_2;
        else if (gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN)
            return TYPE_FAIRY | F_DYNAMIC_TYPE_2;
        else if (gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN)
            return TYPE_PSYCHIC | F_DYNAMIC_TYPE_2;
        else //failsafe
            return TYPE_NORMAL | F_DYNAMIC_TYPE_2;
    }
}

static void handleFieldMoves(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility)
{
    if ((gFieldStatuses & STATUS_FIELD_ION_DELUGE && moveType == TYPE_NORMAL)
        || gStatuses4[battlerAtk] & STATUS4_ELECTRIFIED)
    {
        *type = TYPE_ELECTRIC | F_DYNAMIC_TYPE_2;
    }
}

static void handleAteAbilty(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility)
{
    u32 ateType;
    if (gBattleMoves[move].type == TYPE_NORMAL
             && gBattleMoves[move].effect != EFFECT_HIDDEN_POWER
             && gBattleMoves[move].effect != EFFECT_WEATHER_BALL
             && gBattleMoves[move].effect != EFFECT_CHANGE_TYPE_ON_ITEM
             && gBattleMoves[move].effect != EFFECT_NATURAL_GIFT
             && ((attackerAbility == ABILITY_PIXILATE && (ateType = TYPE_FAIRY))
                 || (attackerAbility == ABILITY_REFRIGERATE && (ateType = TYPE_ICE))
                 || (attackerAbility == ABILITY_AERILATE && (ateType = TYPE_FLYING))
                 || ((attackerAbility == ABILITY_GALVANIZE) && (ateType = TYPE_ELECTRIC))
                )
             )
    {
        *type = ateType | F_DYNAMIC_TYPE_2;
    } else if (gBattleMoves[move].type != TYPE_NORMAL
             && gBattleMoves[move].effect != EFFECT_HIDDEN_POWER
             && gBattleMoves[move].effect != EFFECT_WEATHER_BALL
             && attackerAbility == ABILITY_NORMALIZE)
    {
        *type = TYPE_NORMAL | F_DYNAMIC_TYPE_2;
    }
}

static void handleSpecificAbility(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility)
{
    if (gBattleMoves[move].soundMove && attackerAbility == ABILITY_LIQUID_VOICE)
    {
        *type = TYPE_WATER | F_DYNAMIC_TYPE_2;
    }
}

static void handleSpecificMove(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility)
{
    if (gStatuses4[battlerAtk] & STATUS4_PLASMA_FISTS && moveType == TYPE_NORMAL)
    {
        *type = TYPE_ELECTRIC | F_DYNAMIC_TYPE_2;
    }
}

static void handleSpecificSpecies(u8* type, u32 battlerAtk, u32 moveType, u16 move, u32 attackerAbility)
{
    if (move == MOVE_AURA_WHEEL && gBattleMons[battlerAtk].species == SPECIES_MORPEKO_HANGRY)
    {
        *type = TYPE_DARK | F_DYNAMIC_TYPE_2;
    }
}