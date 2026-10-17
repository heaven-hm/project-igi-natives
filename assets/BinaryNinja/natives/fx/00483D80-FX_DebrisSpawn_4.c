// Original IGI.EXE function: FX_DebrisSpawn_4 (VA 0x00483D80; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_4.h"
int32_t* FX_DebrisSpawn_4(void* context)

{
    int32_t* result = FX_DebrisSpawn_2(context);

    if (!result || !(*(context + 0x124) & 1))
    {
        long double fpu_val_7_1 = *(context + 0x110);
        long double f0_1 = *(context + 0x114);
        fpu_val_7_1 - f0_1;
        long double fpu_val_7_2 = *(context + 0x110);

        if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f1_1 = *(context + 0x114);
            fpu_val_7_2 - f1_1;

            if (!(*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_5 = *(context + 0x110) - 341.333344f;
                *(context + 0x110) = fpu_val_7_5;
                long double f3_1 = *(context + 0x114);
                fpu_val_7_5 - f3_1;

                if (*(&((fpu_val_7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                    *(context + 0x110) = *(context + 0x114);
            }
        }
        else
        {
            long double fpu_val_7_3 = fpu_val_7_2 + 341.333344f;
            *(context + 0x110) = fpu_val_7_3;
            long double f2_1 = *(context + 0x114);
            fpu_val_7_3 - f2_1;

            if (!(*(&((fpu_val_7_3 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_3, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                *(context + 0x110) = *(context + 0x114);
        }

        if (WeaponType_GetConfig_2(0x49))
            *(context + 0x114) = *(context + 0x114) - 512.0f;

        int32_t data_3;
        int32_t entity_2;
        data_3 = WeaponType_GetConfig_2(0x51);

        if (data_3)
            *(context + 0x114) = *(context + 0x114) + 512.0f;

        int32_t item_8_1 = entity_2;
        int32_t item_c_1 = entity_2;
        result = FX_TrailUpdate_4(context, g_bc20f8 * 0.69813174f, g_bc20f4 * 0.69813174f);
        long double fpu_val_7_14 = *(context + 0x108);
        long double f4_1 = -1.30899692f;
        fpu_val_7_14 - f4_1;
        result = (fpu_val_7_14 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_14 == f4_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            *(context + 0x108) = 0xbfa78d36;
            return result;
        }

        long double fpu_val_7_15 = *(context + 0x108);
        long double f5_1 = 1.30899692f;
        fpu_val_7_15 - f5_1;
        result = (fpu_val_7_15 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_15, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_15 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            *(context + 0x108) = 0x3fa78d36;
    }

    return result;
}
