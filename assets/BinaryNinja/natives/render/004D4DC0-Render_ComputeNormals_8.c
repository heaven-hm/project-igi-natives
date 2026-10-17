// Original IGI.EXE function: Render_ComputeNormals_8 (VA 0x004D4DC0; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_8.h"
int32_t Render_ComputeNormals_8(int32_t a1, int32_t a2, int32_t* a3, void* a4, float a5, float a6)

{
    void* ctxB = a4;
    int32_t dstD = 0;

    if (ctxB)
    {
        int32_t v_8_1 = 1;
        long double x87_r7_1 = a6;
        long double f0_1 = a5;
        x87_r7_1 - f0_1;
        int32_t* valA2 = *(*(ctxB + 0xc) + 0x10);
        int32_t flagP1 = *valA2;
        int32_t v_4_1 = flagP1;

        if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
            v_8_1 = 0;

        long double x87_r7_2 = a5;
        long double f1_1 = a6;
        x87_r7_2 - f1_1;
        float v_c_1;

        v_c_1 = !(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? a6 : a5;

        long double x87_r7_3 = a5;
        long double f2_1 = a6;
        x87_r7_3 - f2_1;

        if (*(&((x87_r7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            a5 = a6;

        if (flagP1 > 0)
        {
            int32_t srcS = a2;
            float* tmpD3 = valA2[1] + 8;
            int32_t* objC4 = a1 + srcS * 0x1c + 8;

            do
            {
                long double x87_r7_4 = *tmpD3;
                long double f3_1 = a5;
                x87_r7_4 - f3_1;

                if (!(*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    break;

                long double x87_r7_5 = v_c_1;
                long double f4_1 = a5;
                x87_r7_5 - f4_1;
                long double x87_r7_6;
                long double f6_1;

                if (*(&((x87_r7_5 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    x87_r7_6 = *tmpD3;
                    f6_1 = v_c_1;
                    x87_r7_6 - f6_1;
                }

                if (*(&((x87_r7_5 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40 && *(&(
                    (x87_r7_6 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                label_4d4ebb:
                    srcS += 1;
                    objC4[-2] = *a3;
                    objC4[-1] = tmpD3[-2];
                    *objC4 = *(ctxB + 4);
                    objC4[1] = *tmpD3;
                    int32_t* ctxB1 = &objC4[2];
                    objC4 = &objC4[7];
                    *ctxB1 = tmpD3[1];
                    ctxB1[1] = tmpD3[2];
                    flagP1 = v_4_1;
                    ctxB1[2] = tmpD3[3];
                    ctxB = a4;
                }
                else
                {
                    long double x87_r7_7 = *tmpD3;
                    long double f5_1 = v_c_1;
                    x87_r7_7 - f5_1;
                    int16_t valA7 = (x87_r7_7 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == f5_1 ? 1 : 0) << 0xe;

                    if (!v_8_1)
                    {
                        if (!(*(&valA7 + 1) & 0x41))
                            goto label_4d4ebb;
                    }
                    else if (!(*(&valA7 + 1) & 1))
                    {
                        long double x87_r7_8 = *tmpD3;
                        long double f7_1 = a5;
                        x87_r7_8 - f7_1;

                        if (*(&((x87_r7_8 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_8, f7_1) ? 1 : 0) << 0xa
                                | (x87_r7_8 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                            goto label_4d4ebb;
                    }
                }

                dstD += 1;
                tmpD3 = &tmpD3[6];
            } while (dstD < flagP1);

            return srcS;
        }
    }

    return a2;
}
