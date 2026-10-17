// IGI native provenance: Weapon_EjectShell_3 - 0x004748B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004748B0-Weapon_EjectShell_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_EjectShell_3.h"
float Weapon_EjectShell_3(float context) {
    float entity_val = context;
    long double fpu_val_7_1 = *(entity_val + 0x1e4) * 0.0174532924f;
    long double fpu6 = *(entity_val + 0x1f8);
    fpu6 - fpu_val_7_1;
    float result;
    result = (fpu6 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu6 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double fpu_val_7_4 = *(entity_val + 0x1e0) * 0.0174532924f;
        long double fpu_val_6_1 = *(entity_val + 0x1f8);
        fpu_val_6_1 - fpu_val_7_4;
        result = (fpu_val_6_1 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_4) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_4 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
            *(entity_val + 0x1f8) = fpu_val_7_4;
    }
    else
        *(entity_val + 0x1f8) = fpu_val_7_1;

    long double fpu_val_7_7 = *(entity_val + 0x1e8) * 0.0174532924f;
    context = fpu_val_7_7;
    long double f0 = 6.2831853071795889;
    fpu_val_7_7 - f0;
    result = (fpu_val_7_7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double fpu_val_7_10 = -(*(entity_val + 0x1e8)) * 0.0174532924f;
        long double fpu_val_6_2 = *(entity_val + 0x1fc);
        fpu_val_6_2 - fpu_val_7_10;
        result = (fpu_val_6_2 < fpu_val_7_10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_10) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_10 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
        {
            *(entity_val + 0x1fc) = fpu_val_7_10;
            return result;
        }

        long double fpu_val_7_12 = *(entity_val + 0x1fc);
        long double f1_1 = context;
        fpu_val_7_12 - f1_1;
        result = (fpu_val_7_12 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_12 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            result = context;
            *(entity_val + 0x1fc) = result;
        }
    }

    return result;
}
