// Original IGI.EXE function: HumanPlayer_PlaySound_4 (VA 0x0040BE40; static CFG gate PASS, CFG score 0.933).
#include "HumanPlayer_PlaySound_4.h"
int32_t HumanPlayer_PlaySound_4(void* context, float param_2)

{
    int32_t result = FallLanding(param_2);

    if (!(*(context + 8) & 4))
        return result;

    void* data_val = *(param_2 + 0x6ec);

    if (data_val)
    {
        struct status_msg* data_3 = SoundSys_SetMasterVolume_7(Script_FormatString(), data_val + 0x114);

        if (data_3)
            SoundSys_StopSoundSample_7(data_3, param_2 + 0x6a8);
    }

    memset(param_2 + 0x664, 0, 0x18);
    int32_t* data_4 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_5 = *data_4;
    *(context + 0x14) = data_5;
    return data_5(context, param_2);
}
