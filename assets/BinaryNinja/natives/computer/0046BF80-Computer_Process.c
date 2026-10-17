// Original IGI.EXE function: Computer_Process (VA 0x0046BF80; static CFG gate PASS, CFG score 1.000).
#include "Computer_Process.h"
int32_t Computer_Process(void* context)

{
    int32_t* data_val = AI_UpdatePatrol_28();
    DynObj_RemoveSymbol_7(Level_StartMission_4(), context, 1);
    g_5be2cc = 0;

    if (data_val)
        QTask_FindType(data_val);

    int32_t* data_2 = *(context + 0x130);

    if (data_2)
        QTask_FindType(data_2);

    void* data_5 = GameScreen_Process(*(Level_LoadLevel_6() + 0x44));
    SoundSys_StopSoundSample_12(data_5, 1);
    SoundSys_SetMasterVolume_12(data_5, 0xffffffff, 1);
    SoundSys_SetMasterVolume_12(data_5, 0, 1);
    return Display_SetGammaRamp_17(g_53fd9c);
}
