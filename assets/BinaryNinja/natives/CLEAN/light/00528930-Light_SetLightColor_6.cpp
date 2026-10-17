// IGI native provenance: Light_SetLightColor_6 - 0x00528930 - CFG score 74.1% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00528930-Light_SetLightColor_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SetLightColor_6.h"
void* Light_SetLightColor_6(void* context)

{
    void* result = *(context + 0x108);
    float item_118 = 1.0f;
    float item_114 = 0.0f;
    float item_110 = 0.0f;
    float item_10c = 0.0f;
    float item_108 = 1.0f;
    float item_104 = 0.0f;
    float item_100 = 0.0f;
    float item_fc = 0.0f;
    float item_f8 = 1.0f;
    int32_t item_f4 = 0;
    float item_b0 = 1.0f;
    float item_ac = 0.0f;
    float item_a8 = 0.0f;
    float item_a4 = 0.0f;
    float item_a0 = 1.0f;
    float item_9c = 0.0f;
    float item_98 = 0.0f;
    float item_94 = 0.0f;
    float item_90 = 1.0f;
    int32_t item_c8;
    memset(&item_c8, 0, 0x18);
    double item_e0;

    if (result >= 0)
    {
        result = Script_ExecuteLevelScript_4(result);

        if (result)
        {
            int32_t entity_1 = 0;
            int32_t item_10_1 = 0;
            entity_1 = *(result + 0x1c);
            int32_t entity_2 = *((entity_1 << 2) + &g_a994e0);

            if (entity_2)
            {
                void item_60;
                entity_2(result, &item_60);
                memcpy(&item_c8, &item_60, 0x18);
                float item_134_1 = -1.57079637f;
                void item_3c;
                memcpy(&item_b0, &item_3c, 0x28);
                float item_f0;
                int32_t* item_138_1 = &item_f0;
                memcpy(&item_118, &item_3c, 0x28);
                Sys_CloseFileStream_12(item_138_1, item_134_1);
                int64_t item_e8;
                float item_d8;
                float item_88 = item_d8 * item_110 + *(&item_e8 + 4) * item_114 + item_f0 * item_118;
                float item_ec;
                float item_d4;
                float item_84_1 = item_d4 * item_110 + item_e0 * item_114 + item_ec * item_118;
                float item_d0;
                float item_80_1 = item_d0 * item_110 + *(&item_e0 + 4) * item_114 + item_e8 * item_118;
                float item_7c_1 = item_d8 * item_104 + *(&item_e8 + 4) * item_108 + item_f0 * item_10c;
                float item_78 = item_d4 * item_104 + item_e0 * item_108 + item_ec * item_10c;
                float item_74_1 = item_d0 * item_104 + *(&item_e0 + 4) * item_108 + item_e8 * item_10c;
                long double fpu_val_7_27 = item_d8 * item_f8 + *(&item_e8 + 4) * item_fc;
                long double fpu_val_6_28 = item_f0 * item_100;
                int32_t item_cc;
                result = item_cc + item_f4 + 1;
                void* result_1 = result;
                float item_70_1 = fpu_val_7_27 + fpu_val_6_28;
                float item_6c_1 = item_d4 * item_f8 + item_e0 * item_fc + item_ec * item_100;
                float item_68_1 = item_d0 * item_f8 + *(&item_e0 + 4) * item_fc + item_e8 * item_100;
                memcpy(&item_118, &item_88, 0x28);
            }
        }
    }

    long double fpu_val_7_38 = item_ac * *(context + 0x150);
    long double fpu_val_6_38 = item_b0 * *(context + 0x148);
    *(context + 0xd0) = 0x3f800000;
    long double fpu_val_6_40 = item_a8 * *(context + 0x158);
    memcpy(context + 0x8c, &item_118, 0x28);
    double item_e8_1 =
        item_a0 * *(context + 0x150) + item_a4 * *(context + 0x148) + item_9c * *(context + 0x158);
    item_e0 = item_94 * *(context + 0x150) + item_98 * *(context + 0x148) + item_90 * *(context + 0x158);
    item_c8 = fpu_val_7_38 + fpu_val_6_38 + fpu_val_6_40 + item_c8;
    int32_t item_c0;
    item_c0 = item_e8_1 + item_c0;
    int32_t item_b8;
    item_b8 = item_e0 + item_b8;
    long double fpu_val_7_47 = *(context + 0x160) + *(context + 0x148);
    memcpy(context + 0xb8, &item_c8, 0x18);
    *(context + 0x148) = fpu_val_7_47;
    *(context + 0x150) = *(context + 0x168) + *(context + 0x150);
    *(context + 0x158) = *(context + 0x170) + *(context + 0x158);
    return result;
}
