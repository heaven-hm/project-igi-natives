// Original IGI.EXE function: AI_CheckSector_8 (VA 0x004566A0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_8.h"
int32_t AI_CheckSector_8(void* context, void* param_2)

{
    AI_FireWeapon_21(param_2);
    int32_t data_val = *(context + 8);

    if (!(data_val & 4))
    {
        void* entity_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xb;
        int32_t data_2 = *(entity_1 + 0x2c);
        *(context + 0x14) = data_2;
        return data_2(context, param_2);
    }

    if (data_val & 0x20000)
    {
        void* data_4 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xd;
        int32_t data_5 = *(data_4 + 0x34);
        *(context + 0x14) = data_5;
        return data_5(context, param_2);
    }

    void* data_7 = *(param_2 + 0x6ec);

    if (data_7)
    {
        struct status_msg* data_10 = SoundSys_SetMasterVolume_7(Script_FormatString(), data_7 + 0x114);

        if (data_10)
            SoundSys_StopSoundSample_7(data_10, param_2 + 0x6a8);
    }

    *(param_2 + 0x664) = 0;
    *(param_2 + 0x668) = 0;
    *(param_2 + 0x66c) = 0;
    int32_t* data_11 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_12 = *data_11;
    *(context + 0x14) = data_12;
    return data_12(context, param_2);
}
