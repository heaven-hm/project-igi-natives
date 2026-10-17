// Original IGI.EXE function: HumanPlayer_ApplyPhysics_4 (VA 0x0040BBD0; static CFG gate PASS, CFG score 0.933).
#include "HumanPlayer_ApplyPhysics_4.h"
int32_t HumanPlayer_ApplyPhysics_4(void* context, float param_2)

{
    int32_t result = FallLanding(param_2);
    int16_t context_val = *(context + 8);

    if (!(context_val & 4))
        return result;

    void* data_val = *(param_2 + 0x6ec);

    if (data_val)
    {
        struct status_msg* data_3 = SoundSys_SetMasterVolume_7(Script_FormatString(), data_val + 0x114);

        if (data_3)
            SoundSys_StopSoundSample_7(data_3, param_2 + 0x6a8);
    }

    memset(param_2 + 0x664, 0, 0x18);

    if (!(*(context + 8) & 0x40000))
    {
        if (context_val & 0x80)
        {
            void* temp_3 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 1;
            int32_t data_15 = *(temp_3 + 4);
            *(context + 0x14) = data_15;
            return data_15(context, param_2);
        }

        if (*(&context_val + 1) & 1)
        {
            void* entity_5 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 4;
            int32_t data_18 = *(entity_5 + 0x10);
            *(context + 0x14) = data_18;
            return data_18(context, param_2);
        }

        if (context_val & 0x40)
        {
            void* data_20 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 7;
            int32_t data_21 = *(data_20 + 0x1c);
            *(context + 0x14) = data_21;
            return data_21(context, param_2);
        }

        if (context_val & 0x20)
        {
            void* temp_5 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 8;
            int32_t data_23 = *(temp_5 + 0x20);
            *(context + 0x14) = data_23;
            return data_23(context, param_2);
        }
    }
    else
    {
        if (context_val & 0x80)
        {
            void* data_4 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 9;
            int32_t data_5 = *(data_4 + 0x24);
            *(context + 0x14) = data_5;
            return data_5(context, param_2);
        }

        if (*(&context_val + 1) & 1)
        {
            void* temp_1 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 0xc;
            int32_t data_7 = *(temp_1 + 0x30);
            *(context + 0x14) = data_7;
            return data_7(context, param_2);
        }

        if (context_val & 0x40)
        {
            void* entity_3 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 0xf;
            int32_t data_10 = *(entity_3 + 0x3c);
            *(context + 0x14) = data_10;
            return data_10(context, param_2);
        }

        if (context_val & 0x20)
        {
            void* data_12 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 0x10;
            int32_t data_13 = *(data_12 + 0x40);
            *(context + 0x14) = data_13;
            return data_13(context, param_2);
        }
    }

    int32_t* entity_7 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_26 = *entity_7;
    *(context + 0x14) = data_26;
    return data_26(context, param_2);
}
