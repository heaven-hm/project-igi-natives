#include "00483390-FX_ExplosionSpawn_4.h"
/* 0x00483390 FX_ExplosionSpawn_4 full linked: callers=1 callees=3 */
int32_t sub_483390(void* a1)

{
    void* eax = Config_GetActivePlayerProfileRecord();
    long double x87_r7 = *(a1 + 0x110);
    long double temp0 = *(a1 + 0x114);
    x87_r7 - temp0;
    long double x87_r7_1 = *(a1 + 0x110);

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double temp1_1 = *(a1 + 0x114);
        x87_r7_1 - temp1_1;

        if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_4 = *(a1 + 0x110) - 341.333344f;
            *(a1 + 0x110) = x87_r7_4;
            long double temp3_1 = *(a1 + 0x114);
            x87_r7_4 - temp3_1;

            if (*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                *(a1 + 0x110) = *(a1 + 0x114);
        }
    }
    else
    {
        long double x87_r7_2 = x87_r7_1 + 341.333344f;
        *(a1 + 0x110) = x87_r7_2;
        long double temp2_1 = *(a1 + 0x114);
        x87_r7_2 - temp2_1;

        if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0x110) = *(a1 + 0x114);
    }

    if (WeaponType_GetConfig_2(0x49))
        *(a1 + 0x114) = *(a1 + 0x114) - 512f;

    if (WeaponType_GetConfig_2(0x51))
        *(a1 + 0x114) = *(a1 + 0x114) + 512f;

    int32_t result = *(eax + 0x538);
    long double x87_r7_9 = g_bc20f8;

    if (result)
        x87_r7_9 = -(x87_r7_9);

    long double x87_r7_11 = x87_r7_9 * 0.69813174f + *(a1 + 0x108);
    long double temp4 = -1.30899692f;
    x87_r7_11 - temp4;
    *(a1 + 0x108) = x87_r7_11;
    bool c1 = /* bool c1 = unknown  {fst dword [esi+0x108], st0} */;
    result = (x87_r7_11 < temp4 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7_11, temp4) ? 1 : 0) << 0xa | (x87_r7_11 == temp4 ? 1 : 0) << 0xe
        | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double temp5_1 = 1.30899692f;
        x87_r7_11 - temp5_1;
        result = (x87_r7_11 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp5_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            *(a1 + 0x108) = 0x3fa78d36;
    }
    else
        *(a1 + 0x108) = 0xbfa78d36;

    *(a1 + 0x10c) = g_bc20f4 * -0.69813174f + *(a1 + 0x10c);
    return result;
}
