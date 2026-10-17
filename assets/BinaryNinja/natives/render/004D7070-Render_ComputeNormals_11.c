// Original IGI.EXE function: Render_ComputeNormals_11 (VA 0x004D7070; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_11.h"
float Render_ComputeNormals_11(float a1, float a2, float a3, int32_t a4, int32_t a5) __location("valA")

{
    float result = a1;
    void* objC = *(result + 0x74);
    float flagP = a3;
    float* srcS = a2;

    if (flagP < a4)
    {
        long double x87_r7_3 = (*(result + 0x50) - *(result + 0x54)) * (srcS[2] - srcS[1]);
        long double x87_r6_5 = (srcS[3] - *srcS) * (*(result + 0x54) + *(result + 0x50));
        float v_24_1 = (*(result + 0x58) - *(result + 0x4c)) * (srcS[1] + srcS[2]);
        float v_2c_1 = (*srcS + srcS[2]) * (*(result + 0x50) + *(result + 0x4c));
        a2 = (*(result + 0x58) - *(result + 0x54)) * (srcS[3] + srcS[1]);
        long double x87_r5_14 = (srcS[3] - srcS[1]) * (*(result + 0x58) + *(result + 0x54));
        long double x87_r4_11 = x87_r5_14 + a2 + v_2c_1;
        a1 = ((*(result + 0x4c) - *(result + 0x50)) * (srcS[2] - *srcS) + x87_r4_11) * 0.5f;
        *(result + 0x4c) =
            (*(result + 0x58) + *(result + 0x4c)) * (srcS[3] + *srcS) + a1 - x87_r4_11;
        long double x87_r5_16 = x87_r6_5 + a1 - x87_r5_14;
        a3 = x87_r5_16;
        *(result + 0x50) = x87_r5_16;
        int32_t ctxB1 = *(result + 0x5c);
        long double x87_r6_11 = a1 + v_24_1 - a2;
        a2 = x87_r6_11;
        *(result + 0x54) = x87_r6_11;
        long double x87_r7_5 = x87_r7_3 + a1 - v_2c_1;
        *(result + 0x58) = x87_r7_5;
        int32_t ctxB2 = ctxB1 + srcS[4] + 1;
        *(result + 0x5c) = ctxB2;

        if (ctxB2 > 0x3e8)
        {
            long double x87_r6_12 = *(result + 0x4c);
            *(result + 0x5c) = 0;
            long double x87_r5_25 = 1.0
                / sqrtl(x87_r7_5 * x87_r7_5 + a2 * a2 + a3 * a3 + x87_r6_12 * x87_r6_12);
            *(result + 0x4c) = *(result + 0x4c) * x87_r5_25;
            *(result + 0x50) = a3 * x87_r5_25;
            *(result + 0x54) = a2 * x87_r5_25;
            *(result + 0x58) = x87_r7_5 * x87_r5_25;
        }

        if (objC)
        {
            long double x87_r7_10 = -(*(objC + 0x4c));
            float v_10_1 = -(*(objC + 0x50));
            float v_c_1 = -(*(objC + 0x54));
            long double x87_r6_20 = *(objC + 0x58);
            int32_t tmpD4 = *(objC + 0x5c);
            float v_2c_2 = (v_c_1 + x87_r7_10) * (*(result + 0x50) + *(result + 0x4c));
            a3 = (*(result + 0x58) - *(result + 0x54)) * (x87_r6_20 + v_10_1);
            long double x87_r5_40 = (*(result + 0x58) + *(result + 0x54)) * (x87_r6_20 - v_10_1);
            long double x87_r4_28 = x87_r5_40 + a3 + v_2c_2;
            a1 =
                ((v_c_1 - x87_r7_10) * (*(result + 0x4c) - *(result + 0x50)) + x87_r4_28) * 0.5f;
            long double x87_r4_29 =
                (*(result + 0x58) + *(result + 0x4c)) * (x87_r6_20 + x87_r7_10) + a1 - x87_r4_28;
            a2 = x87_r4_29;
            *(result + 0x60) = x87_r4_29;
            long double x87_r5_43 =
                (*(result + 0x54) + *(result + 0x50)) * (x87_r6_20 - x87_r7_10) + a1 - x87_r5_40;
            *(result + 0x64) = x87_r5_43;
            a3 = (*(result + 0x58) - *(result + 0x4c)) * (v_c_1 + v_10_1) + a1 - a3;
            long double x87_r6_32 = (*(result + 0x50) - *(result + 0x54)) * (v_c_1 - v_10_1);
            *(result + 0x68) = a3;
            int32_t tmpD5 = *(result + 0x5c) + tmpD4 + 1;
            *(result + 0x70) = tmpD5;
            long double x87_r6_34 = x87_r6_32 + a1 - v_2c_2;
            *(result + 0x6c) = x87_r6_34;

            if (tmpD5 > 0x3e8)
            {
                *(result + 0x70) = 0;
                long double x87_r5_54 = 1.0 / sqrtl(x87_r6_34 * x87_r6_34 + a3 * a3
                    + x87_r5_43 * x87_r5_43 + a2 * a2);
                *(result + 0x60) = a2 * x87_r5_54;
                *(result + 0x64) = x87_r5_43 * x87_r5_54;
                *(result + 0x68) = a3 * x87_r5_54;
                *(result + 0x6c) = x87_r6_34 * x87_r5_54;
            }
        }

        long double x87_r7_15 = *(result + 0x4c);
        long double x87_r7_16 = x87_r7_15 * x87_r7_15;
        *(result + 0x48) = *(result + 0x5c);
        long double x87_r6_39 = *(result + 0x50) * *(result + 0x4c);
        long double x87_r6_40 = x87_r6_39 + x87_r6_39;
        long double x87_r5_60 = *(result + 0x54) * *(result + 0x4c);
        a3 = x87_r5_60 + x87_r5_60;
        long double x87_r5_63 = *(result + 0x58) * *(result + 0x4c);
        float v_28_1 = x87_r5_63 + x87_r5_63;
        long double x87_r5_65 = *(result + 0x50);
        long double x87_r4_43 = x87_r5_65 * x87_r5_65;
        float v_24_2 = x87_r4_43 + x87_r4_43;
        long double x87_r5_68 = *(result + 0x54) * *(result + 0x50);
        float v_2c_3 = x87_r5_68 + x87_r5_68;
        long double x87_r5_71 = *(result + 0x58) * *(result + 0x50);
        a2 = x87_r5_71 + x87_r5_71;
        long double x87_r5_73 = *(result + 0x54);
        long double x87_r4_46 = x87_r5_73 * x87_r5_73;
        a1 = x87_r4_46 + x87_r4_46;
        long double x87_r5_76 = *(result + 0x58) * *(result + 0x54);
        long double x87_r5_77 = x87_r5_76 + x87_r5_76;
        *(result + 0x24) = 1f - v_24_2 - a1;
        *(result + 0x28) = x87_r6_40 - x87_r5_77;
        *(result + 0x2c) = a2 + a3;
        *(result + 0x30) = x87_r5_77 + x87_r6_40;
        long double x87_r7_18 = 1f - (x87_r7_16 + x87_r7_16);
        *(result + 0x34) = x87_r7_18 - a1;
        *(result + 0x38) = v_2c_3 - v_28_1;
        *(result + 0x3c) = a3 - a2;
        *(result + 0x40) = v_2c_3 + v_28_1;
        *(result + 0x44) = x87_r7_18 - v_24_2;
    }

    if (flagP < a5)
    {
        long double x87_r7_23 = *(objC + 0x2c) * *(result + 0x10) + *(objC + 0x28) * *(result + 0xc)
            + *(objC + 0x24) * *(result + 8);
        float v_14_1 = x87_r7_23;
        float v_20_1 = v_14_1;
        long double x87_r7_27 = *(objC + 0x38) * *(result + 0x10) + *(objC + 0x34) * *(result + 0xc)
            + *(objC + 0x30) * *(result + 8);
        long double x87_r7_31 = *(objC + 0x44) * *(result + 0x10) + *(objC + 0x40) * *(result + 0xc)
            + *(objC + 0x3c) * *(result + 8);
        float v_1c_2 = x87_r7_27 + *(objC + 0x1c);
        long double x87_r7_37 = x87_r7_31 + *(objC + 0x20);
        *(result + 0x18) = v_14_1 + *(objC + 0x18);
        int16_t top_1 = 0;
        *(result + 0x1c) = v_1c_2;
        *(result + 0x20) = x87_r7_37;

        if (flagP < a5 - 1)
        {
            for (float i = *(result + 0x78); i; i = *(i + 0x7c))
            {
                result = Render_ComputeNormals_11(i, srcS, flagP + 1, a4, a5);
                top_1 -= 1;
            }
        }
    }

    return result;
}
