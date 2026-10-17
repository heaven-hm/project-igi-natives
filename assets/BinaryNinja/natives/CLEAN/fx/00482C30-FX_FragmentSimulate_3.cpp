// IGI native provenance: FX_FragmentSimulate_3 - 0x00482C30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00482C30-FX_FragmentSimulate_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FragmentSimulate_3.h"
int32_t FX_FragmentSimulate_3(void* context)

{
    if (WeaponType_GetConfig_2(0x49))
        *(context + 0x110) = *(context + 0x110) - 512.0f;

    if (WeaponType_GetConfig_2(0x51))
        *(context + 0x110) = *(context + 0x110) + 512.0f;

    long double fpu_val_7_5 = *(context + 0x110);
    long double f0 = 1024.0f;
    fpu_val_7_5 - f0;

    if (!(*(&((fpu_val_7_5 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_5 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_6 = *(context + 0x110);
        long double f1_1 = 409600.0f;
        fpu_val_7_6 - f1_1;

        if (!(*(&((fpu_val_7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0x110) = 0x48c80000;
    }
    else
        *(context + 0x110) = 0x44800000;

    if (WeaponType_GetConfig_2(0x48))
        *(context + 0x108) = *(context + 0x108) - 0.0872664675f;

    if (WeaponType_GetConfig_2(0x50))
        *(context + 0x108) = *(context + 0x108) + 0.0872664675f;

    long double fpu_val_7_11 = *(context + 0x108);
    long double f2 = -1.55334306f;
    fpu_val_7_11 - f2;

    if (*(&((fpu_val_7_11 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f2 ? 1 : 0) << 0xe) + 1) & 1)
        *(context + 0x108) = 0xbfc6d3f2;

    long double fpu_val_7_12 = *(context + 0x108);
    long double f3 = 1.55334306f;
    fpu_val_7_12 - f3;

    if (!(*(&((fpu_val_7_12 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f3) ? 1 : 0) << 0xa
            | (fpu_val_7_12 == f3 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(context + 0x108) = 0x3fc6d3f2;

    if (WeaponType_GetConfig_2(0x4b))
        *(context + 0x10c) = *(context + 0x10c) - 0.0872664675f;

    int32_t result = WeaponType_GetConfig_2(0x4d);

    if (result)
        *(context + 0x10c) = *(context + 0x10c) + 0.0872664675f;

    return result;
}
