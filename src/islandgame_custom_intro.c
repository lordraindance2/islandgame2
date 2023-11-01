#include "global.h"
#include "text.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "event_data.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/species.h"
#include "strings.h"
#include "islandgame.h"

static void SetPlayerName(const u8* name);
static const u8 sName[] = _(ISLANDGAME_PLAYER_NAME);

#ifdef ISLANDGAME_DEBUG
extern u8 IslandGame_LoadIn_Message[]; // Extern variable for our script
#endif

// This gets called after the intro cutscene, right when the new game is started.
// See: src/overworld.c 
void IslandGameCustomStartup()
{
    u16 species;
    u8 level;
    u16 item;

    // This flag makes sure that we unlock the pokemon selection menu:
    // usually its set when you pick the starter.
    FlagSet(FLAG_SYS_POKEMON_GET);

    species = ISLANDGAME_STARTING_MON;
    level = ISLANDGAME_STARTING_MON_LEVEL;
    item = ISLANDGAME_STARTING_MON_ITEM;
    ScriptGiveMon(species, level, item, 0, 0, 0);

    // I'm honestly not sure why you need the weird syntax around string literals,
    // but it breaks pretty badly w/out it so...
    SetPlayerName(sName);

    #ifdef ISLANDGAME_DEBUG
        //put all debug tools here

        //debug 1: give all badges to raise our obedienceLevel
        FlagToggle(FLAG_BADGE01_GET);
        FlagToggle(FLAG_BADGE02_GET);
        FlagToggle(FLAG_BADGE03_GET);
        FlagToggle(FLAG_BADGE04_GET);
        FlagToggle(FLAG_BADGE05_GET);
        FlagToggle(FLAG_BADGE06_GET);
        FlagToggle(FLAG_BADGE07_GET);
        FlagToggle(FLAG_BADGE08_GET);

        FlagToggle(FLAG_RECEIVED_HM_CUT);
        FlagToggle(FLAG_RECEIVED_HM_FLY);
        FlagToggle(FLAG_RECEIVED_HM_SURF);
        FlagToggle(FLAG_RECEIVED_HM_STRENGTH);
        FlagToggle(FLAG_RECEIVED_HM_FLASH);
        FlagToggle(FLAG_RECEIVED_HM_ROCK_SMASH);
        FlagToggle(FLAG_RECEIVED_HM_WATERFALL);
        FlagToggle(FLAG_RECEIVED_HM_DIVE);
        
        //debug 2: SS RAIN LOCATION
        FlagToggle(FLAG_RECEIVED_RUNNING_SHOES);
        FlagToggle(FLAG_SYS_B_DASH);
        FlagToggle(FLAG_LEFT_SHIP);
        //debug 3: CHERIPORT LOCATION
        FlagToggle(FLAG_PROF_GAVE_EEVEE);
        FlagToggle(FLAG_SYS_POKEDEX_GET);
        FlagToggle(FLAG_RECEIVED_POKEDEX_FROM_BIRCH);
        

        //debug sidequest:
        //FlagToggle(FLAG_ROOM3_GAVE_WATER);

        //debug 4: Minty Meadows
        VarSet(VAR_MINTY_MEADOWS_STATE, 1); //1 = quest active, 2 = saw mareep first time, 3 = mightyena corners mareep, 4 = finish

        //See: data/scripts/islandgame_debug[.pory/.inc]
        //ScriptContext_SetupScript(IslandGame_LoadIn_Message);
        //note: this script bugs out if there is an "onload" script on the map

        
    #endif
}

// Almost exactly copied from src/main_menu.c
static void SetPlayerName(const u8 *name)
{
    int i;
    for (i = 0; i < PLAYER_NAME_LENGTH; i++)
    {
        gSaveBlock2Ptr->playerName[i] = name[i];

        // Exit early when we reach the player name end.
        // We don't want to read from undefined memory into the save.
        // (This also stops a compiler warning)
        if (name[i] == EOS)
        {
            break;
        }
    }

    gSaveBlock2Ptr->playerName[PLAYER_NAME_LENGTH] = EOS;
}
