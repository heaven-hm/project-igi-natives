// Original IGI.EXE function: Weapon_UpdateRecoil_7 (VA 0x0047C610; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateRecoil_7.h"
int32_t* Weapon_UpdateRecoil_7(float* a1, int32_t* a2, int32_t a3 @ 0x14, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t* a9)

{
    int32_t* result = a2;
    double* tmpD = a1[&result[0x90]];
    void* srcS = a1[0x245];

    if (*(srcS + 0x9c) != 0xa)
    {
        *(tmpD + 0x44) = *tmpD - *(a1 + 0x518);
        tmpD[9] = tmpD[1] - *(a1 + 0x520);
        *(tmpD + 0x4c) = tmpD[2] - *(a1 + 0x528);
        tmpD[0xa] = tmpD[3] - *(a1 + 0x518);
        *(tmpD + 0x54) = tmpD[4] - *(a1 + 0x520);
        long double x87_r7_12 = tmpD[5] - *(a1 + 0x528);
        tmpD[0xb] = x87_r7_12;
        float v_10_1 = x87_r7_12 - *(tmpD + 0x4c);
        long double x87_r7_14 = 0f;
        float v_c_1 = x87_r7_14 - (*(tmpD + 0x54) - tmpD[9]);
        float v_18_2 = v_c_1;
        float v_8_1 = -((x87_r7_14 - (tmpD[0xa] - *(tmpD + 0x44))));
        long double x87_r7_17 = v_c_1;
        long double f0_1 = 0f;
        x87_r7_17 - f0_1;
        float v_14_2 = v_8_1;
        result = nullptr;
        float v_10_2 = 0f;
        result = (x87_r7_17 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_17 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
        label_47c732:
            long double x87_r7_22 = 0f;
            long double x87_r6_7 = v_8_1;
            long double x87_r5_1 = v_c_1;
            long double x87_r7_24 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_7 * x87_r6_7 + x87_r7_22 * x87_r7_22);
            v_18_2 = v_c_1 * x87_r7_24;
            v_14_2 = v_14_2 * x87_r7_24;
            v_10_2 = 0f * x87_r7_24;
        label_47c780:
            long double x87_r7_27 = v_18_2 * 286.720001f;
            float v_14_3 = v_14_2 * 286.720001f;
            float v_10_3 = v_10_2 * 286.720001f;
            long double x87_r7_32;

            if (!a9)
            {
                *(tmpD + 0x5c) = x87_r7_27 + *(tmpD + 0x44);
                tmpD[0xc] = v_14_3 + tmpD[9];
                x87_r7_32 = v_10_3 + *(tmpD + 0x4c);
            }
            else
            {
                *(tmpD + 0x5c) = x87_r7_27 + tmpD[0xa];
                tmpD[0xc] = v_14_3 + *(tmpD + 0x54);
                x87_r7_32 = v_10_3 + tmpD[0xb];
            }

            tmpD[0xd] = a3;
            *(tmpD + 0x6c) = a4;
            *(tmpD + 0x64) = x87_r7_32;
            tmpD[0xe] = a5;
            *(tmpD + 0x74) = a6;
            tmpD[0xf] = a7;
            *(tmpD + 0x7c) = a8;
            tmpD[0x10] = a6;
            int32_t* ctxB2 = tmpD + 0x9c;
            *(tmpD + 0x84) = a7;
            int32_t i_2 = 3;
            tmpD[0x11] = a8;
            int32_t i_1 = 0;
            int32_t i;

            do
            {
                ctxB2[-1] = 0;
                *ctxB2 = 0;
                ctxB2 = &ctxB2[2];
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
            tmpD[0x12] = 0;
            *(tmpD + 0x94) = 0x3f800000;
            *(tmpD + 0x8c) = 0;
            *(tmpD + 0xbc) = *(srcS + 0x9c);
            tmpD[0x18] = 1;
            tmpD[0x16] = 0;
            *(tmpD + 0xb4) = 0x3f000000;

            if (!a9)
                tmpD[0x17] = 0;
            else
                tmpD[0x17] = 0x3f000000;

            float* dstD8 = tmpD + 0x44;
            a9 = &tmpD[0x16];
            void* tmpD1 = &tmpD[0x13];

            do
            {
                tmpD1 += 8;
                a1[i_1 + *(srcS + 0x9c) * 0x14 + 0x249] = &dstD8[9];
                a1[i_1 + *(srcS + 0x9c) * 0x14 + 0x246] = dstD8;
                dstD8 = &dstD8[3];
                int32_t ctxB13 = i_1 + *(srcS + 0x9c) * 0xa;
                a1[ctxB13 * 2 + 0x24c] = *(tmpD1 - 8);
                a1[ctxB13 * 2 + 0x24d] = *(tmpD1 - 4);
                int32_t ctxB16 = i_1 + *(srcS + 0x9c) * 0x14;
                i_1 += 1;
                a1[ctxB16 + 0x252] = *a9;
                a9 = &a9[1];
            } while (i_1 < 3);

            a1[*(srcS + 0x9c) * 0x14 + 0x259] = 0;
            a1[(*(srcS + 0x9c) + 0x1e) * 0x14] = 0;
            int32_t valA12 = *(srcS + 0x9c);
            a1[valA12 * 0x14 + 0x255] = *(tmpD + 0x8c);
            a1[valA12 * 0x14 + 0x256] = tmpD[0x12];
            a1[valA12 * 0x14 + 0x257] = *(tmpD + 0x94);
            result = *(srcS + 0x9c) + 1;
            *(srcS + 0x9c) = result;
        }
        else
        {
            long double x87_r7_18 = v_8_1;
            long double f1_1 = 0f;
            x87_r7_18 - f1_1;
            result = (x87_r7_18 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_18, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_18 == f1_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_47c710:
                long double x87_r7_20 = v_8_1;
                long double f2_1 = 0f;
                x87_r7_20 - f2_1;

                if (!(*(&((x87_r7_20 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_20, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_20 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_47c732;

                long double x87_r7_21 = 0f;
                long double f4_1 = 0f;
                x87_r7_21 - f4_1;

                if (*(&((x87_r7_21 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_21, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_21 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    goto label_47c780;

                goto label_47c732;
            }

            long double x87_r7_19 = 0f;
            long double f3_1 = 0f;
            x87_r7_19 - f3_1;
            result = (x87_r7_19 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == f3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_47c710;
        }
    }

    return result;
}
