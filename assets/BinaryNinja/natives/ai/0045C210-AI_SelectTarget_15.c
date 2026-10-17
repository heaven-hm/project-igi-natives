// Original IGI.EXE function: AI_SelectTarget_15 (VA 0x0045C210; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_15.h"
int32_t AI_SelectTarget_15(void* context, void* param_2)

{
    AI_FireWeapon_21(param_2);
    int32_t result = *(context + 8);

    if (result & 0x10000)
    {
        void* entity_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1e;
        int32_t data_1 = *(entity_1 + 0x78);
        *(context + 0x14) = data_1;
        return data_1(context, param_2);
    }

    if (result & 0x20000)
    {
        void* data_3 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x20;
        int32_t data_4 = *(data_3 + 0x80);
        *(context + 0x14) = data_4;
        return data_4(context, param_2);
    }

    if (!(result & 4))
        return result;

    void* data_6 = *(param_2 + 0x6ec);

    if (data_6)
    {
        struct status_msg* data_9 = SoundSys_SetMasterVolume_7(Script_FormatString(), data_6 + 0x114);

        if (data_9)
            SoundSys_StopSoundSample_7(data_9, param_2 + 0x6a8);
    }

    *(param_2 + 0x664) = 0;
    *(param_2 + 0x668) = 0;
    *(param_2 + 0x66c) = 0;
    int32_t* data_10 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_11 = *data_10;
    *(context + 0x14) = data_11;
    return data_11(context, param_2);
}
