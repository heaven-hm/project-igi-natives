// Original IGI.EXE function: Display_SyncVSync_12 (VA 0x00496E60; static CFG gate FAIL, CFG score 0.800).
#include "Display_SyncVSync_12.h"
char Display_SyncVSync_12(int32_t a1, int32_t* a2)

{
    char valA11 = g_6840e9;

    if (valA11)
    {
        int16_t valA1 = *(*(a1 + 0xc) + 0x14);

        if (valA1 == 2 || !valA1)
        {
            char valA2 = Display_ClearSurfaces_12(a1);

            if (!valA2)
            {
                *a2 = 0;
                return valA2;
            }
        }

        long double x87_r7_2 = *(a2 + 0x10) * 4096.0;
        char valA3 = *(a1 + 8);
        float v_20;
        memcpy(&v_20, a2, 0x20);
        double v_10_1 = x87_r7_2;
        double v_8_1 = *(a2 + 0x18) * 4096.0;
        float v_18;

        if (valA3 & 2 && !(valA3 & 4))
        {
            double v_50 = *(a2 + 0x20) - g_5ca138;
            double v_48_1 = *(a2 + 0x28) - g_5ca140;
            double v_40 = *(a2 + 0x30) - g_5ca148;
            long double fp0_1 = Sys_OpenFileStream_11(&v_50);
            long double f0_1 = v_8_1;
            fp0_1 - f0_1;

            if (!(*(&((fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                v_20 = 0f;
            else
            {
                long double f2_1 = v_10_1;
                fp0_1 - f2_1;

                if (!(*(&((fp0_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_5 =
                        (1.0 - (fp0_1 - v_10_1) / (v_8_1 - v_10_1)) * v_20;
                    v_20 = x87_r6_5;
                    long double f4_1 = 0f;
                    x87_r6_5 - f4_1;

                    if (*(&((x87_r6_5 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_5, f4_1) ? 1 : 0) << 0xa
                            | (x87_r6_5 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        v_20 = 0f;
                    else
                    {
                        long double x87_r6_6 = v_20;
                        long double f5_1 = 1f;
                        x87_r6_6 - f5_1;

                        if (!(*(&((x87_r6_6 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_6, f5_1) ? 1 : 0) << 0xa
                                | (x87_r6_6 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                            v_20 = 1f;
                    }
                }
            }

            long double f3_1 = 0.0;
            fp0_1 - f3_1;

            if (*(&((fp0_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f3_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                v_18 = 0f;
            else
            {
                double v_38 =
                    g_5ca178 * v_40 + g_5ca16c * v_48_1 + g_5ca160 * v_50;
                double v_30_1 =
                    g_5ca17c * v_40 + g_5ca170 * v_48_1 + g_5ca164 * v_50;
                double v_28_1 =
                    g_5ca180 * v_40 + g_5ca174 * v_48_1 + g_5ca168 * v_50;
                memcpy(&v_50, &v_38, 0x18);
                v_18 = fp0_1 / (v_8_1 + v_10_1) * v_38 / fp0_1;
                long double x87_r7_13 = v_18;
                long double f9_1 = -1f;
                x87_r7_13 - f9_1;

                if (!(*(&((x87_r7_13 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_13, f9_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == f9_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_14 = v_18;
                    long double f10_1 = 1f;
                    x87_r7_14 - f10_1;

                    if (!(*(&((x87_r7_14 < f10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_14, f10_1) ? 1 : 0) << 0xa
                            | (x87_r7_14 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        v_18 = 1f;
                }
                else
                    v_18 = -1f;
            }
        }

        int32_t objC2;

        if (!(*(a1 + 8) & 0x20))
            objC2 = g_54390c * v_20 * 10000f;
        else
            objC2 = g_543908 * g_543904 * v_20 * 10000f;

        int32_t* valA6 = *(a1 + 0x10);
        (*(*valA6 + 0x3c))(valA6, (&g_67a4a0)[objC2]);
        long double x87_r7_23 = v_18;
        long double f1_1 = 0f;
        x87_r7_23 - f1_1;
        int32_t objC4;
        int32_t tmpD2;

        if (!(*(&((x87_r7_23 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            tmpD2 = 1;
            objC4 = (1f - v_18) * 10000f;
        }
        else
        {
            tmpD2 = 0xffffffff;
            objC4 = (v_18 + 1f) * 10000f;
        }

        if (!(*(a1 + 8) & 4))
        {
            int32_t dstD1 = g_543914;
            int32_t dstD2 = -(dstD1);
            int32_t* valA9 = *(a1 + 0x10);
            (*(*valA9 + 0x40))(valA9,
                (&g_67a4a0)[objC4] * (((dstD2 - dstD2) & 0xfffffffe) + 1) * tmpD2);
        }

        float v_1c;
        long double x87_r7_30 = v_1c;
        long double f6_1 = 0.5f;
        x87_r7_30 - f6_1;

        if (!(*(&((x87_r7_30 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_30, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_30 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_31 = v_1c;
            long double f8_1 = 2f;
            x87_r7_31 - f8_1;

            if (!(*(&((x87_r7_31 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                v_1c = 2f;
        }
        else
            v_1c = 0.5f;

        int32_t* valA10 = *(a1 + 0x10);
        (*(*valA10 + 0x44))(valA10, *(*(a1 + 0xc) + 0x1c) * v_1c);
        valA11 = *(a1 + 8);

        if (valA11 & 1)
        {
            int32_t objC10;

            if (!(valA11 & 0x20))
                objC10 = g_54390c * v_20 * 10000f;
            else
                objC10 = g_543908 * g_543904 * v_20 * 10000f;

            int32_t* valA12 = *(a1 + 0x10);
            (*(*valA12 + 0x3c))(valA12, (&g_67a4a0)[objC10]);
            long double x87_r7_41 = v_18;
            long double f11_1 = 0f;
            x87_r7_41 - f11_1;
            int32_t objC12;
            int32_t tmpD5;

            if (!(*(&((x87_r7_41 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_41, f11_1) ? 1 : 0) << 0xa
                | (x87_r7_41 == f11_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                tmpD5 = 1;
                objC12 = (1f - v_18) * 10000f;
            }
            else
            {
                tmpD5 = 0xffffffff;
                objC12 = (v_18 + 1f) * 10000f;
            }

            if (!(*(a1 + 8) & 4))
            {
                int32_t dstD6 = g_543914;
                int32_t dstD7 = -(dstD6);
                int32_t* valA15 = *(a1 + 0x10);
                (*(*valA15 + 0x40))(valA15,
                    (&g_67a4a0)[objC12] * (((dstD7 - dstD7) & 0xfffffffe) + 1) * tmpD5);
            }

            long double x87_r7_48 = v_1c;
            long double f12_1 = 0.5f;
            x87_r7_48 - f12_1;

            if (!(*(&((x87_r7_48 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_48, f12_1) ? 1 : 0) << 0xa
                | (x87_r7_48 == f12_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_49 = v_1c;
                long double f14_1 = 2f;
                x87_r7_49 - f14_1;

                if (!(*(&((x87_r7_49 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_49, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_49 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    v_1c = 2f;
            }
            else
                v_1c = 0.5f;

            int32_t* valA16 = *(a1 + 0x10);
            valA11 = (*(*valA16 + 0x44))(valA16, *(*(a1 + 0xc) + 0x1c) * v_1c);
        }

        memcpy(a2, &v_20, 0x20);
    }

    return valA11;
}
