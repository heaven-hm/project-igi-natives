// Original IGI.EXE function: Light_SampleLightmap_12 (VA 0x0052FBA0; static CFG gate PASS, CFG score 1.000).
#include "Light_SampleLightmap_12.h"
int32_t Light_SampleLightmap_12(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t ctxB = 0;

    if (a2 + 1 >= *(a1 + 0x4abc))
    {
        int32_t valA2 = a4 + ((a3 + (a2 << 2)) << 2);
        *(valA2 * 0x30 + a1 + 0xc58) = 0;
        return valA2;
    }

    int32_t dstD = a3;
    int32_t objC3;

    if (dstD <= 0)
        objC3 = a4;
    else
    {
        objC3 = a4;
        int32_t valA6 = (objC3 + ((dstD + (a2 << 2)) << 2)) * 0x30;

        if (*(valA6 + a1 + 0xba8))
        {
            int32_t i = 0;
            ctxB = 0x10;
            double* objC6 = a2 * 0x300 + a1 + 0x1188;

            do
            {
                if (objC6[4])
                {
                    long double x87_r7_1 = *objC6;
                    long double f0_1 = *(valA6 + a1 + 0xb88);
                    x87_r7_1 - f0_1;

                    if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t v_4_1 = 0;
                        long double x87_r7_3 = *(valA6 + a1 + 0xba0) + *(valA6 + a1 + 0xb88);
                        long double f1_1 = *objC6;
                        x87_r7_3 - f1_1;

                        if (!(*(&((x87_r7_3 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t valA13 = i & 0x80000001;
                            bool cond_0_1 = !valA13;

                            if (valA13 < 0)
                                cond_0_1 = ((valA13 - 1) | 0xfffffffe) == 0xffffffff;

                            if (cond_0_1)
                                ctxB |= 0x20;
                            else
                                *(&ctxB + 1) |= 1;
                        }
                    }
                }

                i += 1;
                objC6 = &objC6[6];
            } while (i < 4);

            objC3 = a4;
            dstD = a3;
        }
    }

    if (objC3 > 0)
    {
        int32_t valA20 = (objC3 + ((dstD + (a2 << 2)) << 2)) * 0x30;

        if (*(valA20 + a1 + 0xc38))
        {
            ctxB |= 4;
            int32_t i_1 = 0;
            double* objC9 = a2 * 0x300 + a1 + 0xfd0;

            do
            {
                if (objC9[5])
                {
                    long double x87_r7_4 = *objC9;
                    long double f2_1 = *(valA20 + a1 + 0xc10);
                    x87_r7_4 - f2_1;

                    if (!(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t v_4_2 = 0;
                        long double x87_r7_6 = *(valA20 + a1 + 0xc30) + *(valA20 + a1 + 0xc10);
                        long double f4_1 = *objC9;
                        x87_r7_6 - f4_1;

                        if (!(*(&((x87_r7_6 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_6, f4_1) ? 1 : 0) << 0xa
                            | (x87_r7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t valA27 = i_1 & 0x80000001;
                            bool cond_1_1 = !valA27;

                            if (valA27 < 0)
                                cond_1_1 = ((valA27 - 1) | 0xfffffffe) == 0xffffffff;

                            if (cond_1_1)
                                ctxB |= 0x80;
                            else
                                *(&ctxB + 1) |= 1;
                        }
                    }
                }

                i_1 += 1;
                objC9 = &objC9[0x18];
            } while (i_1 < 4);

            objC3 = a4;
            dstD = a3;
        }
    }

    if (dstD < 3)
    {
        int32_t valA34 = (objC3 + ((dstD + (a2 << 2)) << 2)) * 0x30;

        if (*(valA34 + a1 + 0xd28))
        {
            ctxB |= 8;
            int32_t i_2 = 0;
            double* objC12 = a2 * 0x300 + a1 + 0xf48;

            do
            {
                if (objC12[4])
                {
                    long double x87_r7_7 = *objC12;
                    long double f3_1 = *(valA34 + a1 + 0xd08);
                    x87_r7_7 - f3_1;

                    if (!(*(&((x87_r7_7 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == f3_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t v_4_3 = 0;
                        long double x87_r7_9 = *(valA34 + a1 + 0xd20) + *(valA34 + a1 + 0xd08);
                        long double f7_1 = *objC12;
                        x87_r7_9 - f7_1;

                        if (!(*(&((x87_r7_9 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t valA41 = i_2 & 0x80000001;
                            bool cond_2_1 = !valA41;

                            if (valA41 < 0)
                                cond_2_1 = ((valA41 - 1) | 0xfffffffe) == 0xffffffff;

                            if (cond_2_1)
                                ctxB |= 0x40;
                            else
                                ctxB |= 0x80;
                        }
                    }
                }

                i_2 += 1;
                objC12 = &objC12[6];
            } while (i_2 < 4);

            objC3 = a4;
            dstD = a3;
        }
    }

    if (objC3 < 3)
    {
        int32_t valA48 = (objC3 + ((dstD + (a2 << 2)) << 2)) * 0x30;

        if (*(valA48 + a1 + 0xc98))
        {
            ctxB |= 2;
            int32_t i_3 = 0;
            double* objC15 = a2 * 0x300 + a1 + 0xf40;

            do
            {
                if (objC15[5])
                {
                    long double x87_r7_10 = *objC15;
                    long double f6_1 = *(valA48 + a1 + 0xc70);
                    x87_r7_10 - f6_1;

                    if (!(*(&((x87_r7_10 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_10, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t v_4_4 = 0;
                        long double x87_r7_12 = *(valA48 + a1 + 0xc90) + *(valA48 + a1 + 0xc70);
                        long double f8_1 = *objC15;
                        x87_r7_12 - f8_1;

                        if (!(*(&((x87_r7_12 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, f8_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t valA55 = i_3 & 0x80000001;
                            bool cond_3_1 = !valA55;

                            if (valA55 < 0)
                                cond_3_1 = ((valA55 - 1) | 0xfffffffe) == 0xffffffff;

                            ctxB = cond_3_1 ? ctxB | 0x40 : ctxB | 0x20;
                        }
                    }
                }

                i_3 += 1;
                objC15 = &objC15[0x18];
            } while (i_3 < 4);

            objC3 = a4;
            dstD = a3;
        }
    }

    int32_t valA61 = (objC3 + ((dstD + (a2 << 2)) << 2)) * 0x30;
    *(valA61 + a1 + 0xc58) = ctxB;
    return valA61;
}
