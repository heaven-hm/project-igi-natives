// IGI native provenance: Script_ParseEnumReal32_20 - 0x004F7C20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F7C20-Script_ParseEnumReal32_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32_20.h"
int32_t Script_ParseEnumReal32_20(void* context)

{
    int32_t result = 0;
    long double fpu_val_7_1 = *(context + 0x2c7c) * 0.5f;
    double* entity_val = context + 0x78;
    int32_t i_1 = 7;
    int32_t i;

    do
    {
        int32_t j_1 = 7;
        int32_t j;

        do
        {
            int32_t k_1 = 7;
            int32_t k;

            do
            {
                long double fpu_val_6_3 = fabsl(entity_val[-2] - *(context + 0x2c08));
                fpu_val_7_1 - fpu_val_6_3;

                if (!(*(&((fpu_val_7_1 < fpu_val_6_3 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, fpu_val_6_3) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == fpu_val_6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double fpu_val_6_5 = fabsl(entity_val[-1] - *(context + 0x2c10));
                    fpu_val_7_1 - fpu_val_6_5;

                    if (!(*(&((fpu_val_7_1 < fpu_val_6_5 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_1, fpu_val_6_5) ? 1 : 0) << 0xa
                        | (fpu_val_7_1 == fpu_val_6_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double fpu_val_6_7 = fabsl(*entity_val - *(context + 0x2c18));
                        fpu_val_7_1 - fpu_val_6_7;

                        if (!(*(&((fpu_val_7_1 < fpu_val_6_7 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_1, fpu_val_6_7) ? 1 : 0) << 0xa
                                | (fpu_val_7_1 == fpu_val_6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            result |= *(entity_val + 0xc);
                    }
                }

                entity_val = &entity_val[4];
                k = k_1;
                k_1 -= 1;
            } while (k != 1);
            j = j_1;
            j_1 -= 1;
        } while (j != 1);
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
