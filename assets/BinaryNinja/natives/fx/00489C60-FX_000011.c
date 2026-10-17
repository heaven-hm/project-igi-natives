// Original IGI.EXE function: FX_000011 (VA 0x00489C60; static CFG gate PASS, CFG score 1.000).
#include "FX_000011.h"
int32_t FX_000011(void* a1, int32_t* a2)

{
    float v_30 = a2[2];
    long double x87_r7_1 = -(v_30);
    long double x87_r6_1 = -(a2[3]);
    float v_28 = a2[4];
    int32_t valA2 = *(*a2 + 0x44);
    long double x87_r5_1 = -(v_28);
    v_30 = x87_r5_1 * *(a1 + 0x90) + x87_r6_1 * *(a1 + 0x84) + x87_r7_1 * *(a1 + 0x78);
    long double x87_r7_3 =
        x87_r5_1 * *(a1 + 0x94) + x87_r6_1 * *(a1 + 0x88) + x87_r7_1 * *(a1 + 0x7c);
    int32_t result;

    if (valA2 < 0x1e)
    {
        result = *((valA2 << 2) + &g_5412a4);

        if (result == 0xc)
            goto label_489cec;

    label_489d6d:
        long double f1_1 = 0f;
        x87_r7_3 - f1_1;

        if (!(*(&((x87_r7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            WeaponType_InitType_2(&v_30, a1, 4, "000_01_1");
            long double x87_r7_5 = v_30 + *(a1 + 0x20);
            void* valA5 = *a2;
            v_30 = x87_r7_5;
            v_28 = v_28 + *(a1 + 0x28);
            double v_20;
            double v_20_1 = v_20 + *(a1 + 0x30);
            double v_18 = *(valA5 + 8) - x87_r7_5;
            double v_10_1 = *(valA5 + 0x10) - v_28;
            double v_8_1 = *(valA5 + 0x18) - v_20_1;
            long double fp0_1 = Sys_OpenFileStream_11(&v_18);
            long double f3_1 = 614.39999999999998;
            fp0_1 - f3_1;

            if (*(&((fp0_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f3_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                return 0xf;
        }
    }
    else
    {
        result = 0xc;
    label_489cec:
        long double f2_1 = 0f;
        x87_r7_3 - f2_1;

        if (*(&((x87_r7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double f5_1 = 0f;
            x87_r7_3 - f5_1;
            long double x87_r6_6 = x87_r7_3;

            if (*(&((x87_r7_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_6 = -(x87_r6_6);

            long double x87_r5_5 = v_30;
            long double f7_1 = 0f;
            x87_r5_5 - f7_1;
            long double x87_r5_6 = v_30;

            if (*(&((x87_r5_5 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_5, f7_1) ? 1 : 0) << 0xa
                    | (x87_r5_5 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                x87_r5_6 = -(x87_r5_6);

            x87_r6_6 - x87_r5_6;

            if (!(*(&((x87_r6_6 < x87_r5_6 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_6, x87_r5_6) ? 1 : 0) << 0xa
                    | (x87_r6_6 == x87_r5_6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                result = 0xe;
        }

        long double f4_1 = 0f;
        x87_r7_3 - f4_1;

        if (!(*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_9 = v_30;
            long double f6_1 = 0f;
            x87_r6_9 - f6_1;
            long double x87_r6_10 = v_30;

            if (*(&((x87_r6_9 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, f6_1) ? 1 : 0) << 0xa
                    | (x87_r6_9 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_10 = -(x87_r6_10);

            x87_r7_3 - x87_r6_10;

            if (!(*(&((x87_r7_3 < x87_r6_10 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, x87_r6_10) ? 1 : 0) << 0xa
                    | (x87_r7_3 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                result = 0xd;

            goto label_489d6d;
        }
    }

    return result;
}
