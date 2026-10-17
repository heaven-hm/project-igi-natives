// IGI native provenance: AreaActivate_Setup - 0x005045F0 - CFG score 75.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005045F0-AreaActivate_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AreaActivate_Setup.h"
int32_t AreaActivate_Setup(void* context)

{
    long double fpu7 = -1.7976931348623157e+308;
    double item_28 = fpu7;
    int32_t data_val = *(context + 0xb0);
    int32_t item_50 = 0xffffffff;
    int32_t item_4c = 0x7fefffff;
    int32_t item_48 = 0xffffffff;
    int32_t item_44 = 0x7fefffff;
    int32_t result_1 = 0xffffffff;
    int32_t item_3c = 0x7fefffff;
    int32_t item_38 = 0xffffffff;
    int32_t item_34 = 0xffefffff;
    int32_t result_2 = 0xffffffff;
    int32_t item_2c = 0xffefffff;
    *(context + 0xac) = 0;

    if (data_val)
    {
        fpu7 = item_28;
        *(context + 0xac) = Sys_CheckHeap_22(data_val);
    }

    *(context + 0x90) = *(context + 0x9c);
    *(context + 0x94) = *(context + 0xa0);
    *(context + 0x98) = *(context + 0xa4);
    float item_78 = *(context + 0x90) * 0.5f;
    long double fpu_val_6_3 = *(context + 0x94) * 0.5f;
    *(context + 0x90) = item_78;
    int32_t i = 0;
    float item_74 = fpu_val_6_3;
    long double fpu_val_6_5 = *(context + 0x98) * 0.5f;
    *(context + 0x94) = item_74;
    float item_70 = fpu_val_6_5;
    *(context + 0x98) = item_70;
    int32_t result;

    do
    {
        long double fpu_val_6_7 = item_78 * (1 - ((i & 1) << 1));
        result = i >> 1 & 2;
        long double fpu_val_5_5 = (1 - (i & 2)) * item_74;
        double item_60_2 = fpu_val_5_5;
        long double fpu_val_4_2 = (1 - result) * item_70;
        double item_58_2 = fpu_val_4_2;
        double item_20 =
            *(context + 0x6c) * fpu_val_5_5 + *(context + 0x70) * fpu_val_4_2 + *(context + 0x68) * fpu_val_6_7;
        double item_18_1 =
            *(context + 0x78) * fpu_val_5_5 + *(context + 0x7c) * fpu_val_4_2 + *(context + 0x74) * fpu_val_6_7;
        double item_10_1 =
            *(context + 0x84) * fpu_val_5_5 + *(context + 0x88) * fpu_val_4_2 + *(context + 0x80) * fpu_val_6_7;
        void item_68;
        memcpy(&item_68, &item_20, 0x18);
        long double fpu_val_6_10 = item_20 + *(context + 0x50);
        long double fpu_val_5_8 = item_60_2 + *(context + 0x58);
        double item_60_3 = fpu_val_5_8;
        double item_58_3 = item_58_2 + *(context + 0x60);
        long double fpu_val_4_6 = item_50;
        fpu_val_4_6 - fpu_val_6_10;
        result = (fpu_val_4_6 < fpu_val_6_10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_6, fpu_val_6_10) ? 1 : 0) << 0xa
            | (fpu_val_4_6 == fpu_val_6_10 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 1))
            item_50 = fpu_val_6_10;

        long double fpu_val_4_8 = item_48;
        fpu_val_4_8 - fpu_val_5_8;
        result = (fpu_val_4_8 < fpu_val_5_8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_8, fpu_val_5_8) ? 1 : 0) << 0xa
            | (fpu_val_4_8 == fpu_val_5_8 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 1))
            item_48 = fpu_val_5_8;

        long double fpu_val_5_10 = result_1;
        long double f0_1 = item_58_3;
        fpu_val_5_10 - f0_1;
        result = (fpu_val_5_10 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_10, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_5_10 == f0_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 1))
        {
            result = item_58_3;
            result_1 = result;
            int32_t item_3c_1 = *(&item_58_3 + 4);
        }

        long double fpu_val_5_11 = item_38;
        fpu_val_5_11 - fpu_val_6_10;
        result = (fpu_val_5_11 < fpu_val_6_10 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_5_11, fpu_val_6_10) ? 1 : 0) << 0xa
            | (fpu_val_5_11 == fpu_val_6_10 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 0x41)
            item_38 = fpu_val_6_10;

        long double fpu_val_6_12 = result_2;
        long double f1_1 = item_60_3;
        fpu_val_6_12 - f1_1;
        result = (fpu_val_6_12 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
        {
            result = item_60_3;
            result_2 = result;
            int32_t item_2c_1 = *(&item_60_3 + 4);
        }

        long double f2_1 = item_58_3;
        fpu7 - f2_1;
        result = (fpu7 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2_1) ? 1 : 0) << 0xa
            | (fpu7 == f2_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
            fpu7 = item_58_3;

        i += 1;
    } while (i < 8);

    double item_28_1 = fpu7;
    memcpy(context + 0x20, &item_50, 0x18);
    memcpy(context + 0x38, &item_38, 0x18);
    return result;
}
