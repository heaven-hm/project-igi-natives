#include "Camera_UpdateViewCone_12.h"
int32_t Camera_UpdateViewCone_12(int32_t a1, double* a2, char a3)

{
    int32_t dstD1 = a1 & 0x1f;
    long double fp0;
    int80_t fpu0;

    if (a1 & 8 && a3 & 1)
    {
        Camera_SetFieldOfView_14(fpu0, 1);
        dstD1 &= 0xfffffff7;
    }
    else if (a1 & 4 && a3 & 4)
    {
        Camera_SetFieldOfView_14(fpu0, 4);
        dstD1 &= 0xfffffffb;
    }
    else if (1 & a1 && a3 & 8)
    {
        Camera_SetFieldOfView_14(fpu0, 8);
        int32_t objC4 = a3 & 0xc00;

        if (!objC4)
        {
            long double x87_r0_10 = *a2;
            long double f0_1 = 0.0;
            x87_r0_10 - f0_1;
            long double x87_r0_11 = g_544368;
            int16_t valA5 = (x87_r0_10 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_10, f0_1) ? 1 : 0) << 0xa
                | (x87_r0_10 == f0_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&valA5 + 1), 6) || TEST_BITB(*(&valA5 + 1), 0))
                x87_r0_11 = -(x87_r0_11);

            *a2 = x87_r0_11;
        }
        else if (objC4 == 0x400)
        {
            long double x87_r0_7 = *a2;
            long double f2_1 = 0.0;
            x87_r0_7 - f2_1;
            int16_t valA4 = (x87_r0_7 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_7, f2_1) ? 1 : 0) << 0xa
                | (x87_r0_7 == f2_1 ? 1 : 0) << 0xe | 0x800;
            long double x87_r0_8;

            if (TEST_BITB(*(&valA4 + 1), 6) || TEST_BITB(*(&valA4 + 1), 0))
                x87_r0_8 = -(g_544368);
            else
                x87_r0_8 = g_544378;

            *a2 = x87_r0_8;
        }
        else if (objC4 == 0x800)
        {
            long double x87_r0_4 = *a2;
            long double f3_1 = 0.0;
            x87_r0_4 - f3_1;
            int16_t valA3 = (x87_r0_4 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_4, f3_1) ? 1 : 0) << 0xa
                | (x87_r0_4 == f3_1 ? 1 : 0) << 0xe | 0x800;
            long double x87_r0_5;

            if (TEST_BITB(*(&valA3 + 1), 6) || TEST_BITB(*(&valA3 + 1), 0))
                x87_r0_5 = -(g_544378);
            else
                x87_r0_5 = g_544368;

            *a2 = x87_r0_5;
        }
        else if (objC4 == 0xc00)
        {
            long double x87_r0_1 = *a2;
            long double f5_1 = 0.0;
            x87_r0_1 - f5_1;
            long double x87_r0_2 = g_544378;
            int16_t valA2 = (x87_r0_1 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_1, f5_1) ? 1 : 0) << 0xa
                | (x87_r0_1 == f5_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&valA2 + 1), 6) || TEST_BITB(*(&valA2 + 1), 0))
                x87_r0_2 = -(x87_r0_2);

            *a2 = x87_r0_2;
        }

        dstD1 &= 0xfffffffe;
    }
    else if (a1 & 2 && a3 & 0x10)
    {
        int32_t srcS1 = 0;

        if (a1 & 0x10)
            srcS1 = 1;

        double v_10_5 = *a2;
        long double x87_r7_2 = v_10_5;
        long double f1_1 = 0.0;
        x87_r7_2 - f1_1;

        if (TEST_BITB(
                *(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1),
                6))
            srcS1 = 1;
        else
        {
            int32_t objC;
            int32_t v_24_1 = objC;
            int32_t v_28_1 = objC;
            v_28_1 = v_10_5;
            int32_t v_8;
            fp0 = Camera_ApplyPostProcess_13(v_28_1, &v_8);
            int32_t valA8 = v_8;
            double v_10_6 = fp0;
            int32_t objC6 = valA8 - 0x600;

            if (objC6 >= 0xfffffbce)
            {
                long double x87_r7_6 = v_10_6;
                long double f4_1 = 0.0;
                x87_r7_6 - f4_1;
                valA8 = (x87_r7_6 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f4_1 ? 1 : 0) << 0xe;
                int32_t tmpD1;

                tmpD1 = !TEST_BITB(*(&valA8 + 1), 0) ? 0 : 1;

                valA8 = *(&v_10_6 + 6);
                int16_t valA9 = valA8 & 0xf;
                valA9 |= 0x10;
                *(&v_10_6 + 6) = valA9;

                if (objC6 < 0xfffffc03)
                {
                    int32_t i_1 = 0xfffffc03 - objC6;
                    int32_t i;

                    do
                    {
                        if (v_10_6 & 1 && !srcS1)
                            srcS1 = 1;

                        v_10_6 u>>= 1;

                        if (*(&v_10_6 + 4) & 1)
                            *(&v_10_6 + 3) |= 0x80;

                        *(&v_10_6 + 4) u>>= 1;
                        i = i_1;
                        i_1 -= 1;
                    } while (i != 1);
                }

                if (tmpD1)
                    v_10_6 = -(v_10_6);
            }
            else
            {
                srcS1 = 1;
                v_10_6 = 0;
            }

            *a2 = v_10_6;
        }

        if (srcS1)
            Camera_SetFieldOfView_14(fpu0, 0x10);

        dstD1 &= 0xfffffffd;
    }

    if (a1 & 0x10 && a3 & 0x20)
    {
🚫🚫        Camera_SetFieldOfView_14(fp0, 0x20);
        dstD1 &= 0xffffffef;
    }

    int32_t result = 0;
    result = !dstD1;
    return result;
}
