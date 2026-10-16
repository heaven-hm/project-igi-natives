#include "Vehicle_CheckFlightDynamics_3.h"
int32_t* Vehicle_CheckFlightDynamics_3(double* a1)

{
    int32_t* srcS = nullptr;
    int32_t* v_318 = nullptr;
    int16_t valA = Vehicle_UpdateRudder_5();
    int32_t* i = QTask_DeleteTask_2(a1[0x1d], valA);
    int32_t* i_3 = i;
    int32_t* i_2 = nullptr;
    int32_t v_310 = 0xffffffff;
    int32_t v_30c = 0xffefffff;

    if (i_3)
    {
        void v_278;
        int32_t* v_328_1 = &v_278;
        void v_1f8;
        float* dstD1 = &v_1f8;
        i = nullptr;
        int32_t v_304;
        int32_t* v_320_1 = &v_304;
        float* v_324_1 = &v_1f8;
        int32_t* i_1 = nullptr;
        double* v_344;

        for (; i < 0x60; i = i_1)
        {
            int32_t v_33c_1 = 0;
            int32_t saved_dst;
            v_344 = &saved_dst + i + 0x60;
            WeaponType_UpdateAnim(v_344, i_3, v_33c_1);
            int32_t* i_4 = i_1;
            *dstD1 = *(&saved_dst + i + 0x60);
            void v_2d0;
            dstD1[1] = *(&v_2d0 + i_4);
            void v_2c8;
            long double x87_r7_3 = *(&v_2c8 + i_4);
            dstD1[2] = x87_r7_3;
            float v_2e8_1 = x87_r7_3 * i_3[0x23] + i_3[0x20] * dstD1[1] + i_3[0x1d] * *dstD1;
            long double x87_r7_5 = x87_r7_3 * i_3[0x24] + i_3[0x21] * dstD1[1];
            long double x87_r6_12 = i_3[0x1e] * *dstD1;
            *dstD1 = x87_r7_3 * i_3[0x22] + i_3[0x1f] * dstD1[1] + i_3[0x1c] * *dstD1;
            dstD1[1] = v_2e8_1;
            long double x87_r7_7 = *(i_3 + 0xf0);
            dstD1[2] = x87_r7_5 + x87_r6_12;
            long double x87_r7_8 = x87_r7_7 + *dstD1;
            *v_328_1 = 0;
            v_328_1[1] = 0xc0c00000;
            *dstD1 = x87_r7_8;
            v_318 += 1;
            dstD1[1] = *(i_3 + 0xf8) + dstD1[1];
            dstD1[2] = *(i_3 + 0x100) + dstD1[2];
            *(&saved_dst + i + 0x60) = *(i_3 + 0x20) + *(&saved_dst + i + 0x60);
            *(&v_2d0 + i_4) = *(i_3 + 0x28) + *(&v_2d0 + i_4);
            *(&v_2c8 + i_4) = *(i_3 + 0x30) + *(&v_2c8 + i_4) + 8192.0;
            memcpy(&v_344 + i_4 + 0xec, &saved_dst + i + 0x60, 0x18);
            void v_248;
            *(&v_248 + i_4) = *(&v_248 + i_4) - 8192.0;
            *v_320_1 = i_3;
            v_324_1 = &v_324_1[3];
            v_328_1 = &v_328_1[2];
            i_1 = &i_4[6];
            v_320_1 = &v_320_1[1];
            i = QTask_TriggerEvent_2(i_3, Vehicle_UpdateRudder_5());
            srcS = v_318;
            i_3 = i;

            if (!i_3)
                break;

            dstD1 = v_324_1;
        }

        if (srcS)
        {
            double* dstD5 = a1;
            int32_t v_33c_2 = 0xffffffff;
            void v_2e0;
            double* v_340_2 = &v_2e0;
            v_344 = 0xc;
            double* v_2dc_1 = dstD5;
            double v_2d8;
            double v_258[0x2];
            void v_1c8;
            i = DynObj_FindSymbol_11(Level_StartMission_4(), &v_1c8, &v_2d8, &v_258, srcS, v_344,
                v_340_2, v_33c_2);

            if (srcS > 0)
            {
                void v_168;
                double* ctxB = &v_168;
                int32_t* v_328_2 = &v_1f8;
                double* objC5 = &v_278;
                double* v_320_2 = &v_278;
                int32_t* v_324_2 = srcS;
                double v_2f4;
                bool cond_1_1;

                do
                {
                    if (ctxB[-1])
                    {
                        long double x87_r7_22 = *objC5;
                        long double f1_1 = 0.0;
                        x87_r7_22 - f1_1;
                        long double x87_r7_23 = *objC5;

                        if (*(&((x87_r7_22 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_22, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_22 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            x87_r7_23 = -(x87_r7_23);

                        long double f2_1 = *ctxB;
                        x87_r7_23 - f2_1;

                        if (!(*(&((x87_r7_23 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_23, f2_1) ? 1 : 0) << 0xa
                            | (x87_r7_23 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_25 = 8192.0 - *ctxB;
                            long double x87_r6_13 = *ctxB;
                            long double f3_1 = 7577.6000000000004;
                            x87_r6_13 - f3_1;
                            v_304 = 0;
                            int32_t v_300_1 = 0;
                            double* srcS4;

                            if (!(*(&((x87_r6_13 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_13, f3_1) ? 1 : 0) << 0xa
                                | (x87_r6_13 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            {
                                srcS4 = a1;
                                float v_2fc_2 = x87_r7_25 * 0.0016276041666666667 *
                                    *(*(a1 + 0x1b4) + 8) * 17.8403549f;
                            }
                            else
                            {
                                srcS4 = a1;
                                float v_2fc_1 = ((7577.6001f - *ctxB) * 0.0001319679f + 1f) *
                                    *(*(srcS4 + 0x1b4) + 8) * 17.8403549f;
                                long double x87_r7_34 = 7577.6000000000004 - *ctxB;
                                long double x87_r6_14 = v_310;
                                x87_r6_14 - x87_r7_34;

                                if (!(*(&((x87_r6_14 < x87_r7_34 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_14, x87_r7_34) ? 1 : 0) << 0xa
                                        | (x87_r6_14 == x87_r7_34 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    i_2 = 1;
                                else
                                {
                                    v_310 = x87_r7_34;
                                    i_2 = 1;
                                }
                            }

                            int32_t v_2f8_1 = *v_328_2;
                            v_2f4 = v_328_2[1];
                            *(&v_2f4 + 4) = v_328_2[2];
                            ForceAccumulator_Add(&dstD5[0x1e], &v_304);
                            objC5 = v_320_2;
                            dstD5[0x21] = dstD5[0x21] * srcS4[0xe4] * 0.800000012f;
                            *(dstD5 + 0x10c) = *(dstD5 + 0x10c) * srcS4[0xe4] * 0.800000012f;
                            dstD5[0x24] = dstD5[0x24] * 0.980000019f;
                            *(dstD5 + 0x124) = *(dstD5 + 0x124) * 0.980000019f;
                            dstD5[0x25] = dstD5[0x25] * 0.980000019f;
                            dstD5 = a1;
                        }
                    }

                    objC5 = &objC5[1];
                    ctxB = &ctxB[0xe];
                    cond_1_1 = v_324_2 != 1;
                    v_320_2 = objC5;
                    v_328_2 = &v_328_2[3];
                    v_324_2 -= 1;
                } while (cond_1_1);
                i = i_2;

                if (i)
                {
                    memcpy(&v_304, &dstD5[4], 0x18);
                    double v_2f4_1 = v_2f4 + v_310;
                    long double x87_r7_53 = *(a1 + 0x9c);
                    long double x87_r6_15 = a1[0x14];
                    x87_r6_15 - x87_r7_53;
                    long double x87_r7_54;

                    if (!(*(&((x87_r6_15 < x87_r7_53 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_15, x87_r7_53) ? 1 : 0) << 0xa
                            | (x87_r6_15 == x87_r7_53 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_54 = a1[0x14];
                    else
                        x87_r7_54 = *(a1 + 0x9c);

                    long double x87_r6_16 = a1[0x13];
                    x87_r6_16 - x87_r7_54;
                    long double x87_r7_56;

                    if (*(&((x87_r6_16 < x87_r7_54 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, x87_r7_54) ? 1 : 0) << 0xa
                        | (x87_r6_16 == x87_r7_54 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r7_57 = *(a1 + 0x9c);
                        long double x87_r6_17 = a1[0x14];
                        x87_r6_17 - x87_r7_57;

                        if (!(*(&((x87_r6_17 < x87_r7_57 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_17, x87_r7_57) ? 1 : 0) << 0xa
                                | (x87_r6_17 == x87_r7_57 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_56 = a1[0x14];
                        else
                            x87_r7_56 = *(a1 + 0x9c);
                    }
                    else
                        x87_r7_56 = a1[0x13];

                    float v_33c_5 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_56;
                    double* v_340_4 = &v_304;
                    v_344 = a1;
                    return WorldObject_CommitTransform(Level_StartMission_4(), v_344, v_340_4, v_33c_5);
                }
            }
        }
    }

    return i;
}
