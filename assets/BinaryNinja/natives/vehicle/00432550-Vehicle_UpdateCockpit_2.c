#include "Vehicle_UpdateCockpit_2.h"
int32_t* Vehicle_UpdateCockpit_2(void* a1)

{
    int32_t* srcS = nullptr;
    int32_t* v_324 = nullptr;
    int16_t valA = Menu_LeaveMenus_18();
    void* dstD = a1;
    int32_t* result = QTask_DeleteTask_2(*(dstD + 0xe8), valA);
    int32_t* result_2 = result;
    int32_t i = 0;
    int32_t* result_1 = nullptr;
    int32_t v_310 = 0xffffffff;
    int32_t v_30c = 0xffefffff;
    *(dstD + 0x1b8) = 0;

    if (result_2)
    {
        void v_2b4;
        result = &v_2b4;
        void v_2d8;
        double* v_320_1 = &v_2d8;
        float* v_318 = &v_2b4;
        double v_308;
        double v_2e8;

        while (i < 0x60)
        {
            int32_t saved_dst;
            memcpy(&saved_dst + i + 0x110, &result_2[8], 0x18);
            *(&saved_dst + i + 0x120) = *(&saved_dst + i + 0x120) + 8192.0;
            float* objC1 = result_2[0x4e];
            v_308 = *objC1;
            float* objC2 = v_318;
            v_2e8 = objC1[1];
            objC2[-1] = *(result_2 + 0xf0);
            *objC2 = *(result_2 + 0xf8);
            objC2[1] = *(result_2 + 0x100);
            double* objC3 = v_320_1;
            v_320_1 = &v_320_1[1];
            long double x87_r7_10 = -((v_308 + 8192.0));
            *objC3 = x87_r7_10;
            memcpy(&saved_dst + i + 0xb0, &saved_dst + i + 0x110, 0x18);
            void v_290;
            *(&v_290 + i + 0x18) = x87_r7_10 + *(&v_290 + i + 0x18);
            srcS = v_324 + 1;
            v_324 = srcS;
            v_318 = &v_318[3];
            result = QTask_TriggerEvent_2(result_2, Menu_LeaveMenus_18());
            dstD = a1;
            result_2 = result;

            if (!result_2)
                break;

            i += 0x18;
            srcS = v_324;
        }

        if (srcS)
        {
            void* v_2dc_1 = dstD;
            void v_2e0;
            double v_288[0xc];
            double v_228[0xc];
            void v_1c8;
            result = DynObj_FindSymbol_11(Level_StartMission_4(), &v_1c8, &v_228, &v_288, srcS, 0xc,
                &v_2e0, 0xffffffff);

            if (srcS > 0)
            {
                double* objC6 = &v_2d8;
                void v_2b8;
                int32_t* v_320_2 = &v_2b8;
                void v_168;
                double* ctxB = &v_168;
                double* v_324_1 = &v_2d8;
                int32_t* v_31c_2 = srcS;
                int32_t v_300;
                double v_2f0;
                bool cond_1_1;

                do
                {
                    if (ctxB[-1])
                    {
                        long double x87_r7_12 = *objC6;
                        long double f1_1 = 0.0;
                        x87_r7_12 - f1_1;
                        long double x87_r7_13 = *objC6;

                        if (*(&((x87_r7_12 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_12, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_12 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            x87_r7_13 = -(x87_r7_13);

                        long double f2_1 = *ctxB;
                        x87_r7_13 - f2_1;

                        if (!(*(&((x87_r7_13 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_13, f2_1) ? 1 : 0) << 0xa
                            | (x87_r7_13 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_14 = *ctxB;
                            long double f3_1 = 0.0;
                            x87_r7_14 - f3_1;
                            long double x87_r7_15 = *ctxB;

                            if (*(&((x87_r7_14 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_14, f3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_14 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                x87_r7_15 = -(x87_r7_15);

                            v_300 = 0;
                            int32_t v_2fc_1 = 0;
                            v_318 = v_308 - (x87_r7_15 - 8192.0);
                            long double x87_r7_19 = v_2e8 + 8192.0;
                            long double f4_1 = *ctxB;
                            x87_r7_19 - f4_1;

                            if (*(&((x87_r7_19 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_19, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_19 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            {
                                result_1 = nullptr;
                                float v_2f8_2 =
                                    v_318 / v_308 * *(*(dstD + 0x1b4) + 8) * 11.1502218f;
                            }
                            else
                            {
                                long double x87_r6_2 = *ctxB;
                                long double f5_1 = 0.0;
                                x87_r6_2 - f5_1;
                                long double x87_r6_3 = *ctxB;
                                result_1 = 1;

                                if (*(&((x87_r6_2 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_2, f5_1) ? 1 : 0) << 0xa
                                        | (x87_r6_2 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                    x87_r6_3 = -(x87_r6_3);

                                void* tmpD1 = *(dstD + 0x1b4);
                                v_318 = v_2e8 + 8192f;
                                float v_2f8_1 = ((v_318 - x87_r6_3) / v_318 + 1f) *
                                    *(tmpD1 + 8) * 11.1502218f;
                                long double x87_r7_20 = x87_r7_19 - *ctxB;
                                long double f6_1 = v_310;
                                x87_r7_20 - f6_1;

                                if (!(*(&((x87_r7_20 < f6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_20, f6_1) ? 1 : 0) << 0xa
                                        | (x87_r7_20 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                    v_310 = x87_r7_20;
                            }

                            int32_t v_2f4_1 = *v_320_2;
                            v_2f0 = v_320_2[1];
                            *(&v_2f0 + 4) = v_320_2[2];
                            ForceAccumulator_Add(dstD + 0xf0, &v_300);
                            objC6 = v_324_1;
                            *(dstD + 0x1b8) += 1;
                            *(dstD + 0x108) = *(dstD + 0x108) * 0.949999988f;
                            *(dstD + 0x10c) = *(dstD + 0x10c) * 0.949999988f;
                            *(dstD + 0x110) = *(dstD + 0x110) * 0.970000029f;
                            *(dstD + 0x120) = *(dstD + 0x120) * 0.980000019f;
                            *(dstD + 0x124) = *(dstD + 0x124) * 0.980000019f;
                            *(dstD + 0x128) = *(dstD + 0x128) * 0.980000019f;
                        }
                    }

                    objC6 = &objC6[1];
                    ctxB = &ctxB[0xe];
                    cond_1_1 = v_31c_2 != 1;
                    v_324_1 = objC6;
                    v_320_2 = &v_320_2[3];
                    v_31c_2 -= 1;
                } while (cond_1_1);
                result = result_1;

                if (result)
                {
                    memcpy(&v_300, dstD + 0x20, 0x18);
                    double v_2f0_1 = v_2f0 + v_310;
                    long double x87_r7_41 = *(a1 + 0x9c);
                    long double x87_r6_9 = *(a1 + 0xa0);
                    x87_r6_9 - x87_r7_41;
                    long double x87_r7_42;

                    if (!(*(&((x87_r6_9 < x87_r7_41 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_9, x87_r7_41) ? 1 : 0) << 0xa
                            | (x87_r6_9 == x87_r7_41 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_42 = *(a1 + 0xa0);
                    else
                        x87_r7_42 = *(a1 + 0x9c);

                    long double x87_r6_10 = *(a1 + 0x98);
                    x87_r6_10 - x87_r7_42;
                    long double x87_r7_44;

                    if (*(&((x87_r6_10 < x87_r7_42 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_10, x87_r7_42) ? 1 : 0) << 0xa
                        | (x87_r6_10 == x87_r7_42 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r7_45 = *(a1 + 0x9c);
                        long double x87_r6_11 = *(a1 + 0xa0);
                        x87_r6_11 - x87_r7_45;

                        if (!(*(&((x87_r6_11 < x87_r7_45 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_11, x87_r7_45) ? 1 : 0) << 0xa
                                | (x87_r6_11 == x87_r7_45 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_44 = *(a1 + 0xa0);
                        else
                            x87_r7_44 = *(a1 + 0x9c);
                    }
                    else
                        x87_r7_44 = *(a1 + 0x98);

                    float v_33c_4 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_44;
                    return WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_300, v_33c_4);
                }
            }
        }
    }

    return result;
}
