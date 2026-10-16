#include "gi_platform.h"
#include "00416FE0-Game_Restart.h"
int32_t Game_Restart()

// Sig: void Game_Restart(void)
// Note: Restarts the CURRENT LEVEL/session: tears down and reloads the running
// game state (the Ctrl+F4-style restart path). Takes no args. Use to reset the
// mission without going back to menus. [Name corrected per retail analysis: was
// LevelLoad/LevelQuit/LevelRestart.]
{
    Game_TimingBegin();
    QHash_ValueSet();
    int32_t* valA = LoadingScreen_Show(5);
    SoundSys_EvaluateTrigger_8();
    AI_UpdateSensors_4();
    FX_FragmentSimulate_16(valA, 1);
    StatusList_Clear(*(StatusScreen_Get() + 0x4e4));
    AI_CheckVisibility_26();
    FX_FragmentSimulate_16(valA, 1);
    Qtask_Update();
    FX_FragmentSimulate_16(valA, 1);
    SoundSys_AttachLipsync_17();
    Level_LoadObjects(0x57b568, 0x1e);
    FX_FragmentSimulate_16(valA, 1);

    for (int32_t i = 0; i < 6; i += 1)
        DynObj_CreateMagicObject_12(Level_StartMission_4(), i);

    Sys_DispatchOpcode_2();
    FX_FragmentSimulate_16(valA, 1);
    FX_FireBallUpdate_16(valA);
    return Game_TimingEnd();
}
