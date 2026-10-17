// Original IGI.EXE function: FX_ExplosionSpawn_4 (VA 0x00483390; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_4.h"
int32_t FX_ExplosionSpawn_4(void* context)

{
    void* data_val = Config_GetActivePlayerProfileRecord();
    long double fpu7 = *(context + 0x110);
    long double f0 = *(context + 0x114);
    fpu7 - f0;
    long double fpu_val_7_1 = *(context + 0x110);

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f1_1 = *(context + 0x114);
        fpu_val_7_1 - f1_1;

        if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double fpu_val_7_4 = *(context + 0x110) - 341.333344f;
            *(context + 0x110) = fpu_val_7_4;
            long double f3_1 = *(context + 0x114);
            fpu_val_7_4 - f3_1;

            if (*(&((fpu_val_7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                *(context + 0x110) = *(context + 0x114);
        }
    }
    else
    {
        long double fpu_val_7_2 = fpu_val_7_1 + 341.333344f;
        *(context + 0x110) = fpu_val_7_2;
        long double f2_1 = *(context + 0x114);
        fpu_val_7_2 - f2_1;

        if (!(*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0x110) = *(context + 0x114);
    }

    if (WeaponType_GetConfig_2(0x49))
        *(context + 0x114) = *(context + 0x114) - 512.0f;

    if (WeaponType_GetConfig_2(0x51))
        *(context + 0x114) = *(context + 0x114) + 512.0f;

    int32_t result = *(data_val + 0x538);
    long double fpu_val_7_9 = g_bc20f8;

    if (result)
        fpu_val_7_9 = -(fpu_val_7_9);

    long double fpu_val_7_11 = fpu_val_7_9 * 0.69813174f + *(context + 0x108);
    long double f4 = -1.30899692f;
    fpu_val_7_11 - f4;
    *(context + 0x108) = fpu_val_7_11;
    bool c1 = /* bool c1 = unknown  {fst dword [source_val+0x108], fp0} */;
    result = (fpu_val_7_11 < f4 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(fpu_val_7_11, f4) ? 1 : 0) << 0xa | (fpu_val_7_11 == f4 ? 1 : 0) << 0xe
        | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double f5_1 = 1.30899692f;
        fpu_val_7_11 - f5_1;
        result = (fpu_val_7_11 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            *(context + 0x108) = 0x3fa78d36;
    }
    else
        *(context + 0x108) = 0xbfa78d36;

    *(context + 0x10c) = g_bc20f4 * -0.69813174f + *(context + 0x10c);
    return result;
}
