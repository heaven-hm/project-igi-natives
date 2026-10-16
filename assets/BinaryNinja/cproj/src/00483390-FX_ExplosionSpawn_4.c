#include "gi_platform.h"
#include "00483390-FX_ExplosionSpawn_4.h"
int32_t FX_ExplosionSpawn_4(void* a1)

{
    void* valA = Config_GetActivePlayerProfileRecord();
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x110));
    long double f0 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
    fpu7 - f0;
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x110));

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f1_1 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
        x87_r7_1 - f1_1;

        if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) - 341.333344.0f;
            (*(int32_t*)(uintptr_t)(a1 + 0x110)) = x87_r7_4;
            long double f3_1 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
            x87_r7_4 - f3_1;

            if (*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                (*(int32_t*)(uintptr_t)(a1 + 0x110)) = (*(int32_t*)(uintptr_t)(a1 + 0x114));
        }
    }
    else
    {
        long double x87_r7_2 = x87_r7_1 + 341.333344.0f;
        (*(int32_t*)(uintptr_t)(a1 + 0x110)) = x87_r7_2;
        long double f2_1 = (*(int32_t*)(uintptr_t)(a1 + 0x114));
        x87_r7_2 - f2_1;

        if (!(*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0x110)) = (*(int32_t*)(uintptr_t)(a1 + 0x114));
    }

    if (WeaponType_GetConfig_2(0x49))
        (*(int32_t*)(uintptr_t)(a1 + 0x114)) = (*(int32_t*)(uintptr_t)(a1 + 0x114)) - 512.0f;

    if (WeaponType_GetConfig_2(0x51))
        (*(int32_t*)(uintptr_t)(a1 + 0x114)) = (*(int32_t*)(uintptr_t)(a1 + 0x114)) + 512.0f;

    int32_t result = (*(int32_t*)(uintptr_t)(valA + 0x538));
    long double x87_r7_9 = g_bc20f8;

    if (result)
        x87_r7_9 = -(x87_r7_9);

    long double x87_r7_11 = x87_r7_9 * 0.69813174.0f + (*(int32_t*)(uintptr_t)(a1 + 0x108));
    long double f4 = -1.30899692.0f;
    x87_r7_11 - f4;
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = x87_r7_11;
    bool c1 = /* bool c1 = unknown  {fst dword [srcS+0x108], fp0} */;
    result = (x87_r7_11 < f4 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7_11, f4) ? 1 : 0) << 0xa | (x87_r7_11 == f4 ? 1 : 0) << 0xe
        | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double f5_1 = 1.30899692.0f;
        x87_r7_11 - f5_1;
        result = (x87_r7_11 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0x3fa78d36;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0xbfa78d36;

    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = g_bc20f4 * -0.69813174.0f + (*(int32_t*)(uintptr_t)(a1 + 0x10c));
    return result;
}
