// IGI native provenance: ComputerMenu_Init_2 - 0x0046AA80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046AA80-ComputerMenu_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerMenu_Init_2.h"

int32_t* ComputerMenu_Init_2(void* pThis)

{
    void* result_val = AI_CheckVisibility_29();
    g_5bdd98 = 0;
    int32_t* result_1 = *(pThis + 0x90);

    if (result_1)
        result_1 = Qtask_UpdateList(result_1);

    if (!result_val)
        return result_1;

    SoundSys_StopSoundSample_12(result_val, 0);
    return SoundSys_SetMasterVolume_12(result_val, 0, 0);
}
