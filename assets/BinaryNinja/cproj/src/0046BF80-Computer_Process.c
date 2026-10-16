#include "gi_platform.h"
#include "0046BF80-Computer_Process.h"
int32_t Computer_Process(void* a1)

{
    int32_t* valA = AI_UpdatePatrol_28();
    DynObj_RemoveSymbol_7(Level_StartMission_4(), a1, 1);
    g_5be2cc = 0;

    if (valA)
        QTask_FindType(valA);

    int32_t* valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x130));

    if (valA2)
        QTask_FindType(valA2);

    void* valA5 = GameScreen_Process(*(Level_LoadLevel_6() + 0x44));
    SoundSys_StopSoundSample_12(valA5, 1);
    SoundSys_SetMasterVolume_12(valA5, 0xffffffff, 1);
    SoundSys_SetMasterVolume_12(valA5, 0, 1);
    return Display_SetGammaRamp_17(g_53fd9c);
}
