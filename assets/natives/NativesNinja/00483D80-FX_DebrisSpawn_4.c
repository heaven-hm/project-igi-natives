#include "00483D80-FX_DebrisSpawn_4.h"
/* 0x00483d80 FX_DebrisSpawn_4 full linked: callers=1 callees=4 */
int32_t* sub_483d80(void* a1)

{
    int32_t* result = sub_482580(a1);

    if (!result || !(*(a1 + 0x124) & 1))
    {
        long double x87_r7_1 = *(a1 + 0x110);
        long double temp0_1 = *(a1 + 0x114);
        x87_r7_1 - temp0_1;
        long double x87_r7_2 = *(a1 + 0x110);

        if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double temp1_1 = *(a1 + 0x114);
            x87_r7_2 - temp1_1;

            if (!(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_5 = *(a1 + 0x110) - 341.333344f;
                *(a1 + 0x110) = x87_r7_5;
                long double temp3_1 = *(a1 + 0x114);
                x87_r7_5 - temp3_1;

                if (*(&((x87_r7_5 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                    *(a1 + 0x110) = *(a1 + 0x114);
            }
        }
        else
        {
            long double x87_r7_3 = x87_r7_2 + 341.333344f;
            *(a1 + 0x110) = x87_r7_3;
            long double temp2_1 = *(a1 + 0x114);
            x87_r7_3 - temp2_1;

            if (!(*(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                *(a1 + 0x110) = *(a1 + 0x114);
        }

        if (WeaponType_GetConfig_2(0x49))
            *(a1 + 0x114) = *(a1 + 0x114) - 512f;

        int32_t eax_3;
        int32_t ecx_2;
        eax_3 = WeaponType_GetConfig_2(0x51);

        if (eax_3)
            *(a1 + 0x114) = *(a1 + 0x114) + 512f;

        int32_t var_8_1 = ecx_2;
        int32_t var_c_1 = ecx_2;
        result = sub_483ec0(a1, g_bc20f8 * 0.69813174f, g_bc20f4 * 0.69813174f);
        long double x87_r7_14 = *(a1 + 0x108);
        long double temp4_1 = -1.30899692f;
        x87_r7_14 - temp4_1;
        result = (x87_r7_14 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == temp4_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            *(a1 + 0x108) = 0xbfa78d36;
            return result;
        }

        long double x87_r7_15 = *(a1 + 0x108);
        long double temp5_1 = 1.30899692f;
        x87_r7_15 - temp5_1;
        result = (x87_r7_15 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp5_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            *(a1 + 0x108) = 0x3fa78d36;
    }

    return result;
}
