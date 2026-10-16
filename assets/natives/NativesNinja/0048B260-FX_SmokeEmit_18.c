#include "0048B260-FX_SmokeEmit_18.h"
/* 0x0048b260 FX_SmokeEmit_18 full linked: callers=4 callees=16 */
void* sub_48b260(void* a1, int32_t* a2, char a3, char a4)

{
    void* i;
    int32_t* edi;

    if (!a3)
    {
        edi = a2;
    label_48b301:
        int32_t* eax_7 = sub_452be0(*(a1 + 0x3b68), *edi);
        int32_t* esi_2 = eax_7;
        void* i_2;

        if (esi_2)
        {
            if (esi_2 == *(a1 + 0x3ea0))
            {
            label_48b50c:
                eax_7 = 1;
                return eax_7;
            }

            i = esi_2[4];

            if (i < esi_2[6] * esi_2[5])
            {
                if (!a4)
                {
                label_48b547:
                    int32_t eax_27 = g_5c8bb8 + 1;
                    g_5c8bb8 = eax_27;

                    if (eax_27 > 3)
                    {
                        g_5c8bb8 = 0;
                    label_48b671:
                        i = esi_2[5];
                        void* i_4 = nullptr;

                        if (i > 0)
                        {
                            do
                            {
                                int32_t eax_41 = esi_2[6];
                                i_2 = nullptr;

                                if (eax_41 > 0)
                                {
                                    bool cond:7_1;

                                    do
                                    {
                                        eax_7 = sub_48b780(a1, esi_2, edi, i_4, i_2);

                                        if (eax_7)
                                            goto label_48b50c;

                                        cond:7_1 = i_2 + 1 < esi_2[6];
                                        i_2 += 1;
                                    } while (cond:7_1);
                                }

                                i = i_4 + 1;
                                i_4 = i;
                            } while (i < esi_2[5]);
                        }
                    }
                    else
                        switch (eax_27)
                        {
                            case 0:
                            {
                                goto label_48b671;
                            }
                            case 1:
                            {
                                i = esi_2[6];
                                i_2 = nullptr;

                                if (i > 0)
                                {
                                    void* i_5;
                                    bool cond:8_1;

                                    do
                                    {
                                        int32_t eax_28 = esi_2[5];
                                        int32_t eax_29 = eax_28 - 1;
                                        int32_t var_70_4 = eax_29;

                                        if (eax_28 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                eax_7 = sub_48b780(a1, esi_2, edi, eax_29, i_2);

                                                if (eax_7)
                                                    goto label_48b50c;

                                                bool cond:11_1 = var_70_4 - 1 >= 0;
                                                var_70_4 -= 1;

                                                if (!cond:11_1)
                                                    break;

                                                eax_29 = var_70_4;
                                            }
                                        }

                                        i_5 = i_2 + 1;
                                        cond:8_1 = i_5 < esi_2[6];
                                        i_2 = i_5;
                                    } while (cond:8_1);
                                    i_5 = 0;
                                    return i_5;
                                }
                                break;
                            }
                            case 2:
                            {
                                i = esi_2[5];
                                int32_t i_3 = 0;

                                if (i > 0)
                                {
                                    int32_t i_1;

                                    do
                                    {
                                        int32_t eax_33 = esi_2[6];
                                        void* i_6 = eax_33 - 1;
                                        i_2 = i_6;

                                        if (eax_33 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                eax_7 = sub_48b780(a1, esi_2, edi, i_3, i_6);

                                                if (eax_7)
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
                                    } while (i_1 < esi_2[5]);

                                    i_1 = 0;
                                    return i_1;
                                }
                                break;
                            }
                            case 3:
                            {
                                int32_t eax_36 = esi_2[6];
                                i = eax_36 - 1;
                                i_2 = i;

                                if (eax_36 - 1 >= 0)
                                {
                                    void* i_9;
                                    void* i_8;

                                    do
                                    {
                                        int32_t eax_37 = esi_2[5];
                                        int32_t eax_38 = eax_37 - 1;
                                        int32_t var_70_5 = eax_38;

                                        if (eax_37 - 1 >= 0)
                                        {
                                            while (true)
                                            {
                                                eax_7 = sub_48b780(a1, esi_2, edi, eax_38, i_2);

                                                if (eax_7)
                                                    goto label_48b50c;

                                                bool cond:13_1 = var_70_5 - 1 >= 0;
                                                var_70_5 -= 1;

                                                if (!cond:13_1)
                                                    break;

                                                eax_38 = var_70_5;
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
                    i = sub_48b6e0(edi, a1);

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
                int32_t var_6c;
                sub_453040(&i_2, &var_6c, *(a1 + 0x3b6c), *edi);
                int32_t eax_11;
                int32_t edx_5;
                edx_5 = HIGHD(i_2);
                eax_11 = LOWD(i_2);
                int32_t eax_16;
                int32_t edx_6;
                edx_6 = HIGHD(var_6c);
                eax_16 = LOWD(var_6c);
                int32_t var_68 = -(((eax_16 - edx_6) >> 1));
                float var_30;
                sub_4f98a0(&var_30, edi, 1);
                double var_48;
                sub_4f9770(&var_48, edi);
                *(a1 + 0x3ec0) = 0;
                *(a1 + 0x3ec4) = 0;
                long double x87_r7_4 = -(((eax_11 - edx_5) >> 1)) * 8192f;
                *(a1 + 0x3eb0) = x87_r7_4;
                long double x87_r6_1 = var_68 * 8192f;
                var_68 = x87_r6_1;
                *(a1 + 0x3eb8) = x87_r6_1;
                long double x87_r6_3 = edi[9] * -4096f;
                x87_r7_4 - x87_r6_3;

                if (!(*(&((x87_r7_4 < x87_r6_3 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r7_4 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_5 = edi[9] * 4096f;
                    x87_r7_4 - x87_r6_5;

                    if (!(*(&((x87_r7_4 < x87_r6_5 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_4, x87_r6_5) ? 1 : 0) << 0xa
                            | (x87_r7_4 == x87_r6_5 ? 1 : 0) << 0xe) + 1) & 0x41))
                        *(a1 + 0x3eb0) = x87_r6_5;
                }
                else
                    *(a1 + 0x3eb0) = x87_r6_3;

                long double x87_r7_9 = edi[9] * -4096f;
                long double temp2 = var_68;
                x87_r7_9 - temp2;

                if (*(&((x87_r7_9 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp2) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r7_12 = edi[9] * 4096f;
                    long double temp3_1 = var_68;
                    x87_r7_12 - temp3_1;

                    if (*(&((x87_r7_12 < temp3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(a1 + 0x3eb8) = x87_r7_12;
                }
                else
                    *(a1 + 0x3eb8) = x87_r7_9;

                int32_t* eax_22 = *(a1 + 0x3ea0);
                float var_2c;
                double var_60 = var_2c * *(a1 + 0x3eb8) + var_30 * *(a1 + 0x3eb0);
                float var_24;
                float var_20;
                double var_58 = var_20 * *(a1 + 0x3eb8) + var_24 * *(a1 + 0x3eb0);
                float var_18;
                float var_14;
                double var_50 = var_14 * *(a1 + 0x3eb8) + var_18 * *(a1 + 0x3eb0);
                long double x87_r7_23 = var_48;
                memcpy(a1 + 0x3eb0, &var_60, 0x18);
                *(a1 + 0x3eb0) = x87_r7_23 + *(a1 + 0x3eb0);
                double var_40;
                *(a1 + 0x3eb8) = var_40 + *(a1 + 0x3eb8);
                double var_38;
                *(a1 + 0x3ec0) = var_38 + *(a1 + 0x3ec0);

                if (eax_22)
                {
                    sub_452c10(eax_22, *(a1 + 0x3ea4), *(a1 + 0x3ea8));
                    *(a1 + 0x3ea0) = 0;
                }

                int32_t* eax_24 = sub_452c60(*(a1 + 0x3b6c), *a2, 0, 0);
                *(a1 + 0x3ea0) = eax_24;
                *(a1 + 0x3ea4) = 0;
                *(a1 + 0x3ea8) = 0;
                eax_24 = 1;
                return eax_24;
            }

            i = sub_48b6e0(edi, a1);

            if (i)
                goto label_48b342;
        }
    }
    else
    {
        edi = a2;
        void* eax_2 = sub_5096c0(edi[0x4d], *edi, g_5c8bb4);
        void* eax_4 = sub_5096c0(edi[0x4d], *edi, g_5c8bac);
        i = sub_5096c0(edi[0x4d], g_5c8bac, g_5c8bb4);

        if (eax_2 && i && eax_4)
        {
            long double x87_r7_2 = *(eax_4 + 4) + *(eax_2 + 4);
            long double temp1_1 = *(i + 4);
            x87_r7_2 - temp1_1;
            i = (x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe;

            if (*(&i + 1) & 0x41)
                goto label_48b301;

            i = 0;
            return i;
        }
    }
    i = 0;
    return i;
}
