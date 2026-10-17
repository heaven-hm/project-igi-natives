// Original IGI.EXE function: Physics_SimulateRigidBody_14 (VA 0x0050F770; static CFG gate FAIL, CFG score 0.733).
#include "Physics_SimulateRigidBody_14.h"
int32_t Physics_SimulateRigidBody_14(void* a1)

{
    float valA = g_bcadc0;
    int32_t result = g_b16c9c;
    int32_t* v_74c = &g_b12c60;

    if (result > 0)
    {
        int32_t result_1 = result;
        bool cond_1_1;

        do
        {
            void* tmpD1 = *v_74c;
            double v_724;
            memcpy(&v_724, tmpD1, 0x18);
            uint32_t i_3 = *(tmpD1 + 0x18);
            float* tmpD4 = tmpD1 + 0x20;

            if (*(tmpD1 + 0x1c) == 0x10)
            {
                v_724 = v_724 - g_bcab08;
                double v_71c = v_71c - g_bcab10;
                double v_714 = v_714 - g_bcab18;
                long double x87_r7_11 = g_bcab00 * v_714 + g_bcaafc * v_71c
                    + g_bcaaf8 * v_724 - 28377.919921875;
                long double x87_r6_5 = *(a1 + 8);
                x87_r6_5 - x87_r7_11;

                if (!(*(&((x87_r6_5 < x87_r7_11 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, x87_r7_11) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_11 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    if (i_3 > 0)
                    {
                        long double x87_r7_12 = g_bcab08;
                        long double x87_r6_6 = g_bcab10;
                        long double x87_r5_1 = g_bcab18;
                        void v_6e8;
                        int32_t* objC2 = &v_6e8;
                        uint32_t i;

                        do
                        {
                            long double x87_r4_2 = *tmpD4 - x87_r7_12;
                            long double x87_r3_1 = tmpD4[1];
                            float valA6 = tmpD4[2];
                            tmpD4 = &tmpD4[4];
                            long double x87_r3_2 = x87_r3_1 - x87_r6_6;
                            long double x87_r2_2 = valA6 - x87_r5_1;
                            float v_748_1 = g_bcaae8 * x87_r2_2 + g_bcaae4 * x87_r3_2
                                + g_bcaae0 * x87_r4_2;
                            float v_744_1 = g_bcaaf4 * x87_r2_2 + g_bcaaf0 * x87_r3_2
                                + g_bcaaec * x87_r4_2;
                            float v_740_1 = g_bcab00 * x87_r2_2 + g_bcaafc * x87_r3_2
                                + g_bcaaf8 * x87_r4_2;
                            long double x87_r4_4 = v_740_1;
                            long double f1_1 = valA;
                            x87_r4_4 - f1_1;
                            float v_73c;
                            float v_738;
                            float v_734;
                            int32_t valA12;

                            if (*(&((x87_r4_4 < f1_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_4, f1_1) ? 1 : 0) << 0xa
                                    | (x87_r4_4 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                valA12 = 0x10;
                            else
                            {
                                long double x87_r4_6 = 1f / v_740_1;
                                v_734 = x87_r4_6;
                                long double x87_r4_9 =
                                    x87_r4_6 * v_748_1 * g_bcab28 + g_bcab30;
                                v_73c = x87_r4_9;
                                long double x87_r3_7 =
                                    g_bcab2c * v_734 * v_744_1 + g_bcab34;
                                v_738 = x87_r3_7;
                                long double f2_1 = g_bcabd0;
                                x87_r4_9 - f2_1;
                                int32_t flagP1;

                                flagP1 = !(*(&((x87_r4_9 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_9, f2_1) ? 1 : 0) << 0xa
                                    | (x87_r4_9 == f2_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1) ? 0 : 1;

                                long double f4_1 = g_bcabd4;
                                x87_r3_7 - f4_1;
                                int32_t ctxB1;

                                ctxB1 = !(*(&((x87_r3_7 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r3_7, f4_1) ? 1 : 0) << 0xa
                                    | (x87_r3_7 == f4_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1) ? 0 : 1;

                                long double f5_1 = g_bcabd8;
                                x87_r4_9 - f5_1;
                                int32_t dstD1;

                                dstD1 = *(&((x87_r4_9 < f5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_9, f5_1) ? 1 : 0) << 0xa
                                    | (x87_r4_9 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41 ? 0
                                    : 1;

                                long double x87_r4_10 = v_738;
                                long double f7_1 = g_bcabdc;
                                x87_r4_10 - f7_1;

                                valA12 = *(&((x87_r4_10 < f7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_10, f7_1) ? 1 : 0) << 0xa
                                    | (x87_r4_10 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41
                                    ? (dstD1 << 1 | ctxB1) << 1 | flagP1
                                    : ((2 | dstD1) << 1 | ctxB1) << 1 | flagP1;
                            }

                            *objC2 = valA12;
                            objC2[-6] = v_748_1;
                            objC2[-5] = v_744_1;
                            objC2[-4] = v_740_1;
                            int32_t* dstD3 = &objC2[-3];
                            objC2 = &objC2[7];
                            i = i_3;
                            i_3 -= 1;
                            *dstD3 = v_73c;
                            dstD3[1] = v_738;
                            dstD3[2] = v_734;
                        } while (i != 1);
                    }

                    int32_t* flagP2 = tmpD4[1];
                    int32_t i_4 = tmpD4[3];

                    if (i_4 > 0)
                    {
                        int32_t i_2 = i_4;
                        int32_t i_1;

                        do
                        {
                            int24_t objC3 = *flagP2;
                            int32_t tmpD8 = 0;
                            tmpD8 = *(&objC3 + 1);
                            float v_760_1 = valA;
                            int32_t objC4 = 0;
                            objC4 = *(&objC3 + 2);
                            void* v_764_1 = a1 + 8;
                            void v_79c;
                            void v_780;
                            memcpy(&v_780, &v_79c + objC4 * 0x1c + 0x9c, 0x1c);
                            void v_7b8;
                            memcpy(&v_79c, &v_7b8 + tmpD8 * 0x1c + 0xb8, 0x1c);
                            memcpy(&v_7b8, &v_7b8 + objC3 * 0x1c + 0xb8, 0x1c);
                            Camera_SetFieldOfView();
                            flagP2 = &flagP2[1];
                            i_1 = i_2;
                            i_2 -= 1;
                        } while (i_1 != 1);
                    }
                }
            }

            result = result_1 - 1;
            cond_1_1 = result_1 != 1;
            v_74c = &v_74c[1];
            result_1 = result;
        } while (cond_1_1);
    }

    return result;
}
