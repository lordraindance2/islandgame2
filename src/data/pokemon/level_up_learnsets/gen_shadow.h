#include "gen_7.h" // use gen 9 move set as well.

#if P_FAMILY_SHADOW_LUGIA
static const struct LevelUpMove sShadowLugiaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_WHIRLWIND),
    LEVEL_UP_MOVE( 1, MOVE_WEATHER_BALL),
    LEVEL_UP_MOVE( 9, MOVE_GUST),
    LEVEL_UP_MOVE(15, MOVE_DRAGON_RUSH),
    LEVEL_UP_MOVE(23, MOVE_EXTRASENSORY),
    LEVEL_UP_MOVE(29, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(37, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(43, MOVE_AEROBLAST),
    LEVEL_UP_MOVE(45, MOVE_SHADOW_BLAST),
    LEVEL_UP_MOVE(50, MOVE_PUNISHMENT),
    LEVEL_UP_MOVE(57, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(65, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(71, MOVE_RECOVER),
    LEVEL_UP_MOVE(79, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(85, MOVE_NATURAL_GIFT),
    LEVEL_UP_MOVE(93, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(98, MOVE_AEROBLAST),
    LEVEL_UP_MOVE(99, MOVE_SKY_ATTACK),
    LEVEL_UP_MOVE(100, MOVE_SHADOW_BLAST),
    LEVEL_UP_END
};
#endif

#if P_FAMILY_SHADOW_MIGHTYENA
static const struct LevelUpMove sShadowMightyenaLevelUpLearnset[] = { //todo: shadow mightyena learnset
    LEVEL_UP_MOVE( 0, MOVE_SNARL),
    LEVEL_UP_MOVE( 1, MOVE_SNARL),
    LEVEL_UP_MOVE( 1, MOVE_FIRE_FANG),
    LEVEL_UP_MOVE( 1, MOVE_THUNDER_FANG),
    LEVEL_UP_MOVE( 1, MOVE_ICE_FANG),
    LEVEL_UP_MOVE( 1, MOVE_CRUNCH),
    LEVEL_UP_MOVE( 1, MOVE_THIEF),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_HOWL),
    LEVEL_UP_MOVE( 1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE( 1, MOVE_BITE),
    LEVEL_UP_MOVE( 4, MOVE_HOWL),
    LEVEL_UP_MOVE( 7, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(13, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(16, MOVE_ROAR),
    LEVEL_UP_MOVE(20, MOVE_SWAGGER),
    LEVEL_UP_MOVE(24, MOVE_ASSURANCE),
    LEVEL_UP_MOVE(28, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(32, MOVE_EMBARGO),
    LEVEL_UP_MOVE(36, MOVE_TAUNT),
    LEVEL_UP_MOVE(40, MOVE_CRUNCH),
    LEVEL_UP_MOVE(44, MOVE_YAWN),
    LEVEL_UP_MOVE(48, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(52, MOVE_SUCKER_PUNCH),
    LEVEL_UP_MOVE(56, MOVE_PLAY_ROUGH),
    LEVEL_UP_END
};
#endif