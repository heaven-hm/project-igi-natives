// IGI native provenance: Physics_ApplyImpulse_13 - 0x0050E1E0 - CFG score 75.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0050E1E0-Physics_ApplyImpulse_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ApplyImpulse_13.h"
void* Physics_ApplyImpulse_13(void* context)

{
    void* result = context;
    int32_t item_5c;
    memcpy(&item_5c, result, 0x14);
    int32_t context_val = 0;
    void item_48;
    void* item_4c = &item_48;
    bool flag_0 = *(result + 0xc) <= 0;
    int32_t item_50 = 2;
    item_5c = 0;
    void* result_1 = nullptr;

    if (!flag_0)
    {
        int32_t item_b4_1 = 0;

        while (true)
        {
            float* temp_2 = *(result + 0x10) + item_b4_1;
            int32_t flagP1 = context_val;
            long double fpu_val_7_1 = *temp_2;
            long double f0_1 = g_bcabd0;
            fpu_val_7_1 - f0_1;
            int32_t dest_1;

            dest_1 = !(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_2 = temp_2[1];
            long double f1_1 = g_bcabd4;
            fpu_val_7_2 - f1_1;
            int32_t source_1;

            source_1 = !(*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_4 = g_bcabd8 + 1.0f;
            long double f2_1 = *temp_2;
            fpu_val_7_4 - f2_1;
            int32_t entity_1;

            entity_1 = !(*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_6 = g_bcabdc + 1.0f;
            long double f3_1 = temp_2[1];
            fpu_val_7_6 - f3_1;
            int32_t data_2;

            data_2 = !(*(&((fpu_val_7_6 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_6, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            context_val = (((data_2 * 2) | entity_1) << 1 | source_1) << 1 | dest_1;

            if (item_b4_1 > 0)
            {
                if (!(context_val | flagP1))
                {
                    memcpy(&item_48, &temp_2[-9], 0x24);
                    void item_24;
                    memcpy(&item_24, temp_2, 0x24);
                    item_5c = 1;
                    Physics_InterpolateWaypoint_13(&item_5c);
                }
                else if (!(flagP1 & context_val))
                {
                    long double fpu_val_7_8 = 1.0f / temp_2[-7];
                    int32_t entity_4 = temp_2[-8];
                    int32_t item_ac = temp_2[-9];
                    int32_t item_a8_1 = entity_4;
                    int32_t entity_5 = temp_2[1];
                    float item_84 = *temp_2;
                    int32_t data_6 = g_bcadc0;
                    int32_t item_80_1 = entity_5;
                    int32_t item_88_1 = flagP1;
                    int32_t item_60_1 = context_val;
                    float item_a4_1 = fpu_val_7_8;
                    float item_a0_1 = fpu_val_7_8 * temp_2[-6];
                    float item_9c_1 = item_a4_1 * temp_2[-5];
                    float item_98_1 = item_a4_1 * temp_2[-4];
                    float item_94_1 = item_a4_1 * temp_2[-3];
                    float item_90_1 = item_a4_1 * temp_2[-2];
                    float item_8c_1 = item_a4_1 * temp_2[-1];
                    long double fpu_val_7_21 = 1.0f / temp_2[2];
                    float item_7c_1 = fpu_val_7_21;
                    float item_78_1 = fpu_val_7_21 * temp_2[3];
                    float item_74_1 = item_7c_1 * temp_2[4];
                    float item_70 = item_7c_1 * temp_2[5];
                    float item_6c = item_7c_1 * temp_2[6];
                    float item_68_1 = item_7c_1 * temp_2[7];
                    long double fpu_val_7_32 = item_7c_1 * temp_2[8];
                    item_5c = 0;
                    int32_t* item_c8_1 = &item_5c;
                    void (* item_cc_1)(int32_t* context, int32_t* param_2) = sub_50e450;
                    int32_t item_d0_1 = data_6;
                    float item_64_1 = fpu_val_7_32;
                    void item_f8;
                    memcpy(&item_f8, &item_ac, 0x28);
                    void item_120;
                    memcpy(&item_120, &item_84, 0x28);
                    void item_148;
                    memcpy(&item_148, &item_ac, 0x28);
                    Physics_CalculateSplineLength_13();
                }
            }

            result = result_1 + 1;
            item_b4_1 += 0x24;
            result_1 = result;

            if (result >= *(context + 0xc))
                break;

            result = context;
        }
    }

    return result;
}
