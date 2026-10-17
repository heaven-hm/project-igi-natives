// IGI native provenance: FX_000011 - 0x00489C60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489C60-FX_000011.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_000011.h"
int32_t FX_000011(void* context, int32_t* param_2)

{
    float item_30 = param_2[2];
    long double fpu_val_7_1 = -(item_30);
    long double fpu_val_6_1 = -(param_2[3]);
    float item_28 = param_2[4];
    int32_t data_2 = *(*param_2 + 0x44);
    long double fpu_val_5_1 = -(item_28);
    item_30 = fpu_val_5_1 * *(context + 0x90) + fpu_val_6_1 * *(context + 0x84) + fpu_val_7_1 * *(context + 0x78);
    long double fpu_val_7_3 =
        fpu_val_5_1 * *(context + 0x94) + fpu_val_6_1 * *(context + 0x88) + fpu_val_7_1 * *(context + 0x7c);
    int32_t result;

    if (data_2 < 0x1e)
    {
        result = *((data_2 << 2) + &g_5412a4);

        if (result == 0xc)
            goto label_489cec;

    label_489d6d:
        long double f1_1 = 0.0f;
        fpu_val_7_3 - f1_1;

        if (!(*(&((fpu_val_7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            WeaponType_InitType_2(&item_30, context, 4, "000_01_1");
            long double fpu_val_7_5 = item_30 + *(context + 0x20);
            void* data_5 = *param_2;
            item_30 = fpu_val_7_5;
            item_28 = item_28 + *(context + 0x28);
            double item_20;
            double item_20_1 = item_20 + *(context + 0x30);
            double item_18 = *(data_5 + 8) - fpu_val_7_5;
            double item_10_1 = *(data_5 + 0x10) - item_28;
            double item_8_1 = *(data_5 + 0x18) - item_20_1;
            long double fp0_1 = Sys_OpenFileStream_11(&item_18);
            long double f3_1 = 614.39999999999998;
            fp0_1 - f3_1;

            if (*(&((fp0_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f3_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                return 0xf;
        }
    }
    else
    {
        result = 0xc;
    label_489cec:
        long double f2_1 = 0.0f;
        fpu_val_7_3 - f2_1;

        if (*(&((fpu_val_7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double f5_1 = 0.0f;
            fpu_val_7_3 - f5_1;
            long double fpu_val_6_6 = fpu_val_7_3;

            if (*(&((fpu_val_7_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_3 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                fpu_val_6_6 = -(fpu_val_6_6);

            long double fpu_val_5_5 = item_30;
            long double f7_1 = 0.0f;
            fpu_val_5_5 - f7_1;
            long double fpu_val_5_6 = item_30;

            if (*(&((fpu_val_5_5 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_5, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_5 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                fpu_val_5_6 = -(fpu_val_5_6);

            fpu_val_6_6 - fpu_val_5_6;

            if (!(*(&((fpu_val_6_6 < fpu_val_5_6 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_6, fpu_val_5_6) ? 1 : 0) << 0xa
                    | (fpu_val_6_6 == fpu_val_5_6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                result = 0xe;
        }

        long double f4_1 = 0.0f;
        fpu_val_7_3 - f4_1;

        if (!(*(&((fpu_val_7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double fpu_val_6_9 = item_30;
            long double f6_1 = 0.0f;
            fpu_val_6_9 - f6_1;
            long double fpu_val_6_10 = item_30;

            if (*(&((fpu_val_6_9 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_9, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_9 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                fpu_val_6_10 = -(fpu_val_6_10);

            fpu_val_7_3 - fpu_val_6_10;

            if (!(*(&((fpu_val_7_3 < fpu_val_6_10 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_3, fpu_val_6_10) ? 1 : 0) << 0xa
                    | (fpu_val_7_3 == fpu_val_6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                result = 0xd;

            goto label_489d6d;
        }
    }

    return result;
}
