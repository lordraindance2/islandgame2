#ifndef GUARD_BATTLE_BG_H
#define GUARD_BATTLE_BG_H

struct BattleBackground
{
    const void *tileset;
    const void *tilemap;
    const void *entryTileset;
    const void *entryTilemap;
    const void *palette;
};

void LoadBattleTerrainGfx(u16);
u8 GetBattleTerrainByMapScene(u8);

void BattleInitBgsAndWindows(void);
void InitBattleBgsVideo(void);
void LoadBattleMenuWindowGfx(void);
void DrawMainBattleBackground(void);
void LoadBattleTextboxAndBackground(void);
void InitLinkBattleVsScreen(u8 taskId);
void DrawBattleEntryBackground(void);
bool8 LoadChosenBattleElement(u8 caseId);
void DrawTerrainTypeBattleBackground(void);

#endif // GUARD_BATTLE_BG_H
