// Original IGI.EXE function: SoundDefTriggerOnce_LoadParameters (VA 0x004E9830; static CFG gate FAIL, CFG score 0.833).
#include "SoundDefTriggerOnce_LoadParameters.h"
int32_t SoundDefTriggerOnce_LoadParameters(void* context, int32_t* param_2)

{
    SoundSys_InitSoundSys_14(context);

    if (!param_2)
        *(context + 0xe2) = 1;
    else
    {
        void* temp_1 = *param_2;
        memcpy(context + 0xa0, temp_1 + 0xa0, 0x18);
        memcpy(context + 0x88, temp_1 + 0x88, 0x18);
        void* dest_3 = temp_1 + 0xe3;
        *(context + 0xb8) = *(temp_1 + 0xb8);
        *(context + 0xc4) = *(temp_1 + 0xc4);
        *(context + 0xc8) = *(temp_1 + 0xc8);
        *(context + 0xcc) = *(temp_1 + 0xcc);
        *(context + 0x12c) = *(temp_1 + 0x12c);
        *(context + 0xd0) = *(temp_1 + 0xd0);
        *(context + 0xd4) = *(temp_1 + 0xd4);
        *(context + 0xd8) = *(temp_1 + 0xd8);
        *(context + 0xdc) = *(temp_1 + 0xdc);
        *(context + 0xe0) = *(temp_1 + 0xe0);
        *(context + 0xe1) = *(temp_1 + 0xe1);
        *(context + 0xe2) = param_2[1];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_3;
            dest_3 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_11 = ~i;
        int32_t source_4;
        int32_t dest_6;
        dest_6 = memcpy(context + 0xe3, dest_3 - entity_11, entity_11 & 0xfffffffc);
        memcpy(dest_6, source_4, entity_11 & 3);
        char* dest_7 = temp_1 + 0x103;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_7;
            dest_7 = &dest_7[1];
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_15 = ~i_1;
        int32_t source_6;
        int32_t dest_10;
        dest_10 = memcpy(context + 0x103, dest_7 - entity_15, entity_15 & 0xfffffffc);
        memcpy(dest_10, source_6, entity_15 & 3);
        *(context + 0x130) = Display_CheckCapabilities_12(temp_1 + 0x103);
        *(context + 0x134) = Display_RestoreDevice_12(temp_1 + 0x103);
    }

    *(context + 0x128) = 0;
    *(context + 0x20) = 0;
    *(context + 0x24) = 0;
    *(context + 0x28) = 0;
    *(context + 0x123) = 0;
    *(context + 0x124) = 0;
    *(context + 0x2c) = 2;
    Display_SetGammaRamp_12(context + 0x30);

    if (!*(context + 0xe2))
        SoundSys_InitSoundSys_8(context);

    return SoundSys_SetMasterVolume_14(context);
}
