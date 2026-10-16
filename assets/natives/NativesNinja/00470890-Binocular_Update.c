#include "00470890-Binocular_Update.h"
/* 0x00470890 Binocular_Update full linked: callers=0 callees=8 */
int32_t* sub_470890(void* a1, int32_t* a2)

{
    void* edx = a2[0xb];
    int32_t* i = *(a1 + 8);
    void* eax = *(edx + 0x4ec);
    int32_t* eax_1 = *(*(a1 + 0x128) + 0x6e4);
    void* var_4 = edx;

    if (*i && i)
    {
        int32_t eax_2 = g_afa7e0;

        do
        {
            int32_t* edi_1 = *i;
            void* ecx_4;

            if (!edi_1)
                ecx_4 = nullptr;
            else
            {
                int32_t ecx_1 = *edi_1;
                int32_t ecx_2 = -(ecx_1);
                ecx_4 = (ecx_2 - ecx_2) & edi_1;
            }

            *((eax_2 << 2) + &g_afa6e0) = ecx_4;
            g_afa7e0 = eax_2 + 1;
            uint32_t eax_5 = sub_460bf0();
            int32_t edx_1 = 0;
            edx_1 = i[7];
            (*(((eax_5 * 0x180 + edx_1) << 2) + &g_a96ae0))(i, a2);
            eax_2 = g_afa7e0 - 1;
            g_afa7e0 = eax_2;
            i = *((eax_2 << 2) + &g_afa6e0);
        } while (i);

        edx = var_4;
    }

    if (*(edx + 0xcf5))
    {
        *(a1 + 0x1b0) = 0;
        *(a1 + 0x1b8) = 0;
        return 0;
    }

    if (a2[5] && !*(a1 + 0x1b8))
    {
        int32_t esi = a2[1];

        if (esi)
            memcpy(a1 + 0x150, esi, 0x18);

        void* eax_9 = a2[2];

        if (!eax_9)
        {
            int32_t eax_13 = *(a1 + 0x80);
            *(a1 + 0x168) = *(a1 + 0x74);
            int32_t ecx_12 = *(a1 + 0x8c);
            *(a1 + 0x16c) = eax_13;
            *(a1 + 0x170) = ecx_12;
        }
        else
        {
            *(a1 + 0x168) = *(eax_9 + 4);
            *(a1 + 0x16c) = *(a2[2] + 0x10);
            *(a1 + 0x170) = *(a2[2] + 0x1c);
        }

        if (*(a1 + 0x1b0))
        {
            long double x87_r7 = *(edx + 0x1cc);
            long double temp1 = 0f;
            x87_r7 - temp1;

            if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
                | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                long double x87_r7_1 = *(edx + 0x12c);
                long double temp3_1 = 0f;
                x87_r7_1 - temp3_1;

                if (!(*(&((x87_r7_1 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    int32_t eax_16 = 0;
                    eax_16 = !*(a1 + 0x1bc);
                    *(a1 + 0x1bc) = eax_16;
                }
            }

            long double x87_r7_2 = *(edx + 0x1cc);
            long double temp2 = 0f;
            x87_r7_2 - temp2;
            long double x87_r7_3;
            long double temp5_1;

            if (!(*(&((x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                x87_r7_3 = *(edx + 0x12c);
                temp5_1 = 0f;
                x87_r7_3 - temp5_1;
            }

            int32_t* eax_19;

            if (*(&((x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&(
                (x87_r7_3 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !*(a1 + 0x1bc))
            {
                long double x87_r7_4 = *(edx + 0x1e8);
                long double temp4_1 = 0f;
                x87_r7_4 - temp4_1;
                long double x87_r7_5;
                long double temp7_1;

                if (*(&((x87_r7_4 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    x87_r7_5 = *(edx + 0x1cc);
                    temp7_1 = 0f;
                    x87_r7_5 - temp7_1;
                }

                void* ecx_15;
                long double x87_r7_9;

                if (*(&((x87_r7_4 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40 && (*(&(
                    (x87_r7_5 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40 || *(a1 + 0x1bc)))
                {
                    long double x87_r7_6 = *(edx + 0x1ec);
                    long double temp8_1 = 0f;
                    x87_r7_6 - temp8_1;

                    if (*(&((x87_r7_6 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_6, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r7_6 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        eax_19 = sub_470800(a1);
                    else
                    {
                        ecx_15 = eax;
                        long double x87_r7_7 = *(ecx_15 + 0x1e4);
                        long double temp9_1 = eax_1[2];
                        x87_r7_7 - temp9_1;

                        if (*(&((x87_r7_7 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_7, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_7 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            x87_r7_9 = *(ecx_15 + 0x1e4) * 1.03999996f;
                            goto label_470ae3;
                        }

                        eax_19 = sub_470800(a1);
                    }
                }
                else
                {
                    ecx_15 = eax;
                    long double x87_r7_10 = *(ecx_15 + 0x1e4);
                    long double temp6_1 = eax_1[1];
                    x87_r7_10 - temp6_1;

                    if (*(&((x87_r7_10 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_10, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_10 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        eax_19 = sub_470800(a1);
                    else
                    {
                        x87_r7_9 = *(ecx_15 + 0x1e4) * 0.959999979f;
                    label_470ae3:
                        *(ecx_15 + 0x1e4) = x87_r7_9;
                        eax_19 = *(a1 + 0x1c4);

                        if (!eax_19 || !*eax_19)
                        {
                            sub_470800(a1);
                            struct status_msg* eax_21 = sub_4e6b00(var_4, "bin_zoom_1");

                            if (!eax_21)
                            {
                                *(a1 + 0x1b8) = 0;
                                return eax_21;
                            }

                            int32_t* eax_22 = QTask_LinkEventHandler_2(eax_21);
                            *(a1 + 0x1b8) = 0;
                            *(a1 + 0x1c4) = eax_22;
                            return eax_22;
                        }
                    }
                }
            }
            else
            {
                *(eax + 0x1e4) = *eax_1;
                sub_470800(a1);
                eax_19 = sub_470800(a1);
            }

            *(a1 + 0x1b8) = 0;
            return eax_19;
        }

        sub_4659d0(*(edx + 0x4ec));
        *(eax + 0x1e4) = *eax_1;
        *(a1 + 0x1b4) = 0;
        *(a1 + 0x1b0) = 1;
        *(a1 + 0x1bc) = 0;
    }

    *(a1 + 0x1b8) = 0;
    return 0;
}
