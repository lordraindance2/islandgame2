#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// Quest flags, see enum QuestCases in include/quests.h
#define QUEST_UNLOCKED   0 // this is never actually being used, maybe we want to make quest trees?
#define QUEST_INACTIVE   1
#define QUEST_ACTIVE     2
#define QUEST_REWARD     3
#define QUEST_COMPLETED  4
#define QUEST_FAVORITE   5



// Custom Quests
#define QUEST_POKEDEX_COMPLETION           0
#define QUEST_MINTY_MEADOWS_MELISSA        1
#define QUEST_PERSI_FAVORITE_CARD          2
#define QUEST_PERSI_BERRY_MANIAC           3
// #define QUEST_VERDANT_FOREST_SKITTY        2
#define QUEST_MAPLEGROVE_LOVERS            4
#define QUEST_FRESA_FARMS_TORCHIC_EGG      5
#define QUEST_ROSEVALE_RESCUE              6
#define QUEST_APPLEVINE_COUCH_POTATO       7
#define QUEST_ROCKY_PATH_NURSE             8
#define QUEST_COUNT                        9 // This number is literally how many to show in the UI (keep it accurate!)






// Custom Sub-Quests

// Pokedex Completion
#define SUB_QUEST_POKEDEX_MILESTONE_1      0
#define SUB_QUEST_POKEDEX_MILESTONE_2      1
#define SUB_QUEST_POKEDEX_MILESTONE_3      2
#define SUB_QUEST_POKEDEX_MILESTONE_4      3
#define SUB_QUEST_POKEDEX_MILESTONE_5      4
#define SUB_QUEST_POKEDEX_MILESTONE_6      5
#define SUB_QUEST_POKEDEX_MILESTONE_7      6
#define SUB_QUEST_POKEDEX_MILESTONE_8      7
#define SUB_QUEST_POKEDEX_MILESTONE_9      8
#define SUB_QUEST_POKEDEX_MILESTONE_10     9
#define SUB_QUEST_POKEDEX_MILESTONE_11     10
#define SUB_QUEST_POKEDEX_MILESTONE_12     11
#define SUB_QUEST_POKEDEX_MILESTONE_13     12

#define SUB_QUEST_COUNT_POKEDEX_MILESTONE  13

// Minty Meadows Melissa
#define SUB_QUEST_MEADOWS_MELISSA          13

#define SUB_QUEST_COUNT_MEADOWS_MELISSA    1


// Persi Berry
#define SUB_QUEST_PERSI_BERRY_1            14
#define SUB_QUEST_PERSI_BERRY_2            15
#define SUB_QUEST_PERSI_BERRY_3            16
#define SUB_QUEST_PERSI_BERRY_4            17
#define SUB_QUEST_PERSI_BERRY_5            18
#define SUB_QUEST_PERSI_BERRY_6            19
#define SUB_QUEST_PERSI_BERRY_7            20
#define SUB_QUEST_PERSI_BERRY_8            21
#define SUB_QUEST_PERSI_BERRY_9            22
#define SUB_QUEST_PERSI_BERRY_10           23
#define SUB_QUEST_PERSI_BERRY_11           24
#define SUB_QUEST_PERSI_BERRY_12           25
#define SUB_QUEST_PERSI_BERRY_13           26
#define SUB_QUEST_PERSI_BERRY_14           27

#define SUB_QUEST_COUNT_PERSI_BERRY        14

// Applevine Couch Potato
#define SUB_QUEST_COUCH_POTATO_1           28
#define SUB_QUEST_COUCH_POTATO_2           29
#define SUB_QUEST_COUCH_POTATO_3           30
#define SUB_QUEST_COUCH_POTATO_4           31
#define SUB_QUEST_COUCH_POTATO_5           32

#define SUB_QUEST_COUNT_COUCH_POTATO       5

#define SUB_QUEST_COUNT (SUB_QUEST_COUNT_POKEDEX_MILESTONE + SUB_QUEST_COUNT_MEADOWS_MELISSA + SUB_QUEST_COUNT_PERSI_BERRY + SUB_QUEST_COUNT_COUCH_POTATO)


// We want to allocate more space in the saveblock for quests than we need,
// so we don't make breaking changes in the future.
#define QUEST_ARRAY_COUNT 100

#endif // GUARD_CONSTANTS_QUESTS_H
