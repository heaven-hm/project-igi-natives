// IGI native provenance: SoundDefGraph_LoadParameters - 0x004EA600 - CFG score 80.9% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004EA600-SoundDefGraph_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundDefGraph_LoadParameters.h"
int32_t SoundDefGraph_LoadParameters(void* context, int32_t* param_2)

{
    SoundSys_SetFrequency_14(context);

    if (!param_2)
        *(context + 0xd4) = 1;
    else
    {
        void* temp_1 = *param_2;
        memcpy(context + 0xa0, temp_1 + 0xa0, 0x18);
        memcpy(context + 0x88, temp_1 + 0xa0, 0x18);
        *(context + 0xb8) = *(temp_1 + 0xb8);
        *(context + 0xbc) = *(temp_1 + 0xbc);
        *(context + 0xc0) = *(temp_1 + 0xc0);
        *(context + 0xc8) = *(temp_1 + 0xc8);
        *(context + 0xcc) = *(temp_1 + 0xcc);
        *(context + 0xd0) = *(temp_1 + 0xd0);
        *(context + 0xd8) = *(temp_1 + 0xd8);
        *(context + 0xdc) = *(temp_1 + 0xdc);
        *(context + 0xe0) = *(temp_1 + 0xe0);
        *(context + 0xe4) = *(temp_1 + 0xe4);
        memcpy(context + 0xe8, temp_1 + 0xe8, 0x2c);
        memcpy(context + 0x114, temp_1 + 0x114, 0x2c);
        void* dest_5 = temp_1 + 0x140;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_5;
            dest_5 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_6 = ~i;
        int32_t source_6;
        int32_t dest_8;
        dest_8 = memcpy(context + 0x140, dest_5 - entity_6, entity_6 & 0xfffffffc);
        memcpy(dest_8, source_6, entity_6 & 3);
        void* dest_9 = temp_1 + 0x160;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_9;
            dest_9 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_10 = ~i_1;
        int32_t source_8;
        int32_t dest_12;
        dest_12 = memcpy(context + 0x160, dest_9 - entity_10, entity_10 & 0xfffffffc);
        memcpy(dest_12, source_8, entity_10 & 3);
        *(context + 0xd4) = param_2[1];
        *(context + 0x180) = Display_CheckCapabilities_12(context + 0x160);
        *(context + 0x184) = Display_RestoreDevice_12(context + 0x160);
    }

    *(context + 0xd5) = 0;
    *(context + 0x20) = 0;
    *(context + 0x24) = 0;
    *(context + 0x28) = 0;
    *(context + 0x2c) = 0x12;
    Display_SetGammaRamp_12(context + 0x30);

    if (!*(context + 0xd4))
        SoundSys_InitSoundSys_8(context);

    return SoundSys_EvaluateTrigger_14(context);
}
