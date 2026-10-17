// IGI native provenance: RainDynCubeObj_Update - 0x004F77C0 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F77C0-RainDynCubeObj_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RainDynCubeObj_Update.h"
int32_t** RainDynCubeObj_Update(void* context)

{
    Script_ParseEnumReal32_5();
    long double fpu7 = *(context + 0x2c08);
    long double f1 = 0.0;
    fpu7 - f1;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        *(context + 0x2c54) = g_bcab08 - *(context + 0x2c08);
        *(context + 0x2c58) = g_bcab10 - *(context + 0x2c10);
        *(context + 0x2c5c) = g_bcab18 - *(context + 0x2c18);
        long double fpu_val_7_7 = *(context + 0x2c54);
        long double f2_1 = -20480.0f;
        fpu_val_7_7 - f2_1;
        long double fpu_val_7_8;

        if (!(*(&((fpu_val_7_7 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_7 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fpu_val_7_9 = *(context + 0x2c54);
            long double f3_1 = 20480.0f;
            fpu_val_7_9 - f3_1;

            if (*(&((fpu_val_7_9 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                fpu_val_7_8 = *(context + 0x2c54);
            else
                fpu_val_7_8 = 20480.0f;
        }
        else
            fpu_val_7_8 = -20480.0f;

        *(context + 0x2c54) = fpu_val_7_8;
        long double fpu_val_6_1 = *(context + 0x2c58);
        long double f4_1 = -20480.0f;
        fpu_val_6_1 - f4_1;
        long double fpu_val_6_2;

        if (!(*(&((fpu_val_6_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double fpu_val_6_3 = *(context + 0x2c58);
            long double f5_1 = 20480.0f;
            fpu_val_6_3 - f5_1;

            if (*(&((fpu_val_6_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                fpu_val_6_2 = *(context + 0x2c58);
            else
                fpu_val_6_2 = 20480.0f;
        }
        else
            fpu_val_6_2 = -20480.0f;

        *(context + 0x2c58) = fpu_val_6_2;
        long double fpu_val_5_1 = *(context + 0x2c5c);
        long double f6_1 = -20480.0f;
        fpu_val_5_1 - f6_1;
        long double fpu_val_5_2;

        if (!(*(&((fpu_val_5_1 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_1, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_5_1 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            long double fpu_val_5_3 = *(context + 0x2c5c);
            long double f7_1 = 20480.0f;
            fpu_val_5_3 - f7_1;

            if (*(&((fpu_val_5_3 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_3, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_3 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                fpu_val_5_2 = *(context + 0x2c5c);
            else
                fpu_val_5_2 = 20480.0f;
        }
        else
            fpu_val_5_2 = -20480.0f;

        *(context + 0x2c54) = fpu_val_7_8 * 0.5f;
        *(context + 0x2c58) = fpu_val_6_2 * 0.5f;
        *(context + 0x2c5c) = fpu_val_5_2 * 0.5f;
    }

    memcpy(context + 0x2c08, &g_bcab08, 0x18);
    void item_28;
    memcpy(&item_28, &g_bcaae0, 0x28);
    int32_t item_10;
    *(context + 0x2c48) = item_10;
    int32_t item_c;
    *(context + 0x2c4c) = item_c;
    int32_t item_8;
    *(context + 0x2c50) = item_8;
    Script_VisibleCubesD(context);
    int32_t** result = *(context + 0x2cac);

    if (!result)
        return result;

    return Script_ParseEnumInt32_20(context);
}
