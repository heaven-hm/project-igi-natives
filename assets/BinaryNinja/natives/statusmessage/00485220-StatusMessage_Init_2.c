// IGI native provenance: StatusMessage_Init_2 - 0x00485220 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485220-StatusMessage_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusMessage_Init_2.h"

int32_t StatusMessage_Init_2(void* pThis)

{
    uint32_t local_10_1;
    uint32_t index;
    uint32_t result;
    uint32_t status;

    if (!g_5c8e00)
    {
        local_10_1 = 0x3f800000;
        index = 0x3f800000;
        result = 0;
        status = 0;
    }
    else
    {
        strncpy(&local_10_1, "333?333?", 8);
        result = 0x3e99999a;
        status = 0x3e99999a;
    }

    int32_t local_2c = 0;
    uint32_t result_val_1 = Level_LoadLevel_6() + 0x60;
    uint32_t result_val_2 = Level_StartMission_4();
    struct status_msg* result_val_5 = SoundSys_AttachLipsync_11(pThis, status, result, index, local_10_1,
        result_val_2, result_val_1, 0, 0, 0, 0x3f800000);
    *(pThis + 0x24) = result_val_5;
    FadeOutEnd_OnEvent(result_val_5);
    TerraDrawTask_OnEvent(result_val_5, Level_StartMission_4());
    GlowTask_OnEvent(result_val_5);
    FadeOutEnd_Process(result_val_5);
    data_5c8a20 = FX_FragmentSimulate_8(pThis);
    return SoundSys_AttachLipsync_10(pThis, 1);
}
