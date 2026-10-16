#include "004518E0-AI_ExpandRoute.h"
/* 0x004518e0 AI_ExpandRoute full linked: callers=1 callees=64 */
int32_t* sub_4518e0(void* a1, int32_t a2, double* a3, char a4)

{
label_4518f2:
    int32_t edi_2 = a2;
    void* esi_1 = *(a1 + 0x3b6c);
    int32_t var_12c_1 = 0xffffffff;
    int32_t i_1;
    int16_t top;

    if (*(a1 + 0x3e30) != edi_2)
    {
        if (a4)
        {
            int32_t* ecx_1 = *(a1 + 0x3ea0);

            if (ecx_1)
            {
                int32_t eax_3 = *(a1 + 0x3ea4);
                sub_452c10(ecx_1, eax_3, eax_3);
                *(a1 + 0x3ea0) = 0;
            }

            int32_t* eax_6;

            if (!a3)
            {
                double var_20[0x3];
                sub_4f9770(&var_20, sub_4f9720(*(a1 + 0x3b6c), edi_2));
                eax_6 =
                    sub_452d20(a1 + 0x3ea4, a1 + 0x3ea8, a1 + 0x3eb0, esi_1, edi_2, &var_20);
            }
            else
                eax_6 = sub_452d20(a1 + 0x3ea4, a1 + 0x3ea8, a1 + 0x3eb0, esi_1, edi_2, a3);

            *(a1 + 0x3ea0) = eax_6;
        }

        int32_t eax_10 = *(a1 + 0x3e2c);
        int32_t* var_128;
        double var_118;

        if (eax_10 != 0xffffffff)
        {
            void* eax_12 = sub_4f9720(*(a1 + 0x3b6c), eax_10);

            if (eax_12)
            {
                int32_t var_140_5 = 0x3fd33333;

                if (!sub_4f9a40(sub_4c3440(*(a1 + 0x14)), eax_12, 4.17232506e-08f, 0))
                {
                    double var_68[0x3];
                    sub_4f9770(&var_68, eax_12);
                    long double st0_1 = sub_4b32b0(&var_68, sub_4c3440(*(a1 + 0x14)));
                    int32_t* i_2 = *(a1 + 0xe0);
                    var_118 = st0_1;
                    top = 0;
                    int32_t* i = *i_2;
                    var_12c_1 = *(a1 + 0x3e2c);

                    for (; i; i = *i)
                    {
                        if (i_2[9] != var_12c_1)
                        {
                            int32_t esi_4 = i_2[9];

                            if (esi_4 != 0xffffffff)
                            {
                                int32_t* eax_18 = sub_4f9720(*(a1 + 0x3b6c), esi_4);
                                var_128 = eax_18;

                                if (eax_18)
                                {
                                    int32_t var_140_8 = 0x3fd33333;

                                    if (sub_4f9a40(sub_4c3440(*(a1 + 0x14)), eax_18,
                                            4.17232506e-08f, 0))
                                        var_12c_1 = esi_4;
                                    else if (esi_4 != edi_2)
                                    {
                                        void* eax_25 = sub_5096c0(*(a1 + 0x3b6c), esi_4, edi_2);

                                        if (eax_25)
                                        {
                                            long double x87_r7_3 = *(eax_25 + 4);
                                            long double temp4_1 = var_118;
                                            x87_r7_3 - temp4_1;
                                            top = 0;

                                            if (*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                var_12c_1 = esi_4;
                                        }
                                        else
                                        {
                                            int32_t var_13c_9 = edi_2;
                                            int32_t var_140_11 = esi_4;
                                            int32_t var_144_7 = edi_2;
                                            int32_t var_148_7 = var_12c_1;
                                            Warning_Show("ERROR IN ROUTENET: %d to %d or %d to %d");
                                        }
                                    }
                                    else
                                    {
                                        sub_4f9770(&var_68, var_128);
                                        long double st0_2 =
                                            sub_4b32b0(&var_68, sub_4c3440(*(a1 + 0x14)));
                                        long double temp3_1 = var_118;
                                        st0_2 - temp3_1;
                                        top = 0;

                                        if (*(&((st0_2 < temp3_1 ? 1 : 0) << 8
                                                | (FCMP_UO(st0_2, temp3_1) ? 1 : 0) << 0xa
                                                | (st0_2 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            var_12c_1 = esi_4;
                                    }
                                }
                            }

                            break;
                        }

                        i_2 = i;
                    }
                }
            }
        }

        sub_44ff40(a1);
        *(a1 + 0x3e30) = edi_2;
        int32_t esi_5;

        if (var_12c_1 != 0xffffffff)
        {
            int32_t* eax_28 = sub_452080(a1);
            int32_t* eax_30 = sub_4f9720(*(a1 + 0x3b6c), var_12c_1);
            var_128 = eax_30;

            if (eax_28)
            {
                double var_98;
                sub_4f9770(&var_98, eax_30);
                int32_t eax_31 = sub_4c3440(*(a1 + 0x14));
                long double x87_r7_4 = var_98;
                int32_t* edx_8 = var_128;
                double var_38;
                memcpy(&var_38, eax_31, 0x18);
                double var_c8 = x87_r7_4 - var_38;
                double var_90;
                double var_30;
                double var_c0_1 = var_90 - var_30;
                top = 0;
                int32_t var_b8_1 = 0;
                int32_t var_b4_1 = 0;
                sub_4520c0(&eax_28[2], edx_8, &var_98, &var_c8, 0);
                esi_5 = var_12c_1;
                eax_28[8] = 0;
                eax_28[9] = esi_5;
                edi_2 = a2;
                goto label_451c18;
            }
        }
        else
        {
            esi_5 = *(a1 + 0x3e2c);
        label_451c18:

            if (esi_5 != edi_2)
            {
                while (true)
                {
                    int32_t* eax_38 = sub_5096c0(esi_1, esi_5, edi_2);

                    if (!eax_38)
                    {
                        int32_t var_13c_27 = edi_2;
                        int32_t var_140_26 = esi_5;
                        int32_t var_144_17 = *(a1 + 0x3b68);
                        int32_t eax_71 =
                            Warning_Show("Error in graph %d routenet, Node #%d to #%d");
                        eax_71 = 0;
                        return eax_71;
                    }

                    void* eax_39 = sub_4f9720(esi_1, esi_5);
                    var_118 = eax_39;
                    void* eax_41 = sub_4f9720(esi_1, *eax_38);

                    if (!eax_41)
                    {
                        int32_t var_13c_28 = *eax_38;
                        int32_t var_140_27 = *(a1 + 0x3b68);
                        int32_t eax_73 =
                            Warning_Show("Error in graph %d nodenet, Node #%d not found");
                        eax_73 = 0;
                        return eax_73;
                    }

                    if (*eax_38 != a2)
                    {
                        double var_e0;
                        sub_4f9770(&var_e0, eax_39);
                        double var_b0;
                        sub_4f9770(&var_b0, eax_41);
                        bool cond:2_1 = esi_5 != *(a1 + 0x3e2c);
                        double var_f8 = var_b0 - var_e0;
                        double var_d8;
                        double var_a8;
                        double var_f0_1 = var_a8 - var_d8;
                        double var_d0;
                        double var_a0;
                        double var_e8_1 = var_a0 - var_d0;
                        top = 0;

                        if (cond:2_1)
                        {
                            int32_t* eax_61 = sub_452080(a1);
                            var_128 = eax_61;

                            if (!eax_61)
                                break;

                            sub_4520c0(&eax_61[2], eax_39, &var_e0, &var_f8, 1);
                            int32_t* eax_63 = var_128;
                            eax_63[8] = 0;
                            eax_63[9] = esi_5;
                            int32_t eax_64 = sub_509860();

                            if (*(eax_39 + 0x30) & eax_64)
                            {
                                int32_t eax_65 = sub_509860();

                                if (*(eax_41 + 0x30) & eax_65)
                                    var_128[8] = 1;
                            }
                        }
                        else
                        {
                            int32_t var_140_22 = 0x3fd33333;

                            if (sub_4f9a40(a1 + 0x20, eax_39, 4.17232506e-08f, 0))
                            {
                                int32_t* eax_56 = sub_452080(a1);
                                var_128 = eax_56;

                                if (!eax_56)
                                    break;

                                sub_4520c0(&eax_56[2], eax_39, &var_e0, &var_f8, 1);
                                int32_t* eax_58 = var_128;
                                eax_58[8] = 0;
                                eax_58[9] = esi_5;
                                int32_t eax_59 = sub_509860();

                                if (*(eax_39 + 0x30) & eax_59)
                                {
                                    int32_t eax_60 = sub_509860();

                                    if (*(eax_41 + 0x30) & eax_60)
                                        var_128[8] = 1;
                                }
                            }
                        }

                        int32_t* eax_66 = sub_452080(a1);

                        if (!eax_66)
                            break;

                        sub_4520c0(&eax_66[2], eax_41, &var_b0, &var_f8, 0);
                        eax_66[8] = 0;
                        eax_66[9] = *eax_38;
                    }
                    else
                    {
                        bool var_121_1 = false;
                        double var_110;
                        sub_4f9770(&var_110, eax_41);
                        double var_100;

                        if (a3)
                        {
                            int32_t* eax_43 = sub_452080(a1);

                            if (!eax_43)
                                break;

                            double var_50;
                            sub_4f9770(&var_50, eax_39);
                            double var_80 = var_110 - var_50;
                            double var_108;
                            double var_48;
                            double var_78_1 = var_108 - var_48;
                            double var_40;
                            double var_70_1 = var_100 - var_40;
                            top = 0;
                            sub_4520c0(&eax_43[2], eax_41, &var_110, &var_80, 0);
                            int32_t eax_44 = sub_509860();
                            int32_t eax_45;

                            if (*(eax_39 + 0x30) & eax_44)
                                eax_45 = sub_509860();

                            if (!(*(eax_39 + 0x30) & eax_44) || !(*(eax_41 + 0x30) & eax_45))
                                eax_43[8] = 0;
                            else
                                eax_43[8] = 1;

                            int32_t var_140_20 = 0x3fd33333;
                            eax_43[9] = *eax_38;
                            var_121_1 = sub_4f9a40(a3, eax_41, 4.17232506e-08f, 0);
                        }

                        int32_t* eax_48 = sub_452080(a1);
                        var_128 = eax_48;

                        if (!eax_48)
                            break;

                        eax_48[8] = 0;

                        if (!var_121_1)
                        {
                            memcpy(&eax_48[2], &var_110, 0x18);
                            int32_t eax_49 = sub_509860();

                            if (*(var_118 + 0x30) & eax_49)
                            {
                                int32_t eax_50 = sub_509860();

                                if (*(eax_41 + 0x30) & eax_50)
                                    var_128[8] = 1;
                            }

                            var_128[9] = *eax_38;
                        }
                        else
                        {
                            memcpy(&eax_48[2], a3, 0x18);
                            eax_48[6] = var_100;
                            eax_48[7] = *(&var_100 + 4);
                            eax_48[9] = *eax_38;
                        }
                    }

                    esi_5 = *eax_38;

                    if (esi_5 == a2)
                        goto label_4518f2;

                    edi_2 = a2;
                }
            }
            else if (!a3)
            {
                int32_t* eax_35 = sub_452080(a1);
                void* eax_36 = sub_4f9720(*(a1 + 0x3b6c), edi_2);

                if (eax_35)
                {
                    sub_4f9770(&eax_35[2], eax_36);
                    eax_35[8] = 0;
                    eax_35[9] = edi_2;
                    goto label_4518f2;
                }
            }
            else
            {
                int32_t* eax_34 = sub_452080(a1);

                if (eax_34)
                {
                    memcpy(&eax_34[2], a3, 0x18);
                    eax_34[8] = 0;
                    eax_34[9] = a2;
                    goto label_4518f2;
                }
            }
        }
        i_1 = Warning_Show("Not enough items in movement queue");
    label_45206c:
        i_1 = 0;
        return i_1;
    }

🚫🚫    while (true)
    {
        i_1 = sub_451540(a1);
        top += 2;

        while (i_1)
        {
            if (i_1 == 1)
                goto label_45206c;

            if (i_1 == 2)
            {
                int32_t* eax_70 = sub_44ff40(a1);
                *(a1 + 0x3e30) = 0xffffffff;
                eax_70 = 1;
                return eax_70;
            }
        }
    }
}
