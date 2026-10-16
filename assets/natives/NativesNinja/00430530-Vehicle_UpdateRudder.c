#include "00430530-Vehicle_UpdateRudder.h"
/* 0x00430530 Vehicle_UpdateRudder full linked: callers=1 callees=1 */
void** Vehicle_UpdateRudder(void* a1, int32_t a2, float a3, float a4)

{
    void* ecx_2 = *(a1 + 0x1b4);
    void* edi = *(ecx_2 + 0x2d4);
    void* var_c;
    void** result = WeaponType_RegisterType_2(&var_c, a1, *(ecx_2 + a2 * 0x18 + 0x14c));
    float var_4;
    long double x87_r7_1 = var_4 - *(a1 + a2 * 0x38 + 0x1d0);
    long double temp0 = 0f;
    x87_r7_1 - temp0;
    result = (x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    long double x87_r7_2 = x87_r7_1 + 0.00100000005f;
    long double x87_r6_1 = a4 + *(edi + 0x25c);
    x87_r6_1 - x87_r7_2;
    result = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        long double x87_r7_4 = var_4 + a4;
        a4 = x87_r7_4;
        long double x87_r7_5 = x87_r7_4 - *(edi + 0x25c);
        long double temp1_1 = *(a1 + a2 * 0x38 + 0x1d0);
        x87_r7_5 - temp1_1;
        result = (x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
        {
            long double temp2_1 = *(a1 + a2 * 0x38 + 0x1d0);
            x87_r7_5 - temp2_1;
            result = (x87_r7_5 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double x87_r7_10 = *(a1 + a2 * 0x38 + 0x1d0) - a3;
                *(a1 + a2 * 0x38 + 0x1d0) = x87_r7_10;
                a4 = a4 - *(edi + 0x25c);
                long double temp4_1 = a4;
                x87_r7_10 - temp4_1;
                result = (x87_r7_10 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp4_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                {
                    result = a4;
                    *(a1 + a2 * 0x38 + 0x1d0) = result;
                }
            }
        }
        else
        {
            long double x87_r7_8 = a3 + *(a1 + a2 * 0x38 + 0x1d0);
            *(a1 + a2 * 0x38 + 0x1d0) = x87_r7_8;
            a4 = a4 - *(edi + 0x25c);
            long double temp3_1 = a4;
            x87_r7_8 - temp3_1;
            result = (x87_r7_8 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                *(a1 + a2 * 0x38 + 0x1d0) = a4;
                *(a1 + 0x690) = 1;
                return result;
            }
        }

        *(a1 + 0x690) = 1;
    }

    return result;
}
