#include "StatusMessage_Init_2.h"

int32_t StatusMessage_Init_2(void* pThis)

{
    uint32_t var_10_1;
    uint32_t index;
    uint32_t result;
    uint32_t status;

    if (!g_5c8e00)
    {
        var_10_1 = 0x3f800000;
        index = 0x3f800000;
        result = 0;
        status = 0;
    }
    else
    {
        __builtin_strncpy(&var_10_1, "333?333?", 8);
        result = 0x3e99999a;
        status = 0x3e99999a;
    }

    int32_t var_2c = 0;
    uint32_t eax_1 = Level_LoadLevel_6() + 0x60;
    uint32_t eax_2 = Level_StartMission_4();
    struct status_msg* eax_5 = SoundSys_AttachLipsync_11(pThis, status, result, index, var_10_1,
        eax_2, eax_1, 0, 0, 0, 0x3f800000);
    *(pThis + 0x24) = eax_5;
    FadeOutEnd_OnEvent(eax_5);
    TerraDrawTask_OnEvent(eax_5, Level_StartMission_4());
    GlowTask_OnEvent(eax_5);
    FadeOutEnd_Process(eax_5);
    data_5c8a20 = FX_FragmentSimulate_8(pThis);
    return SoundSys_AttachLipsync_10(pThis, 1);
}
