#include "gi_platform.h"
#include "0043D6E0-Vehicle_CheckFlightDynamics_8.h"
float Vehicle_CheckFlightDynamics_8(float a1) __location("valA")

{
    float srcS = a1;
    float result = (*(int32_t*)(uintptr_t)(srcS + 0x180));

    if (result != 0xffffffff)
    {
        Physics_SimulateRigidBody(result);
        result = Physics_CheckHullCollision((*(int32_t*)(uintptr_t)(srcS + 0x180)));

        if (result)
        {
            long double fp0_2 = Physics_ApplyImpulse((*(int32_t*)(uintptr_t)(srcS + 0x180)), (*(int32_t*)(uintptr_t)(srcS + 0x19c)));
            long double x87_r6_2 = fp0_2 - (*(int32_t*)(uintptr_t)(srcS + 0x184));
            long double f0_1 = 0.0f;
            x87_r6_2 - f0_1;
            long double x87_r5_1 = x87_r6_2;

            if (*(&((x87_r6_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f0_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == f0_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                x87_r5_1 = -(x87_r5_1);

            long double f1_1 = 16384.0f;
            x87_r5_1 - f1_1;

            if (!(*(&((x87_r5_1 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r5_1 == f1_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double x87_r5_6 = (*(int32_t*)(uintptr_t)(srcS + 0x190));
                long double f2_1 = (*(int32_t*)(uintptr_t)(srcS + 0x194));
                x87_r5_6 - f2_1;

                if (!(*(&((x87_r5_6 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_6, f2_1) ? 1 : 0) << 0xa
                    | (x87_r5_6 == f2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                {
                    long double x87_r5_9 = (*(int32_t*)(uintptr_t)(srcS + 0x190));
                    long double f4_1 = (*(int32_t*)(uintptr_t)(srcS + 0x194));
                    x87_r5_9 - f4_1;

                    if (!(*(&((x87_r5_9 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_9, f4_1) ? 1 : 0) << 0xa
                        | (x87_r5_9 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    {
                        long double x87_r5_11 = (*(int32_t*)(uintptr_t)(srcS + 0x190)) - (*(int32_t*)(uintptr_t)(srcS + 0x198));
                        (*(int32_t*)(uintptr_t)(srcS + 0x190)) = x87_r5_11;
                        long double f8_1 = (*(int32_t*)(uintptr_t)(srcS + 0x194));
                        x87_r5_11 - f8_1;

                        if (*(&((x87_r5_11 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_11, f8_1) ? 1 : 0) << 0xa
                                | (x87_r5_11 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                            (*(int32_t*)(uintptr_t)(srcS + 0x190)) = (*(int32_t*)(uintptr_t)(srcS + 0x194));
                    }
                }
                else
                {
                    long double x87_r5_8 = (*(int32_t*)(uintptr_t)(srcS + 0x198)) + (*(int32_t*)(uintptr_t)(srcS + 0x190));
                    (*(int32_t*)(uintptr_t)(srcS + 0x190)) = x87_r5_8;
                    long double f5_1 = (*(int32_t*)(uintptr_t)(srcS + 0x194));
                    x87_r5_8 - f5_1;

                    if (!(*(&((x87_r5_8 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_8, f5_1) ? 1 : 0) << 0xa
                            | (x87_r5_8 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                        (*(int32_t*)(uintptr_t)(srcS + 0x190)) = (*(int32_t*)(uintptr_t)(srcS + 0x194));
                }
            }
            else
            {
                long double f3_1 = 0.0f;
                x87_r6_2 - f3_1;
                long double x87_r5_2 = x87_r6_2;

                if (*(&((x87_r6_2 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_2, f3_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                    x87_r5_2 = -(x87_r5_2);

                long double x87_r5_4 = x87_r5_2 * (*(int32_t*)(uintptr_t)(srcS + 0x194)) * 6.10351562e-05.0f;
                long double f6_1 = 0.100000001.0f;
                x87_r5_4 - f6_1;
                (*(int32_t*)(uintptr_t)(srcS + 0x190)) = x87_r5_4;
                bool c1_1 = /* bool c1_1 = unknown  {fst dword [srcS+0x190], fp0} */;

                if (*(&((x87_r5_4 < f6_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                        | (FCMP_UO(x87_r5_4, f6_1) ? 1 : 0) << 0xa
                        | (x87_r5_4 == f6_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                    x87_r5_4 = 0.100000001.0f;

                (*(int32_t*)(uintptr_t)(srcS + 0x190)) = x87_r5_4;
            }

            a1 = (*(int32_t*)(uintptr_t)(srcS + 0x190)) * 136.53334.0f;
            long double f7_1 = 0.00100000005.0f;
            x87_r6_2 - f7_1;

            if (*(&((x87_r6_2 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f7_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
            {
                long double f9_1 = -0.00100000005.0f;
                x87_r6_2 - f9_1;

                if (*(&((x87_r6_2 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, f9_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double x87_r6_7 = (*(int32_t*)(uintptr_t)(srcS + 0x184)) - a1;
                    x87_r6_7 - fp0_2;

                    if (!(*(&((x87_r6_7 < fp0_2 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_7, fp0_2) ? 1 : 0) << 0xa
                        | (x87_r6_7 == fp0_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        (*(int32_t*)(uintptr_t)(srcS + 0x184)) = x87_r6_7;
                        Vehicle_InitPlane_9(srcS);
                        return Vehicle_InitHeli_9(srcS);
                    }
                }
            }
            else
            {
                long double x87_r6_5 = a1 + (*(int32_t*)(uintptr_t)(srcS + 0x184));
                x87_r6_5 - fp0_2;

                if (*(&((x87_r6_5 < fp0_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, fp0_2) ? 1 : 0) << 0xa
                    | (x87_r6_5 == fp0_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    (*(int32_t*)(uintptr_t)(srcS + 0x184)) = x87_r6_5;
                    Vehicle_InitPlane_9(srcS);
                    return Vehicle_InitHeli_9(srcS);
                }
            }

            (*(int32_t*)(uintptr_t)(srcS + 0x184)) = fp0_2;
            Vehicle_InitPlane_9(srcS);
            return Vehicle_InitHeli_9(srcS);
        }
    }

    return result;
}
