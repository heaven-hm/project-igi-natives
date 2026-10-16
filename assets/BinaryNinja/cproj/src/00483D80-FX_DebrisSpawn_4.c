#include "gi_platform.h"
#include "00483D80-FX_DebrisSpawn_4.h"
int32_t* FX_DebrisSpawn_4(void* a1)

{
    int32_t* result = FX_DebrisSpawn_2(a1);

    if (!result || !((*(int32_t*)(uintptr_t)(a1 + 0x124)) & 1))
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x110));
        long double f0_1 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
        x87_r7_1 - f0_1;
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x110));

        if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f1_1 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
            x87_r7_2 - f1_1;

            if (!(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) - 341.333344.0f;
                (*(int32_t*)(uintptr_t)(a1 + 0x110)) = x87_r7_5;
                long double f3_1 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
                x87_r7_5 - f3_1;

                if (*(&((x87_r7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                    (*(int32_t*)(uintptr_t)(a1 + 0x110)) = (*(int32_t*)(uintptr_t)(a1 + 0x114));
            }
        }
        else
        {
            long double x87_r7_3 = x87_r7_2 + 341.333344.0f;
            (*(int32_t*)(uintptr_t)(a1 + 0x110)) = x87_r7_3;
            long double f2_1 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
            x87_r7_3 - f2_1;

            if (!(*(&((x87_r7_3 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                (*(int32_t*)(uintptr_t)(a1 + 0x110)) = (*(int32_t*)(uintptr_t)(a1 + 0x114));
        }

        if (WeaponType_GetConfig_2(0x49))
            (*(int32_t*)(uintptr_t)(a1 + 0x114)) = (*(int32_t*)(uintptr_t)(a1 + 0x114)) - 512.0f;

        int32_t valA3;
        int32_t objC2;
        valA3 = WeaponType_GetConfig_2(0x51);

        if (valA3)
            (*(int32_t*)(uintptr_t)(a1 + 0x114)) = (*(int32_t*)(uintptr_t)(a1 + 0x114)) + 512.0f;

        int32_t v_8_1 = objC2;
        int32_t v_c_1 = objC2;
        result = FX_TrailUpdate_4(a1, g_bc20f8 * 0.69813174.0f, g_bc20f4 * 0.69813174.0f);
        long double x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0x108));
        long double f4_1 = -1.30899692.0f;
        x87_r7_14 - f4_1;
        result = (x87_r7_14 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == f4_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0xbfa78d36;
            return result;
        }

        long double x87_r7_15 = (*(int32_t*)(uintptr_t)(a1 + 0x108));
        long double f5_1 = 1.30899692.0f;
        x87_r7_15 - f5_1;
        result = (x87_r7_15 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0x3fa78d36;
    }

    return result;
}
