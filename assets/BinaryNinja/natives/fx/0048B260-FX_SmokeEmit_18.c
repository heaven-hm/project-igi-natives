// Original IGI.EXE function: FX_SmokeEmit_18 (VA 0x0048B260; static CFG gate PASS, CFG score 0.979).
#include "FX_SmokeEmit_18.h"
void* FX_SmokeEmit_18(void* context, int32_t* param_2, char param_3, char param_4)

{
    void* i;
    int32_t* dest_val;

    if (!param_3)
    {
        dest_val = param_2;
    label_48b301:
        int32_t* data_7 = AI_FireWeapon_4(*(context + 0x3b68), *dest_val);
        int32_t* source_2 = data_7;
        void* i_2;

        if (source_2)
        {
            if (source_2 == *(context + 0x3ea0))
            {
            label_48b50c:
                data_7 = 1;
                return data_7;
            }

            i = source_2[4];

            if (i < source_2[6] * source_2[5])
            {
                if (!param_4)
                {
                label_48b547:
                    int32_t data_27 = g_5c8bb8 + 1;
                    g_5c8bb8 = data_27;

                    if (data_27 > 3)
                    {
                        g_5c8bb8 = 0;
                    label_48b671:
                        i = source_2[5];
                        void* i_4 = nullptr;

                        if (i > 0)
                        {
                            do
                            {
                                int32_t data_41 = source_2[6];
                                i_2 = nullptr;

                                if (data_41 > 0)
                                {
                                    bool flag_7_1;

                                    do
                                    {
                                        data_7 = FX_TrailUpdate_18(context, source_2, dest_val, i_4, i_2);

                                        if (data_7)
                                            goto label_48b50c;

                                        flag_7_1 = i_2 + 1 < source_2[6];
                                        i_2 += 1;
                                    } while (flag_7_1);
                                }

                                i = i_4 + 1;
                                i_4 = i;
                            } while (i < source_2[5]);
                        }
                    }
                    else
                        switch (data_27)
                        {
                            case 0:
                            {
                                goto label_48b671;
                            }
                            case 1:
                            {
                                i = source_2[6];
                                i_2 = nullptr;

                                if (i > 0)
                                {
                                    void* i_5;
                                    bool flag_8_1;

                                    do
                                    {
                                        int32_t data_28 = source_2[5];
                                        int32_t data_29 = data_28 - 1;
                                        int32_t item_70_4 = data_29;

                                        if (data_28 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                data_7 = FX_TrailUpdate_18(context, source_2, dest_val, data_29, i_2);

                                                if (data_7)
                                                    goto label_48b50c;

                                                bool flag_11_1 = item_70_4 - 1 >= 0;
                                                item_70_4 -= 1;

                                                if (!flag_11_1)
                                                    break;

                                                data_29 = item_70_4;
                                            }
                                        }

                                        i_5 = i_2 + 1;
                                        flag_8_1 = i_5 < source_2[6];
                                        i_2 = i_5;
                                    } while (flag_8_1);
                                    i_5 = 0;
                                    return i_5;
                                }
                                break;
                            }
                            case 2:
                            {
                                i = source_2[5];
                                int32_t i_3 = 0;

                                if (i > 0)
                                {
                                    int32_t i_1;

                                    do
                                    {
                                        int32_t data_33 = source_2[6];
                                        void* i_6 = data_33 - 1;
                                        i_2 = i_6;

                                        if (data_33 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                data_7 = FX_TrailUpdate_18(context, source_2, dest_val, i_3, i_6);

                                                if (data_7)
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
                                    } while (i_1 < source_2[5]);

                                    i_1 = 0;
                                    return i_1;
                                }
                                break;
                            }
                            case 3:
                            {
                                int32_t data_36 = source_2[6];
                                i = data_36 - 1;
                                i_2 = i;

                                if (data_36 - 1 >= 0)
                                {
                                    void* i_9;
                                    void* i_8;

                                    do
                                    {
                                        int32_t data_37 = source_2[5];
                                        int32_t data_38 = data_37 - 1;
                                        int32_t item_70_5 = data_38;

                                        if (data_37 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                data_7 = FX_TrailUpdate_18(context, source_2, dest_val, data_38, i_2);

                                                if (data_7)
                                                    goto label_48b50c;

                                                bool flag_13_1 = item_70_5 - 1 >= 0;
                                                item_70_5 -= 1;

                                                if (!flag_13_1)
                                                    break;

                                                data_38 = item_70_5;
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
                    i = FX_DebrisSpawn_18(dest_val, context);

                    if (i)
                        goto label_48b547;
                }
            }
        }
        else
        {
            if (!param_4)
            {
            label_48b342:
                int32_t item_6c;
                AI_AlertAllies_4(&i_2, &item_6c, *(context + 0x3b6c), *dest_val);
                int32_t data_11;
                int32_t temp_5;
                temp_5 = HIGHD(i_2);
                data_11 = LOWD(i_2);
                int32_t data_16;
                int32_t temp_6;
                temp_6 = HIGHD(item_6c);
                data_16 = LOWD(item_6c);
                int32_t item_68 = -(((data_16 - temp_6) >> 1));
                float item_30;
                Script_EvaluateCondition_23(&item_30, dest_val, 1);
                double item_48;
                Script_CallNativeHandler_23(&item_48, dest_val);
                *(context + 0x3ec0) = 0;
                *(context + 0x3ec4) = 0;
                long double fpu_val_7_4 = -(((data_11 - temp_5) >> 1)) * 8192.0f;
                *(context + 0x3eb0) = fpu_val_7_4;
                long double fpu_val_6_1 = item_68 * 8192.0f;
                item_68 = fpu_val_6_1;
                *(context + 0x3eb8) = fpu_val_6_1;
                long double fpu_val_6_3 = dest_val[9] * -4096.0f;
                fpu_val_7_4 - fpu_val_6_3;

                if (!(*(&((fpu_val_7_4 < fpu_val_6_3 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, fpu_val_6_3) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == fpu_val_6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double fpu_val_6_5 = dest_val[9] * 4096.0f;
                    fpu_val_7_4 - fpu_val_6_5;

                    if (!(*(&((fpu_val_7_4 < fpu_val_6_5 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_4, fpu_val_6_5) ? 1 : 0) << 0xa
                            | (fpu_val_7_4 == fpu_val_6_5 ? 1 : 0) << 0xe) + 1) & 0x41))
                        *(context + 0x3eb0) = fpu_val_6_5;
                }
                else
                    *(context + 0x3eb0) = fpu_val_6_3;

                long double fpu_val_7_9 = dest_val[9] * -4096.0f;
                long double f2 = item_68;
                fpu_val_7_9 - f2;

                if (*(&((fpu_val_7_9 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f2) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double fpu_val_7_12 = dest_val[9] * 4096.0f;
                    long double f3_1 = item_68;
                    fpu_val_7_12 - f3_1;

                    if (*(&((fpu_val_7_12 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_12, f3_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_12 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(context + 0x3eb8) = fpu_val_7_12;
                }
                else
                    *(context + 0x3eb8) = fpu_val_7_9;

                int32_t* data_22 = *(context + 0x3ea0);
                float item_2c;
                double item_60 = item_2c * *(context + 0x3eb8) + item_30 * *(context + 0x3eb0);
                float item_24;
                float item_20;
                double item_58 = item_20 * *(context + 0x3eb8) + item_24 * *(context + 0x3eb0);
                float item_18;
                float item_14;
                double item_50 = item_14 * *(context + 0x3eb8) + item_18 * *(context + 0x3eb0);
                long double fpu_val_7_23 = item_48;
                memcpy(context + 0x3eb0, &item_60, 0x18);
                *(context + 0x3eb0) = fpu_val_7_23 + *(context + 0x3eb0);
                double item_40;
                *(context + 0x3eb8) = item_40 + *(context + 0x3eb8);
                double item_38;
                *(context + 0x3ec0) = item_38 + *(context + 0x3ec0);

                if (data_22)
                {
                    AI_MoveToNode_4(data_22, *(context + 0x3ea4), *(context + 0x3ea8));
                    *(context + 0x3ea0) = 0;
                }

                int32_t* data_24 = AI_TakeCover_4(*(context + 0x3b6c), *param_2, 0, 0);
                *(context + 0x3ea0) = data_24;
                *(context + 0x3ea4) = 0;
                *(context + 0x3ea8) = 0;
                data_24 = 1;
                return data_24;
            }

            i = FX_DebrisSpawn_18(dest_val, context);

            if (i)
                goto label_48b342;
        }
    }
    else
    {
        dest_val = param_2;
        void* data_2 = Physics_CheckHullCollision_8(dest_val[0x4d], *dest_val, g_5c8bb4);
        void* data_4 = Physics_CheckHullCollision_8(dest_val[0x4d], *dest_val, g_5c8bac);
        i = Physics_CheckHullCollision_8(dest_val[0x4d], g_5c8bac, g_5c8bb4);

        if (data_2 && i && data_4)
        {
            long double fpu_val_7_2 = *(data_4 + 4) + *(data_2 + 4);
            long double f1_1 = *(i + 4);
            fpu_val_7_2 - f1_1;
            i = (fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe;

            if (*(&i + 1) & 0x41)
                goto label_48b301;

            i = 0;
            return i;
        }
    }
    i = 0;
    return i;
}
