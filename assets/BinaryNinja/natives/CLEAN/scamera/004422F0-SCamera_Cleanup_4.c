// IGI native provenance: SCamera_Cleanup_4 - 0x004422F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004422F0-SCamera_Cleanup_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Cleanup_4.h"
void* SCamera_Cleanup_4(float context, float param_2)

{
    void* result = *(context + 0x25d0);

    if (!*(result + 0x170))
    {
        long double fpu_val_7_1 = *(context + 0x9c);
        long double fpu_val_6_1 = *(context + 0xa0);
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_2;

        if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_2 = *(context + 0xa0);
        else
            fpu_val_7_2 = *(context + 0x9c);

        long double fpu_val_6_2 = *(context + 0x98);
        fpu_val_6_2 - fpu_val_7_2;
        long double fpu_val_7_4;

        if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_5 = *(context + 0x9c);
            long double fpu_val_6_3 = *(context + 0xa0);
            fpu_val_6_3 - fpu_val_7_5;

            if (!(*(&((fpu_val_6_3 < fpu_val_7_5 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_5) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_4 = *(context + 0xa0);
            else
                fpu_val_7_4 = *(context + 0x9c);
        }
        else
            fpu_val_7_4 = *(context + 0x98);

        int32_t item_8_1 = 1;
        float item_14_1 = context;
        long double fp0_2;
        fp0_2 = Level_CheckQTaskID_5(param_2, context + 0x20, Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_4);
        long double fpu_val_7_9 = fp0_2 + *(context + 0x104);
        *(context + 0x104) = fpu_val_7_9;
        long double f0_1 = *(context + 0x108);
        fpu_val_7_9 - f0_1;
        result = (fpu_val_7_9 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_9 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
            *(context + 0x25cc) = 1;
    }

    return result;
}
