// IGI native provenance: Physics_UpdateForces_13 - 0x0050E520 - CFG score 73.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0050E520-Physics_UpdateForces_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_UpdateForces_13.h"
void* Physics_UpdateForces_13(void* context)

{
    void* result = context;
    void item_f8;
    memcpy(&item_f8, result, 0x14);
    int32_t context_val = 0;
    void item_6c;
    void* item_e8 = &item_6c;
    int32_t item_ec = 3;
    void* result_1 = nullptr;

    if (*(result + 0xc) > 0)
    {
        float* item_114_1 = nullptr;

        while (true)
        {
            int32_t data_val = *(result + 0x10);
            int32_t temp_1 = 0;
            long double fpu_val_7_1 = *(item_114_1 + data_val);
            long double f0_1 = g_bcabd0;
            fpu_val_7_1 - f0_1;
            temp_1 = context_val > 2;
            float* entity_2 = item_114_1 + data_val;
            int32_t context_1 = context_val & (temp_1 - 1);
            int32_t flagP1;

            flagP1 = !(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_2 = entity_2[1];
            long double f1_1 = g_bcabd4;
            fpu_val_7_2 - f1_1;
            int32_t dest_1;

            dest_1 = !(*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_4 = g_bcabd8 + 1.0f;
            long double f2_1 = *entity_2;
            fpu_val_7_4 - f2_1;
            int32_t source_1;

            source_1 = !(*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_6 = g_bcabdc + 1.0f;
            long double f3_1 = entity_2[1];
            fpu_val_7_6 - f3_1;
            int32_t temp_3;

            temp_3 = !(*(&((fpu_val_7_6 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_6, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_8 = 1.0f / entity_2[2];
            int32_t data_3 = context_1 * 0x28;
            item_c0;
            *(&item_c0 + data_3) = (((temp_3 * 2) | source_1) << 1 | dest_1) << 1 | flagP1;
            int32_t item_e4[0x1e];
            item_e4[context_1 * 0xa] = *entity_2;
            item_e0;
            *(&item_e0 + data_3) = entity_2[1];
            item_dc;
            *(&item_dc + data_3) = fpu_val_7_8;
            item_d8;
            *(&item_d8 + data_3) = fpu_val_7_8 * entity_2[3];
            item_d4;
            *(&item_d4 + data_3) = entity_2[4] * *(&item_dc + data_3);
            item_d0;
            *(&item_d0 + data_3) = entity_2[5] * *(&item_dc + data_3);
            item_cc;
            *(&item_cc + data_3) = entity_2[6] * *(&item_dc + data_3);
            item_c8;
            *(&item_c8 + data_3) = entity_2[7] * *(&item_dc + data_3);
            item_c4;
            *(&item_c4 + data_3) = entity_2[8] * *(&item_dc + data_3);

            if (item_114_1 > 0x24)
            {
                int32_t item_108 = 2;
                int32_t item_fc_1 = 2;
                int32_t item_10c = 1;
                int32_t item_104 = 0;
                int32_t item_100_1 = 1;
                void* item_128_1 = &item_f8;
                int32_t** (* item_12c_1)(int32_t* context, int32_t* param_2) = sub_50e730;
                int32_t item_130_1 = g_bcadc0;
                int32_t data_5 = (&item_108)[context_1];
                void item_158;
                memcpy(&item_158, &item_158 + (&item_104)[context_1] * 0x28 + 0x74, 0x28);
                int32_t data_7 = (&item_10c)[context_1];
                void item_180;
                memcpy(&item_180, &item_180 + data_5 * 0x28 + 0x9c, 0x28);
                void item_1a8;
                memcpy(&item_1a8, &item_1a8 + data_7 * 0x28 + 0xc4, 0x28);
                Physics_CalculateSplineLength_13();
            }

            result = result_1 + 1;
            context_val = context_1 + 1;
            result_1 = result;
            item_114_1 = &item_114_1[9];

            if (result >= *(context + 0xc))
                break;

            result = context;
        }
    }

    return result;
}
