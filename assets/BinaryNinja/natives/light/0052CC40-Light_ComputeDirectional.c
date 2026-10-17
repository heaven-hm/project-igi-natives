// IGI native provenance: Light_ComputeDirectional - 0x0052CC40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052CC40-Light_ComputeDirectional.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_ComputeDirectional.h"
int32_t Light_ComputeDirectional(float* context)

{
    float* dest_val = context;
    int32_t* data_val = dest_val[0x14];
    int32_t* item_24 = nullptr;
    (*(*data_val + 0xc))(data_val, 0x20, &item_24, 0);
    *item_24 = 0;
    item_24[1] = 0;
    item_24[2] = g_bcadbc * 0.800000012f;
    float item_20 = 1.57079637f;
    int32_t item_c = 0xf;
    item_24[3] = Light_ApplyLightmap_9(dest_val, dest_val, dest_val, dest_val, 0.0f, 0.0f);
    int32_t* entity_4 = &item_24[4];
    item_24 = entity_4;

    while (true)
    {
        long double fpu_val_7_3 = item_20 - 0.104719758f;
        float item_1c_1 = 0.0f;
        float item_18_1 = 0.0f;
        item_20 = fpu_val_7_3;
        long double f0_1 = dest_val[0x12];
        fpu_val_7_3 - f0_1;
        float* source_1;
        long double fpu_val_7_6;

        if (*(&((fpu_val_7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double fpu_val_7_8 = dest_val[0x12] * 0.5f;
            long double fpu_val_6_3 = item_20;
            source_1 = &dest_val[6];
            fpu_val_6_3 - fpu_val_7_8;

            fpu_val_7_6 = *(&((fpu_val_6_3 < fpu_val_7_8 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_3, fpu_val_7_8) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == fpu_val_7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 ? 0.0f
                : item_20 / fpu_val_7_8 - 1.0f;
        }
        else
        {
            source_1 = dest_val;
            fpu_val_7_6 = (item_20 - dest_val[0x12]) / (1.57079637f - dest_val[0x12]);
        }

        long double fpu_val_6_4 = item_20;
        long double fp0_1;
        bool c1_1;
        bool c2_3;
        fp0_1 = __fcos(fpu_val_6_4);
        int32_t i_3 = 0x14;
        float item_14_1 = fp0_1;
        long double fp0_2;
        bool c1_2;
        bool c2_4;
        fp0_2 = __fsin(fpu_val_6_4);
        float item_8_1 = fp0_2;
        float item_4_1 = 1.0f - fpu_val_7_6;
        int32_t i;

        do
        {
            long double fp0_3;
            bool c1_3;
            bool c2_5;
            fp0_3 = __fcos(item_18_1);
            *entity_4 = fp0_3 * g_bcadbc * 0.800000012f * item_14_1;
            long double fp0_4;
            bool c1_4;
            bool c2_6;
            fp0_4 = __fsin(item_18_1);
            item_24[1] = fp0_4 * g_bcadbc * 0.800000012f * item_14_1;
            item_24[2] = g_bcadbc * 0.800000012f * item_8_1;
            long double fpu_val_7_23 = item_1c_1;
            long double f1_1 = 1.0f;
            fpu_val_7_23 - f1_1;
            long double fpu_val_7_25;

            fpu_val_7_25 = !(*(&((fpu_val_7_23 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_23, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_23 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? item_1c_1 - 1.0f : 1.0f - item_1c_1;

            item_24[3] = Light_ApplyLightmap_9(source_1, &source_1[3], &source_1[6], &source_1[9], fpu_val_7_25, item_4_1);
            item_1c_1 = item_1c_1 + 0.100000001f;
            entity_4 = &item_24[4];
            i = i_3;
            i_3 -= 1;
            item_24 = entity_4;
            item_18_1 = item_18_1 + 0.314159274f;
        } while (i != 1);
        bool flag_0_1 = item_c != 1;
        item_c -= 1;

        if (!flag_0_1)
            break;

        dest_val = context;
    }

    int32_t i_2 = 0x14;
    int32_t i_1;

    do
    {
        *entity_4 = entity_4[-0x50];
        int32_t* data_10 = item_24;
        data_10[1] = data_10[-0x4f];
        item_24[2] = g_bcadbc * 0.800000012f * -0.5f;
        int32_t* data_12 = item_24;
        data_12[3] = data_12[-0x4d];
        entity_4 = &item_24[4];
        i_1 = i_2;
        i_2 -= 1;
        item_24 = entity_4;
    } while (i_1 != 1);
    int32_t* data_13 = context[0x14];
    return (*(*data_13 + 0x10))(data_13);
}
