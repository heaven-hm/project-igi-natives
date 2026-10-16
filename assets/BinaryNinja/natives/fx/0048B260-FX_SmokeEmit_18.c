#include "FX_SmokeEmit_18.h"
void* FX_SmokeEmit_18(void* a1, int32_t* a2, char a3, char a4)

{
    void* i;
    int32_t* dstD;

    if (!a3)
    {
        dstD = a2;
    label_48b301:
        int32_t* valA7 = AI_FireWeapon_4(*(a1 + 0x3b68), *dstD);
        int32_t* srcS2 = valA7;
        void* i_2;

        if (srcS2)
        {
            if (srcS2 == *(a1 + 0x3ea0))
            {
            label_48b50c:
                valA7 = 1;
                return valA7;
            }

            i = srcS2[4];

            if (i < srcS2[6] * srcS2[5])
            {
                if (!a4)
                {
                label_48b547:
                    int32_t valA27 = g_5c8bb8 + 1;
                    g_5c8bb8 = valA27;

                    if (valA27 > 3)
                    {
                        g_5c8bb8 = 0;
                    label_48b671:
                        i = srcS2[5];
                        void* i_4 = nullptr;

                        if (i > 0)
                        {
                            do
                            {
                                int32_t valA41 = srcS2[6];
                                i_2 = nullptr;

                                if (valA41 > 0)
                                {
                                    bool cond_7_1;

                                    do
                                    {
                                        valA7 = FX_TrailUpdate_18(a1, srcS2, dstD, i_4, i_2);

                                        if (valA7)
                                            goto label_48b50c;

                                        cond_7_1 = i_2 + 1 < srcS2[6];
                                        i_2 += 1;
                                    } while (cond_7_1);
                                }

                                i = i_4 + 1;
                                i_4 = i;
                            } while (i < srcS2[5]);
                        }
                    }
                    else
                        switch (valA27)
                        {
                            case 0:
                            {
                                goto label_48b671;
                            }
                            case 1:
                            {
                                i = srcS2[6];
                                i_2 = nullptr;

                                if (i > 0)
                                {
                                    void* i_5;
                                    bool cond_8_1;

                                    do
                                    {
                                        int32_t valA28 = srcS2[5];
                                        int32_t valA29 = valA28 - 1;
                                        int32_t v_70_4 = valA29;

                                        if (valA28 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                valA7 = FX_TrailUpdate_18(a1, srcS2, dstD, valA29, i_2);

                                                if (valA7)
                                                    goto label_48b50c;

                                                bool cond_11_1 = v_70_4 - 1 >= 0;
                                                v_70_4 -= 1;

                                                if (!cond_11_1)
                                                    break;

                                                valA29 = v_70_4;
                                            }
                                        }

                                        i_5 = i_2 + 1;
                                        cond_8_1 = i_5 < srcS2[6];
                                        i_2 = i_5;
                                    } while (cond_8_1);
                                    i_5 = 0;
                                    return i_5;
                                }
                                break;
                            }
                            case 2:
                            {
                                i = srcS2[5];
                                int32_t i_3 = 0;

                                if (i > 0)
                                {
                                    int32_t i_1;

                                    do
                                    {
                                        int32_t valA33 = srcS2[6];
                                        void* i_6 = valA33 - 1;
                                        i_2 = i_6;

                                        if (valA33 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                valA7 = FX_TrailUpdate_18(a1, srcS2, dstD, i_3, i_6);

                                                if (valA7)
                                                    goto label_48b50c;

                                                void* i_7 = i_2;
                                                i_2 = i_7 - 1;

                                                if (i_7 - 1 < 0)
                                                    break;

                                                i_6 = i_2;
                                            }
                                        }

                                        i_1 = i_3 + 1;
                                        i_3 = i_1;
                                    } while (i_1 < srcS2[5]);

                                    i_1 = 0;
                                    return i_1;
                                }
                                break;
                            }
                            case 3:
                            {
                                int32_t valA36 = srcS2[6];
                                i = valA36 - 1;
                                i_2 = i;

                                if (valA36 - 1 >= 0)
                                {
                                    void* i_9;
                                    void* i_8;

                                    do
                                    {
                                        int32_t valA37 = srcS2[5];
                                        int32_t valA38 = valA37 - 1;
                                        int32_t v_70_5 = valA38;

                                        if (valA37 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                valA7 = FX_TrailUpdate_18(a1, srcS2, dstD, valA38, i_2);

                                                if (valA7)
                                                    goto label_48b50c;

                                                bool cond_13_1 = v_70_5 - 1 >= 0;
                                                v_70_5 -= 1;

                                                if (!cond_13_1)
                                                    break;

                                                valA38 = v_70_5;
                                            }
                                        }

                                        i_8 = i_2;
                                        i_9 = i_8 - 1;
                                        i_2 = i_9;
                                    } while (i_8 - 1 >= 0);
                                    i_9 = 0;
                                    return i_9;
                                }
                                break;
                            }
                        }
                }
                else
                {
                    i = FX_DebrisSpawn_18(dstD, a1);

                    if (i)
                        goto label_48b547;
                }
            }
        }
        else
        {
            if (!a4)
            {
            label_48b342:
                int32_t v_6c;
                AI_AlertAllies_4(&i_2, &v_6c, *(a1 + 0x3b6c), *dstD);
                int32_t valA11;
                int32_t tmpD5;
                tmpD5 = HIGHD(i_2);
                valA11 = LOWD(i_2);
                int32_t valA16;
                int32_t tmpD6;
                tmpD6 = HIGHD(v_6c);
                valA16 = LOWD(v_6c);
                int32_t v_68 = -(((valA16 - tmpD6) >> 1));
                float v_30;
                Script_EvaluateCondition_23(&v_30, dstD, 1);
                double v_48;
                Script_CallNativeHandler_23(&v_48, dstD);
                *(a1 + 0x3ec0) = 0;
                *(a1 + 0x3ec4) = 0;
                long double x87_r7_4 = -(((valA11 - tmpD5) >> 1)) * 8192f;
                *(a1 + 0x3eb0) = x87_r7_4;
                long double x87_r6_1 = v_68 * 8192f;
                v_68 = x87_r6_1;
                *(a1 + 0x3eb8) = x87_r6_1;
                long double x87_r6_3 = dstD[9] * -4096f;
                x87_r7_4 - x87_r6_3;

                if (!(*(&((x87_r7_4 < x87_r6_3 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r7_4 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_5 = dstD[9] * 4096f;
                    x87_r7_4 - x87_r6_5;

                    if (!(*(&((x87_r7_4 < x87_r6_5 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_4, x87_r6_5) ? 1 : 0) << 0xa
                            | (x87_r7_4 == x87_r6_5 ? 1 : 0) << 0xe) + 1) & 0x41))
                        *(a1 + 0x3eb0) = x87_r6_5;
                }
                else
                    *(a1 + 0x3eb0) = x87_r6_3;

                long double x87_r7_9 = dstD[9] * -4096f;
                long double f2 = v_68;
                x87_r7_9 - f2;

                if (*(&((x87_r7_9 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f2) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r7_12 = dstD[9] * 4096f;
                    long double f3_1 = v_68;
                    x87_r7_12 - f3_1;

                    if (*(&((x87_r7_12 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, f3_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(a1 + 0x3eb8) = x87_r7_12;
                }
                else
                    *(a1 + 0x3eb8) = x87_r7_9;

                int32_t* valA22 = *(a1 + 0x3ea0);
                float v_2c;
                double v_60 = v_2c * *(a1 + 0x3eb8) + v_30 * *(a1 + 0x3eb0);
                float v_24;
                float v_20;
                double v_58 = v_20 * *(a1 + 0x3eb8) + v_24 * *(a1 + 0x3eb0);
                float v_18;
                float v_14;
                double v_50 = v_14 * *(a1 + 0x3eb8) + v_18 * *(a1 + 0x3eb0);
                long double x87_r7_23 = v_48;
                memcpy(a1 + 0x3eb0, &v_60, 0x18);
                *(a1 + 0x3eb0) = x87_r7_23 + *(a1 + 0x3eb0);
                double v_40;
                *(a1 + 0x3eb8) = v_40 + *(a1 + 0x3eb8);
                double v_38;
                *(a1 + 0x3ec0) = v_38 + *(a1 + 0x3ec0);

                if (valA22)
                {
                    AI_MoveToNode_4(valA22, *(a1 + 0x3ea4), *(a1 + 0x3ea8));
                    *(a1 + 0x3ea0) = 0;
                }

                int32_t* valA24 = AI_TakeCover_4(*(a1 + 0x3b6c), *a2, 0, 0);
                *(a1 + 0x3ea0) = valA24;
                *(a1 + 0x3ea4) = 0;
                *(a1 + 0x3ea8) = 0;
                valA24 = 1;
                return valA24;
            }

            i = FX_DebrisSpawn_18(dstD, a1);

            if (i)
                goto label_48b342;
        }
    }
    else
    {
        dstD = a2;
        void* valA2 = Physics_CheckHullCollision_8(dstD[0x4d], *dstD, g_5c8bb4);
        void* valA4 = Physics_CheckHullCollision_8(dstD[0x4d], *dstD, g_5c8bac);
        i = Physics_CheckHullCollision_8(dstD[0x4d], g_5c8bac, g_5c8bb4);

        if (valA2 && i && valA4)
        {
            long double x87_r7_2 = *(valA4 + 4) + *(valA2 + 4);
            long double f1_1 = *(i + 4);
            x87_r7_2 - f1_1;
            i = (x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe;

            if (*(&i + 1) & 0x41)
                goto label_48b301;

            i = 0;
            return i;
        }
    }
    i = 0;
    return i;
}
