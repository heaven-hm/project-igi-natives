#include "00416FE0-Game_Restart.h"
/* 0x00416fe0 Game_Restart full linked: callers=1 callees=21 */
int32_t Game_Restart()

// Sig: void Game_Restart(void)
// Note: Restarts the CURRENT LEVEL/session: tears down and reloads the running
// game state (the Ctrl+F4-style restart path). Takes no args. Use to reset the
// mission without going back to menus. [Name corrected per retail analysis: was
// LevelLoad/LevelQuit/LevelRestart.]
{
    Game_TimingBegin();
    QHash_ValueSet();
    int32_t* eax = LoadingScreen_Show(5);
    sub_4e7130();
    sub_453270();
    sub_48a620(eax, 1);
    StatusList_Clear(*(StatusScreen_Get() + 0x4e4));
    sub_468dd0();
    sub_48a620(eax, 1);
    Qtask_Update();
    sub_48a620(eax, 1);
    sub_4edcc0();
    Level_LoadObjects(0x57b568, 0x1e);
    sub_48a620(eax, 1);

    for (int32_t i = 0; i < 6; i += 1)
        sub_4ce830(Level_StartMission_4(), i);

    sub_4b0d50();
    sub_48a620(eax, 1);
    sub_48a5d0(eax);
    return Game_TimingEnd();
}
