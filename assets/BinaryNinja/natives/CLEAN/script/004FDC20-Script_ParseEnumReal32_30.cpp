// IGI native provenance: Script_ParseEnumReal32_30 - 0x004FDC20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FDC20-Script_ParseEnumReal32_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32_30.h"
long double Script_ParseEnumReal32_30(void* context)

{
    double item_18 = *(context + 0xa0) - *(context + 0x88);
    long double fpu_val_7_3 = *(context + 0xa8) - *(context + 0x90);
    double item_10 = fpu_val_7_3;
    long double fpu_val_6_2 = item_18;
    long double f0 = 0.0;
    fpu_val_6_2 - f0;

    if (*(&((fpu_val_6_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f0) ? 1 : 0) << 0xa
        | (fpu_val_6_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        long double f1_1 = 0.0;
        fpu_val_7_3 - f1_1;

        if (*(&((fpu_val_7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double fpu_val_7_4 = *(context + 0xb0) - *(context + 0x98);
            long double f3_1 = 0.0;
            fpu_val_7_4 - f3_1;

            if (*(&((fpu_val_7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 1.0f;
        }
    }

    long double result = Sys_OpenFileStream_11(&item_18) * 0.5 + 8192.0f;
    long double f2 = 1.0f;
    result - f2;

    if (!(*(&((result < f2 ? 1 : 0) << 8 | (FCMP_UO(result, f2) ? 1 : 0) << 0xa
            | (result == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return result;

    return 1.0f;
}
