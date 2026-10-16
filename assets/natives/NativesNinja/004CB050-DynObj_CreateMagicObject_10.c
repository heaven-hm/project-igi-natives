#include "004CB050-DynObj_CreateMagicObject_10.h"
/* 0x004cb050 DynObj_CreateMagicObject_10 full linked: callers=3 callees=5 */
int32_t sub_4cb050(void* a1, int32_t* a2, double* a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)

{
    int32_t var_2ec = *a2;
    int32_t var_2fc = a2[1];
    int32_t ecx_1 = *(a2[7] + 0xc);
    void* edi = a2[6];
    void* var_308 = a2[8];
    int32_t i = a6;
    *(a1 + 0x58) = 0;
    float var_2e8 = *a3;
    int32_t var_2e4 = a3[1];
    int32_t esi = a3[2];
    int32_t var_2e0 = esi;
    long double x87_r7_3 = *a3;
    long double temp1 = 0.0;
    x87_r7_3 - temp1;

    if (*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_4 = var_2e8;
        long double temp3_1 = *a3;
        x87_r7_4 - temp3_1;

        if (!(*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            var_2e8 -= 1;
    }

    long double x87_r7_5 = a3[1];
    long double temp2 = 0.0;
    x87_r7_5 - temp2;

    if (*(&((x87_r7_5 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp2) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp2 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_6 = var_2e4;
        long double temp5_1 = a3[1];
        x87_r7_6 - temp5_1;

        if (!(*(&((x87_r7_6 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            var_2e4 -= 1;
    }

    long double x87_r7_7 = a3[2];
    long double temp4 = 0.0;
    x87_r7_7 - temp4;

    if (*(&((x87_r7_7 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp4) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp4 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_8 = var_2e0;
        long double temp6_1 = a3[2];
        x87_r7_8 - temp6_1;

        if (!(*(&((x87_r7_8 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            esi -= 1;
    }

    int32_t ecx_4;

    if (!a4)
    {
        int32_t var_2f8_1 = esi + 0x4001;
        ecx_4 = esi + 0x4001;
    }
    else
        ecx_4 = esi - 0x4001;

    void* eax_7 = a2[7];
    int32_t var_100[0x20];
    var_100[i] = edi;
    int32_t ebx = *(eax_7 + 0xde0);
    int32_t esi_2 = *(eax_7 + 0xde4);
    int32_t eax_8 = *(eax_7 + 0xde8);
    int32_t ebx_1 = ebx + var_2e8;
    int32_t eax_11 = var_2e4 + esi_2;
    int32_t ecx_5 = ecx_4 + eax_8;
    int32_t ecx_6 = ecx_5 ^ 0x40000000;
    int32_t ecx_7 = 0;
    ecx_7 = a2[2];
    int32_t var_304 = a2[5];
    int32_t eax_12 = eax_11 ^ 0x40000000;
    int32_t esi_5 = ecx_7;
    char ecx_8 = var_2fc;
    int32_t ebx_2 = ebx_1 ^ 0x40000000;
    int32_t var_180[0x20];
    var_180[i] = esi_5;
    int32_t ebx_6 = *(((((eax_12 >> (ecx_8 & 0x1f) & 1) << 1 | (ebx_2 >> (ecx_8 & 0x1f) & 1))
        + (esi_5 << 3)) << 2) + &g_548060) | (ecx_6 >> (ecx_8 & 0x1f) & 1) << 2;
    int32_t var_280[0x20];
    var_280[i] = (ebx_6 >> 2 & 1) ^ a4;
    int32_t var_200[0x20];
    var_200[i] = var_304;
    int32_t var_80[0x20];
    var_80[i] = var_308;
    sub_4c5830();
    void* var_300;

    if (g_b97d20 && var_308 && *(var_308 + 0x38) & 0x80)
    {
        void* eax_24 = *(var_308 + 0x2c);
        var_300 = eax_24;

        while (true)
        {
            if (*(eax_24 + 0x5c) & 0x80)
            {
                int32_t ecx_14 = 0;
                ecx_14 = *(eax_24 + 0x1c);
                (*((ecx_14 << 2) + &g_a9c4e0))(eax_24, *(eax_24 + 0x48));
                eax_24 = var_300;
            }

            void* eax_23 = *(eax_24 + 0x58);
            var_300 = eax_23;

            if (!eax_23)
                break;

            eax_24 = var_300;
        }
    }

    if (1 << (ebx_6 & 0x1f) & *(edi + 0x18))
    {
        void* eax_26 = var_308;
        int32_t edx_5 = var_2fc - 1;
        int32_t var_2f4_1 = edx_5;

        while (i < 0x10)
        {
            if (g_b97d20 && eax_26)
            {
                void* eax_36 = *(var_308 + (((ecx_5 >> ((edx_5 - 1) & 0x1f) & 4)
                    | (eax_11 >> (edx_5 & 0x1f) & 2) | (ebx_1 >> (var_2fc & 0x1f) & 1)) << 2) + 0xc);
                var_308 = eax_36;

                if (eax_36 && *(eax_36 + 0x38) & 0x80)
                {
                    void* eax_38 = *(eax_36 + 0x2c);
                    var_300 = eax_38;

                    while (true)
                    {
                        if (*(eax_38 + 0x5c) & 0x80)
                        {
                            int32_t ecx_22 = 0;
                            ecx_22 = *(eax_38 + 0x1c);
                            (*((ecx_22 << 2) + &g_a9c4e0))(eax_38, *(eax_38 + 0x48));
                            eax_38 = var_300;
                        }

                        void* eax_39 = *(eax_38 + 0x58);
                        var_300 = eax_39;

                        if (!eax_39)
                            break;

                        eax_38 = var_300;
                    }
                }
            }

            i += 1;
            int32_t eax_41 = var_2ec >> 1;
            var_2fc -= 1;
            var_2ec = eax_41;
            var_2f4_1 -= 1;
            int32_t ecx_26;

            ecx_26 = !(ebx_6 & 4) ? var_304 - eax_41 : var_304 + eax_41;

            int32_t eax_42 = 0;
            eax_42 = *(ebx_6 + edi + 0x10);
            var_304 = ecx_26;
            int32_t eax_44;
            int32_t ecx_29;

            if (esi_5 >= 4)
            {
                ecx_29 = (esi_5 - (eax_42 & 3)) & 3;
                eax_44 = (eax_42 ^ esi_5) & 4;
            }
            else
            {
                ecx_29 = (eax_42 ^ esi_5) & 4;
                eax_44 = (eax_42 + esi_5) & 3;
            }

            int32_t edx_15 = 0;
            esi_5 = ecx_29 + eax_44;
            edx_15 = *(edi + (ebx_6 << 1));
            char ecx_33 = var_2fc;
            var_180[i] = esi_5;
            edi = (edx_15 << 5) + ecx_1;
            var_100[i] = edi;
            var_200[i] = var_304;
            ebx_6 = *(((((eax_12 >> (ecx_33 & 0x1f) & 1) << 1 | (ebx_2 >> (ecx_33 & 0x1f) & 1))
                + (esi_5 << 3)) << 2) + &g_548060) | (ecx_6 >> (ecx_33 & 0x1f) & 1) << 2;
            char ecx_36 = *(edi + 0x18);
            var_280[i] = (ebx_6 >> 2 & 1) ^ a4;
            eax_26 = var_308;
            var_80[i] = eax_26;

            if (!(1 << (ebx_6 & 0x1f) & ecx_36))
                break;

            edx_5 = var_2f4_1;
        }
    }

    int32_t var_2f8_3 = var_2fc - 1;

    while (true)
    {
        if (i == 0x10)
        {
            double var_298 = (ebx_1 & 0xffff8000) - ebx + var_2ec;
            double var_290_1 = (eax_11 & 0xffff8000) - esi_2 + var_2ec;
            double var_288_1 = var_304 - eax_8;
            int32_t var_2b0;

            if (sub_4ca010(*(edi + 0x1c), &var_298, a3, &var_2b0, i, &var_300, esi_5, a4,
                &var_2e8))
            {
                double var_2a0;
                long double x87_r7_13 = a3[2] - var_2a0;
                long double temp7_1 = 0.0;
                x87_r7_13 - temp7_1;

                if (*(&((x87_r7_13 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_13 = -(x87_r7_13);

                long double x87_r6_1 = a5;
                x87_r7_13 - x87_r6_1;

                if (!(*(&((x87_r7_13 < x87_r6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, x87_r6_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == x87_r6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    break;

                void* edi_8 = var_300 ^ 1;
                *(a1 + 0x38) = var_2e8;
                *(a1 + 0x3c) = var_2e4;
                *(a1 + 8) = var_2b0;
                *(a1 + 0x40) = var_2e0;
                int32_t var_2a8;
                *(a1 + 0x10) = var_2a8;
                int32_t var_2ac;
                *(a1 + 0xc) = var_2ac;
                int32_t var_2a4;
                *(a1 + 0x14) = var_2a4;
                *(a1 + 0x18) = var_2a0;
                *(a1 + 0x1c) = *(&var_2a0 + 4);
                long double x87_r7_16 = a3[2] - var_2a0;
                long double temp8 = 0.0;
                x87_r7_16 - temp8;

                if (*(&((x87_r7_16 < temp8 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, temp8) ? 1 : 0) << 0xa
                        | (x87_r7_16 == temp8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_16 = -(x87_r7_16);

                *(a1 + 0x58) = 1;
                *(a1 + 0x60) = x87_r7_16;

                if (a7)
                {
                    void* eax_95 = sub_4cb810(a2[7], a1 + 8);
                    void* ecx_68 = var_300;

                    if (ecx_68)
                    {
                        ecx_68 = eax_95;
                        var_300 = ecx_68;
                    }

                    if (edi_8)
                        edi_8 = eax_95;

                    *(a1 + 0x4c) = *(a2[7] + (ecx_68 << 2) + 0xd3c);
                    *(a1 + 0x50) = *(a2[7] + (edi_8 << 2) + 0xd3c);
                }

                sub_4c5870();
                return 1;
            }
        }

        int32_t eax_63 = var_280[i];

        if (eax_63 && i < 0x10)
        {
            char ecx_43 = var_2fc;
            var_280[i] = eax_63 - 1;
            int32_t eax_65 = (eax_63 - 1) ^ a4;
            int32_t eax_68 = ebx_2 >> (ecx_43 & 0x1f) & 1;
            int32_t ecx_45 = *((((((eax_12 >> (ecx_43 & 0x1f) & 1) | (eax_65 * 2)) << 1 | eax_68)
                + (esi_5 << 3)) << 2) + &g_548060);
            int32_t edx_41 = (eax_12 >> (var_2f8_3 & 0x1f) & 2) | eax_65 << 2 | eax_68;

            if (!(*(edi + 0x18) & 1 << (ecx_45 & 0x1f)))
                continue;
            else
            {
                i += 1;
                int32_t eax_71 = var_2ec >> 1;
                var_2ec = eax_71;
                var_2fc -= 1;
                var_2f8_3 -= 1;
                int32_t ecx_54;

                ecx_54 = !eax_65 ? var_304 - eax_71 : var_304 + eax_71;

                var_304 = ecx_54;
                int32_t eax_72 = 0;
                eax_72 = *(ecx_45 + edi + 0x10);

                esi_5 = esi_5 >= 4 ? ((esi_5 - (eax_72 & 3)) & 3) + ((eax_72 ^ esi_5) & 4)
                    : ((eax_72 ^ esi_5) & 4) + ((eax_72 + esi_5) & 3);

                int32_t eax_77 = 0;
                var_280[i] = 2;
                var_180[i] = esi_5;
                eax_77 = *(edi + (ecx_45 << 1));
                var_200[i] = var_304;
                edi = (eax_77 << 5) + ecx_1;
                bool cond:6_1 = !g_b97d20;
                var_100[i] = edi;
                void* eax_80;

                if (cond:6_1)
                    eax_80 = var_308;
                else
                {
                    eax_80 = var_308;

                    if (eax_80)
                    {
                        if (!i)
                            edx_41 = 7 - edx_41;

                        void* edx_42 = *(eax_80 + (edx_41 << 2) + 0xc);
                        var_308 = edx_42;

                        if (edx_42 && *(edx_42 + 0x38) & 0x80)
                        {
                            void* i_1 = *(edx_42 + 0x2c);

                            do
                            {
                                if (*(i_1 + 0x5c) & 0x80)
                                {
                                    int32_t ecx_64 = 0;
                                    ecx_64 = *(i_1 + 0x1c);
                                    (*((ecx_64 << 2) + &g_a9c4e0))(i_1, *(i_1 + 0x48));
                                }

                                i_1 = *(i_1 + 0x58);
                            } while (i_1);
                        }

                        eax_80 = var_308;
                    }
                }

                var_80[i] = eax_80;
                continue;
            }
        }

        i -= 1;
        var_2ec <<= 1;
        var_2fc += 1;
        var_2f8_3 += 1;

        if (i < a6)
            break;

        if (g_b97d20 && var_308 && *(var_308 + 0x38) & 0x100)
        {
            void* i_2 = *(var_308 + 0x2c);

            do
            {
                if (*(i_2 + 0x5c) & 0x100)
                {
                    int32_t eax_85 = 0;
                    eax_85 = *(i_2 + 0x1c);
                    (*((eax_85 << 2) + &g_a9cae0))(i_2, *(i_2 + 0x48));
                }

                i_2 = *(i_2 + 0x58);
            } while (i_2);
        }

        edi = var_100[i];
        esi_5 = var_180[i];
        var_304 = var_200[i];
        var_308 = var_80[i];
    }

    sub_4c5870();
    return 0;
}
