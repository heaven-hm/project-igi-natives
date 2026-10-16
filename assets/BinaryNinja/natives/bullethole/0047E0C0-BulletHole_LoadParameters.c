#include "BulletHole_LoadParameters.h"
int32_t BulletHole_LoadParameters(void* a1, int32_t* a2)

{
    int32_t flagP = g_5c1118;
    void* dstD = *a2;
    int32_t valA1 = g_5c1110;
    int32_t kind = 0;
    float v_28 = 1f;
    int32_t v_24 = 0;
    int32_t v_20 = 0;
    int32_t v_1c = 0;
    int32_t v_18 = 0x3f800000;
    int32_t v_14 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    int32_t v_8 = 0x3f800000;
    int32_t v_4 = 0;
    int32_t valA15;

    if (valA1 > 0)
    {
        int32_t* tmpD1 = g_5c110c;

        do
        {
            void* ctxB2 = *(*tmpD1 * flagP + g_5c1108);

            if (*(ctxB2 + 0xe130) == a1)
            {
                int32_t i = *(ctxB2 + 0x44e0);

                if (i >= 0)
                {
                    valA15 = i * 0xb;
                    float* objC7 = ctxB2 + (valA15 << 3) + 0x28;

                    do
                    {
                        if (objC7[0x10] != 0xffffffff)
                        {
                            long double x87_r7_2 = objC7[3] - *(dstD + 0x28);
                            long double x87_r6_2 = objC7[2] - *(dstD + 0x24);
                            long double x87_r5_2 = objC7[1] - *(dstD + 0x20);
                            float v_34_2 = objC7[0x12] * 1.5f;
                            long double x87_r4_6 =
                                x87_r5_2 * x87_r5_2 + x87_r6_2 * x87_r6_2 + x87_r7_2 * x87_r7_2;
                            long double x87_r6_5 = v_34_2 * v_34_2;
                            x87_r6_5 - x87_r4_6;
                            valA15 = (x87_r6_5 < x87_r4_6 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_5, x87_r4_6) ? 1 : 0) << 0xa
                                | (x87_r6_5 == x87_r4_6 ? 1 : 0) << 0xe;

                            if (!(*(&valA15 + 1) & 0x41))
                            {
                                long double x87_r7_4 = *(dstD + 0x2c);
                                long double f2_1 = 0f;
                                x87_r7_4 - f2_1;
                                valA15 = (x87_r7_4 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe;

                                if (!(*(&valA15 + 1) & 0x40))
                                {
                                label_47e31f:
                                    long double x87_r7_7 = *(dstD + 0x34);
                                    long double x87_r6_6 = *(dstD + 0x30);
                                    long double x87_r5_4 = *(dstD + 0x2c);
                                    long double x87_r7_9 = 1.0 / sqrtl(x87_r5_4 * x87_r5_4
                                        + x87_r6_6 * x87_r6_6 + x87_r7_7 * x87_r7_7);
                                    *(dstD + 0x2c) = *(dstD + 0x2c) * x87_r7_9;
                                    *(dstD + 0x30) = *(dstD + 0x30) * x87_r7_9;
                                    *(dstD + 0x34) = *(dstD + 0x34) * x87_r7_9;
                                }
                                else
                                {
                                    long double x87_r7_5 = *(dstD + 0x30);
                                    long double f4_1 = 0f;
                                    x87_r7_5 - f4_1;
                                    valA15 = (x87_r7_5 < f4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_5, f4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_5 == f4_1 ? 1 : 0) << 0xe;

                                    if (!(*(&valA15 + 1) & 0x40))
                                        goto label_47e31f;

                                    long double x87_r7_6 = *(dstD + 0x34);
                                    long double f7_1 = 0f;
                                    x87_r7_6 - f7_1;
                                    valA15 = (x87_r7_6 < f7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_6, f7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_6 == f7_1 ? 1 : 0) << 0xe;

                                    if (!(*(&valA15 + 1) & 0x40))
                                        goto label_47e31f;
                                }

                                long double x87_r7_11 = objC7[-2];
                                long double f6_1 = 0f;
                                x87_r7_11 - f6_1;
                                valA15 = (x87_r7_11 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_11, f6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_11 == f6_1 ? 1 : 0) << 0xe;

                                if (!(*(&valA15 + 1) & 0x40))
                                {
                                label_47e38f:
                                    long double x87_r7_14 = *objC7;
                                    long double x87_r6_14 = objC7[-1];
                                    long double x87_r5_6 = objC7[-2];
                                    long double x87_r7_16 = 1.0 / sqrtl(x87_r6_14 * x87_r6_14
                                        + x87_r7_14 * x87_r7_14 + x87_r5_6 * x87_r5_6);
                                    objC7[-2] = objC7[-2] * x87_r7_16;
                                    objC7[-1] = objC7[-1] * x87_r7_16;
                                    *objC7 = *objC7 * x87_r7_16;
                                }
                                else
                                {
                                    long double x87_r7_12 = objC7[-1];
                                    long double f10_1 = 0f;
                                    x87_r7_12 - f10_1;
                                    valA15 = (x87_r7_12 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_12, f10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_12 == f10_1 ? 1 : 0) << 0xe;

                                    if (!(*(&valA15 + 1) & 0x40))
                                        goto label_47e38f;

                                    long double x87_r7_13 = *objC7;
                                    long double f13_1 = 0f;
                                    x87_r7_13 - f13_1;
                                    valA15 = (x87_r7_13 < f13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_13, f13_1) ? 1 : 0) << 0xa
                                        | (x87_r7_13 == f13_1 ? 1 : 0) << 0xe;

                                    if (!(*(&valA15 + 1) & 0x40))
                                        goto label_47e38f;
                                }

                                long double x87_r7_21 = *(dstD + 0x2c) * objC7[-2]
                                    + *(dstD + 0x34) * *objC7 + objC7[-1] * *(dstD + 0x30);
                                long double f12_1 = 0.899999976f;
                                x87_r7_21 - f12_1;
                                valA15 = (x87_r7_21 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_21, f12_1) ? 1 : 0) << 0xa
                                    | (x87_r7_21 == f12_1 ? 1 : 0) << 0xe;

                                if (!(*(&valA15 + 1) & 0x41))
                                    return valA15;
                            }
                        }

                        i -= 1;
                        objC7 -= 0x58;
                    } while (i >= 0);
                }

                int32_t tmpD9 = *(ctxB2 + 0x44e8) - 1;

                if (tmpD9 > *(ctxB2 + 0x44e0))
                {
                    valA15 = tmpD9 * 0xb;
                    float* objC9 = ctxB2 + (valA15 << 3) + 0x28;

                    do
                    {
                        if (objC9[0x10] != 0xffffffff)
                        {
                            long double x87_r7_23 = objC9[3] - *(dstD + 0x28);
                            long double x87_r6_27 = objC9[2] - *(dstD + 0x24);
                            long double x87_r5_9 = objC9[1] - *(dstD + 0x20);
                            float v_34_3 = objC9[0x12] * 1.5f;
                            long double x87_r4_22 =
                                x87_r5_9 * x87_r5_9 + x87_r6_27 * x87_r6_27 + x87_r7_23 * x87_r7_23;
                            long double x87_r6_30 = v_34_3 * v_34_3;
                            x87_r6_30 - x87_r4_22;
                            valA15 = (x87_r6_30 < x87_r4_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_30, x87_r4_22) ? 1 : 0) << 0xa
                                | (x87_r6_30 == x87_r4_22 ? 1 : 0) << 0xe;

                            if (!(*(&valA15 + 1) & 0x41))
                            {
                                long double x87_r7_25 = *(dstD + 0x2c);
                                long double f3_1 = 0f;
                                x87_r7_25 - f3_1;
                                valA15 = (x87_r7_25 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_25, f3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_25 == f3_1 ? 1 : 0) << 0xe;

                                if (!(*(&valA15 + 1) & 0x40))
                                {
                                label_47e4a1:
                                    long double x87_r7_28 = *(dstD + 0x34);
                                    long double x87_r6_31 = *(dstD + 0x30);
                                    long double x87_r5_11 = *(dstD + 0x2c);
                                    long double x87_r7_30 = 1.0 / sqrtl(x87_r5_11 * x87_r5_11
                                        + x87_r6_31 * x87_r6_31 + x87_r7_28 * x87_r7_28);
                                    *(dstD + 0x2c) = *(dstD + 0x2c) * x87_r7_30;
                                    *(dstD + 0x30) = *(dstD + 0x30) * x87_r7_30;
                                    *(dstD + 0x34) = *(dstD + 0x34) * x87_r7_30;
                                }
                                else
                                {
                                    long double x87_r7_26 = *(dstD + 0x30);
                                    long double f5_1 = 0f;
                                    x87_r7_26 - f5_1;
                                    valA15 = (x87_r7_26 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_26, f5_1) ? 1 : 0) << 0xa
                                        | (x87_r7_26 == f5_1 ? 1 : 0) << 0xe;

                                    if (!(*(&valA15 + 1) & 0x40))
                                        goto label_47e4a1;

                                    long double x87_r7_27 = *(dstD + 0x34);
                                    long double f9_1 = 0f;
                                    x87_r7_27 - f9_1;
                                    valA15 = (x87_r7_27 < f9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_27, f9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_27 == f9_1 ? 1 : 0) << 0xe;

                                    if (!(*(&valA15 + 1) & 0x40))
                                        goto label_47e4a1;
                                }

                                long double x87_r7_32 = objC9[-2];
                                long double f8_1 = 0f;
                                x87_r7_32 - f8_1;
                                valA15 = (x87_r7_32 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_32, f8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_32 == f8_1 ? 1 : 0) << 0xe;

                                if (!(*(&valA15 + 1) & 0x40))
                                {
                                label_47e511:
                                    long double x87_r7_35 = *objC9;
                                    long double x87_r6_39 = objC9[-1];
                                    long double x87_r5_13 = objC9[-2];
                                    long double x87_r7_41 = 1.0 / sqrtl(x87_r7_35 * x87_r7_35
                                        + x87_r5_13 * x87_r5_13 + x87_r6_39 * x87_r6_39);
                                    objC9[-2] = objC9[-2] * x87_r7_41;
                                    objC9[-1] = objC9[-1] * x87_r7_41;
                                    *objC9 = *objC9 * x87_r7_41;
                                }
                                else
                                {
                                    long double x87_r7_33 = objC9[-1];
                                    long double f11_1 = 0f;
                                    x87_r7_33 - f11_1;
                                    valA15 = (x87_r7_33 < f11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_33, f11_1) ? 1 : 0) << 0xa
                                        | (x87_r7_33 == f11_1 ? 1 : 0) << 0xe;

                                    if (!(*(&valA15 + 1) & 0x40))
                                        goto label_47e511;

                                    long double x87_r7_34 = *objC9;
                                    long double f15_1 = 0f;
                                    x87_r7_34 - f15_1;
                                    valA15 = (x87_r7_34 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_34, f15_1) ? 1 : 0) << 0xa
                                        | (x87_r7_34 == f15_1 ? 1 : 0) << 0xe;

                                    if (!(*(&valA15 + 1) & 0x40))
                                        goto label_47e511;
                                }

                                long double x87_r7_46 = *(dstD + 0x34) * *objC9
                                    + *(dstD + 0x30) * objC9[-1] + objC9[-2] * *(dstD + 0x2c);
                                long double f14_1 = 0.899999976f;
                                x87_r7_46 - f14_1;
                                valA15 = (x87_r7_46 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_46, f14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_46 == f14_1 ? 1 : 0) << 0xe;

                                if (!(*(&valA15 + 1) & 0x41))
                                    return valA15;
                            }
                        }

                        valA15 = *(ctxB2 + 0x44e0);
                        tmpD9 -= 1;
                        objC9 -= 0x58;
                    } while (tmpD9 > valA15);
                }

                int32_t valA17 = *(ctxB2 + 0x44e8);
                int32_t* v_34_4;

                if (valA17 != 0xc8)
                {
                    *(ctxB2 + 0x44e0) = valA17;
                    *(ctxB2 + 0x44e8) = valA17 + 1;
                    v_34_4 = ctxB2 + valA17 * 0x58 + 0x20;
                }
                else
                {
                    int32_t valA18 = *(ctxB2 + 0x44e4);
                    *(ctxB2 + 0x44e0) = valA18;
                    int32_t valA19 = valA18 + 1;
                    *(ctxB2 + 0x44e4) = valA19;
                    v_34_4 = ctxB2 + valA18 * 0x58 + 0x20;

                    if (valA19 >= 0xc8)
                        valA19 -= 0xc8;

                    *(ctxB2 + 0x44e4) = valA19;
                    int32_t* i_2 = *(ctxB2 + valA18 * 0x58 + 0x74);

                    if (i_2)
                    {
                        int32_t srcS6 = g_5c1128;
                        int32_t flagP1 = g_5c1134;
                        int32_t* i_1;

                        do
                        {
                            int32_t objC12 = *(i_2 + flagP1);
                            i_1 = i_2[0xf];
                            srcS6 -= 1;
                            g_5c1128 = srcS6;

                            if (objC12 != srcS6)
                            {
                                int32_t tmpD11 = g_5c1124;
                                int32_t* valA22 =
                                    *(tmpD11 + (srcS6 << 2)) * g_5c1130 + g_5c1120;
                                int32_t srcS8 = *(valA22 + flagP1);
                                int32_t flagP2 = *(tmpD11 + (objC12 << 2));
                                *(tmpD11 + (objC12 << 2)) = *(tmpD11 + (srcS8 << 2));
                                *(g_5c1124 + (srcS8 << 2)) = flagP2;
                                *(valA22 + g_5c1134) = objC12;
                                srcS6 = g_5c1128;
                                flagP1 = g_5c1134;
                            }

                            i_2 = i_1;
                        } while (i_1);
                    }
                }

                Weapon_UpdateZoom_8(a1 + 0x20, &v_28, ctxB2, v_34_4, dstD, 0, a2[2], a2[3]);
                int32_t valA28 = Timer_Now();
                *(ctxB2 + 0xe144) = valA28;
                return valA28;
            }

            kind += 1;
            tmpD1 = &tmpD1[1];
        } while (kind < valA1);
    }

    if (valA1 == g_5c1114)
    {
        int32_t* ctxB3 = nullptr;
        int32_t tmpD2 = 0xffffffff;

        if (valA1 > 0)
        {
            int32_t* srcS4 = g_5c110c;
            int32_t v_34_1 = valA1;
            bool cond_1_1;

            do
            {
                int32_t* valA3 = *(flagP * *srcS4 + g_5c1108);
                int32_t objC2 = valA3[0x3851];

                if (objC2 <= tmpD2)
                {
                    ctxB3 = valA3;
                    tmpD2 = objC2;
                }

                srcS4 = &srcS4[1];
                cond_1_1 = v_34_1 != 1;
                v_34_1 -= 1;
            } while (cond_1_1);
        }

        kind = QTask_FindType(ctxB3);
    }

    kind = g_5c1138;
    struct status_msg* valA6 = QTask_HandleInput(a1, kind, 0);
    int32_t objC3 = g_5c1110;
    int32_t* valA10 = *(g_5c110c + (objC3 << 2)) * g_5c1118 + g_5c1108;
    *(valA10 + g_5c111c) = objC3;
    g_5c1110 += 1;
    *(valA6 + 0xe134) = valA10;
    *valA10 = valA6;
    *(valA6 + 0xe130) = a1;
    struct status_msg* valA13 = Display_RestoreDevice_18(Level_StartMission_4(), valA6, a1 + 0x20, &v_28,
        &valA6->head[0x113b], 0, 0, 0, 1, nullptr, 0);
    *(valA6 + 0xe12c) = valA13;
    Display_CheckCapabilities_18(valA13, 2);
    *(valA6 + 0x44e0) = 0;
    *(valA6 + 0x44e4) = 0;
    *(valA6 + 0x44e8) = 1;
    Weapon_UpdateZoom_8(a1 + 0x20, &v_28, valA6, &valA6->head[8], dstD, 0, a2[2], a2[3]);
    valA15 = Timer_Now();
    *(valA6 + 0xe144) = valA15;
    return valA15;
}
