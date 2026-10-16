#include "ComputerMenu_Init_2.h"

int32_t* ComputerMenu_Init_2(void* pThis)

{
    void* eax = AI_CheckVisibility_29();
    g_5bdd98 = 0;
    int32_t* result_1 = *(pThis + 0x90);

    if (result_1)
        result_1 = Qtask_UpdateList(result_1);

    if (!eax)
        return result_1;

    SoundSys_StopSoundSample_12(eax, 0);
    return SoundSys_SetMasterVolume_12(eax, 0, 0);
}
