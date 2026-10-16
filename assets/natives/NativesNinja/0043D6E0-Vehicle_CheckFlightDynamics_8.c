#include "0043D6E0-Vehicle_CheckFlightDynamics_8.h"
/* 0x0043d6e0 Vehicle_CheckFlightDynamics_8 full linked: callers=1 callees=9 */
float Vehicle_CheckFlightDynamics_8(float a1) __location("eax")

{
    float esi = a1;
    float result = *(esi + 0x180);

    if (result != 0xffffffff)
    {
        sub_5020c0(result);
        result = sub_502130(*(esi + 0x180));

        if (result)
        {
            long double st0_2 = sub_502180(*(esi + 0x180), *(esi + 0x19c));
            long double x87_r6_2 = st0_2 - *(esi + 0x184);
            long double temp0_1 = 0f;
            x87_r6_2 - temp0_1;
            long double x87_r5_1 = x87_r6_2;

            if (*(&((x87_r6_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp0_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                x87_r5_1 = -(x87_r5_1);

            long double temp1_1 = 16384f;
            x87_r5_1 - temp1_1;

            if (!(*(&((x87_r5_1 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r5_1 == temp1_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double x87_r5_6 = *(esi + 0x190);
                long double temp2_1 = *(esi + 0x194);
                x87_r5_6 - temp2_1;

                if (!(*(&((x87_r5_6 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_6, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r5_6 == temp2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                {
                    long double x87_r5_9 = *(esi + 0x190);
                    long double temp4_1 = *(esi + 0x194);
                    x87_r5_9 - temp4_1;

                    if (!(*(&((x87_r5_9 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_9, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r5_9 == temp4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    {
                        long double x87_r5_11 = *(esi + 0x190) - *(esi + 0x198);
                        *(esi + 0x190) = x87_r5_11;
                        long double temp8_1 = *(esi + 0x194);
                        x87_r5_11 - temp8_1;

                        if (*(&((x87_r5_11 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_11, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r5_11 == temp8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                            *(esi + 0x190) = *(esi + 0x194);
                    }
                }
                else
                {
                    long double x87_r5_8 = *(esi + 0x198) + *(esi + 0x190);
                    *(esi + 0x190) = x87_r5_8;
                    long double temp5_1 = *(esi + 0x194);
                    x87_r5_8 - temp5_1;

                    if (!(*(&((x87_r5_8 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_8, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r5_8 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                        *(esi + 0x190) = *(esi + 0x194);
                }
            }
            else
            {
                long double temp3_1 = 0f;
                x87_r6_2 - temp3_1;
                long double x87_r5_2 = x87_r6_2;

                if (*(&((x87_r6_2 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                    x87_r5_2 = -(x87_r5_2);

                long double x87_r5_4 = x87_r5_2 * *(esi + 0x194) * 6.10351562e-05f;
                long double temp6_1 = 0.100000001f;
                x87_r5_4 - temp6_1;
                *(esi + 0x190) = x87_r5_4;
                bool c1_1 = /* bool c1_1 = unknown  {fst dword [esi+0x190], st0} */;

                if (*(&((x87_r5_4 < temp6_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                        | (FCMP_UO(x87_r5_4, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r5_4 == temp6_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                    x87_r5_4 = 0.100000001f;

                *(esi + 0x190) = x87_r5_4;
            }

            a1 = *(esi + 0x190) * 136.53334f;
            long double temp7_1 = 0.00100000005f;
            x87_r6_2 - temp7_1;

            if (*(&((x87_r6_2 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp7_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
            {
                long double temp9_1 = -0.00100000005f;
                x87_r6_2 - temp9_1;

                if (*(&((x87_r6_2 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double x87_r6_7 = *(esi + 0x184) - a1;
                    x87_r6_7 - st0_2;

                    if (!(*(&((x87_r6_7 < st0_2 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_7, st0_2) ? 1 : 0) << 0xa
                        | (x87_r6_7 == st0_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        *(esi + 0x184) = x87_r6_7;
                        Vehicle_InitPlane_9(esi);
                        return Vehicle_InitHeli_9(esi);
                    }
                }
            }
            else
            {
                long double x87_r6_5 = a1 + *(esi + 0x184);
                x87_r6_5 - st0_2;

                if (*(&((x87_r6_5 < st0_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, st0_2) ? 1 : 0) << 0xa
                    | (x87_r6_5 == st0_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    *(esi + 0x184) = x87_r6_5;
                    Vehicle_InitPlane_9(esi);
                    return Vehicle_InitHeli_9(esi);
                }
            }

            *(esi + 0x184) = st0_2;
            Vehicle_InitPlane_9(esi);
            return Vehicle_InitHeli_9(esi);
        }
    }

    return result;
}
