#include "00504EF0-MenuItemTask_LoadParameters.h"
/* 0x00504ef0 MenuItemTask_LoadParameters full linked: callers=0 callees=8 */
void* sub_504ef0(void* a1)

{
    void* ebx = a1;
    int32_t* i = *(ebx + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_4;

            if (!edx_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edx_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_4;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_6 = sub_505c70();
            int32_t ecx_3 = 0;
            ecx_3 = i[7];
            int32_t eax_10 = *(((eax_6 * 0x180 + ecx_3) << 2) + &g_a96ae0);

            if (eax_10)
                eax_10(i, 0);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    int32_t* i_1 = *(ebx + 8);
    *(ebx + 0x28) = ebx + 0x20;
    *(ebx + 0x24) = 0;
    *(ebx + 0x20) = ebx + 0x24;
    int32_t eax_13;

    if (!*i_1 || !i_1)
        eax_13 = g_afa7e0;
    else
    {
        eax_13 = g_afa7e0;

        do
        {
            int32_t* esi = *i_1;
            void* ecx_8;

            if (!esi)
                ecx_8 = nullptr;
            else
            {
                int32_t ecx_5 = *esi;
                int32_t ecx_6 = -(ecx_5);
                ecx_8 = (ecx_6 - ecx_6) & esi;
            }

            *((eax_13 << 2) + &g_afa6e0) = ecx_8;
            int32_t eax_14 = eax_13 + 1;
            int32_t ecx_9 = 0;
            g_afa7e0 = eax_14;
            ecx_9 = i_1[7];
            int32_t ecx_10 = *((ecx_9 << 2) + &g_a970e0);

            if (ecx_10)
            {
                ecx_10(i_1);
                eax_14 = g_afa7e0;
            }

            i_1 = *((eax_14 << 2) + &g_afa6dc);
            eax_13 = eax_14 - 1;
            g_afa7e0 = eax_13;
        } while (i_1);
    }

    int32_t* i_2 = *(ebx + 8);
    void** var_28 = ebx + 0x20;

    if (*i_2 && i_2)
    {
        do
        {
            int32_t* edx_2 = *i_2;
            void* ecx_14;

            if (!edx_2)
                ecx_14 = nullptr;
            else
            {
                int32_t ecx_11 = *edx_2;
                int32_t ecx_12 = -(ecx_11);
                ecx_14 = (ecx_12 - ecx_12) & edx_2;
            }

            *((eax_13 << 2) + &g_afa6e0) = ecx_14;
            g_afa7e0 = eax_13 + 1;
            uint32_t eax_17 = sub_504df0();
            int32_t eax_18 = 0;
            eax_18 = i_2[7];
            int32_t eax_19 = *(((eax_17 * 0x180 + eax_18) << 2) + &g_a96ae0);

            if (eax_19)
                eax_19(i_2, &var_28);

            eax_13 = g_afa7e0 - 1;
            g_afa7e0 = eax_13;
            i_2 = *((eax_13 << 2) + &g_afa6e0);
        } while (i_2);
    }

    int32_t edx_6 = *(ebx + 0x34);
    int32_t ecx_15 = *(ebx + 0x30);
    int32_t ecx_16 = ecx_15 - *(ebx + 0x3c);
    int32_t var_4 = ~*(ebx + 0x40) & edx_6;
    int32_t eax_24 = *(ebx + 0x2c);
    int32_t eax_25 = eax_24 - *(ebx + 0x38);
    void* var_1c = nullptr;
    int32_t var_8 = edx_6;
    void* eax_26;

    if (eax_25 || ecx_16 || edx_6 & 0x70)
    {
        eax_26 = sub_505a30(ebx);

        if (eax_25 || ecx_16 || !eax_26)
        {
            int32_t* i_7 = *(ebx + 0x20);
            int32_t* i_3 = *i_7;
            int32_t ecx_29;

            if (!i_3)
                ecx_29 = g_afa7e0;
            else
            {
                int32_t edi_1 = ecx_15;
                int32_t ebx_1 = eax_24;
                ecx_29 = g_afa7e0;

                do
                {
                    int32_t var_24_1 = i_7[2];
                    int32_t esi_2;

                    if (var_24_1 <= ebx_1)
                    {
                        int32_t var_24_2 = i_7[4] + i_7[2];
                        esi_2 = var_24_2;

                        if (var_24_2 >= ebx_1)
                            esi_2 = ebx_1;
                    }
                    else
                        esi_2 = var_24_1;

                    int32_t edx_13 = i_7[3];

                    if (edx_13 <= edi_1)
                    {
                        edx_13 = i_7[5] + i_7[3];

                        if (edx_13 >= edi_1)
                            edx_13 = edi_1;
                    }

                    if (esi_2 == ebx_1 && edx_13 == edi_1)
                    {
                        var_1c = *(i_7[8] + 0x38);
                        int32_t* j = *(*(i_7[8] + 0x14) + 8);

                        if (*j && j)
                        {
                            do
                            {
                                int32_t* edx_17 = *j;
                                void* eax_51;

                                if (!edx_17)
                                    eax_51 = nullptr;
                                else
                                {
                                    int32_t eax_48 = *edx_17;
                                    int32_t eax_49 = -(eax_48);
                                    eax_51 = (eax_49 - eax_49) & edx_17;
                                }

                                *((ecx_29 << 2) + &g_afa6e0) = eax_51;
                                g_afa7e0 = ecx_29 + 1;
                                uint32_t eax_53 = sub_505c60();
                                int32_t ecx_31 = 0;
                                ecx_31 = j[7];
                                int32_t eax_57 = *(((eax_53 * 0x180 + ecx_31) << 2) + &g_a96ae0);

                                if (eax_57)
                                    eax_57(j, &var_1c);

                                ecx_29 = g_afa7e0 - 1;
                                g_afa7e0 = ecx_29;
                                j = *((ecx_29 << 2) + &g_afa6e0);
                            } while (j);

                            edi_1 = ecx_15;
                            ebx_1 = eax_24;
                        }
                    }

                    i_7 = i_3;
                    i_3 = *i_3;
                } while (i_3);

                ebx = a1;
            }

            eax_26 = var_1c;

            if (!eax_26)
            {
                int32_t* i_4 = *(ebx + 8);

                if (*i_4 && i_4)
                {
                    do
                    {
                        int32_t* edx_18 = *i_4;
                        void* eax_61;

                        if (!edx_18)
                            eax_61 = nullptr;
                        else
                        {
                            int32_t eax_58 = *edx_18;
                            int32_t eax_59 = -(eax_58);
                            eax_61 = (eax_59 - eax_59) & edx_18;
                        }

                        *((ecx_29 << 2) + &g_afa6e0) = eax_61;
                        g_afa7e0 = ecx_29 + 1;
                        uint32_t eax_63 = sub_505c60();
                        int32_t ecx_34 = 0;
                        ecx_34 = i_4[7];
                        eax_26 = *(((eax_63 * 0x180 + ecx_34) << 2) + &g_a96ae0);

                        if (eax_26)
                            eax_26 = eax_26(i_4, &var_1c);

                        ecx_29 = g_afa7e0 - 1;
                        g_afa7e0 = ecx_29;
                        i_4 = *((ecx_29 << 2) + &g_afa6e0);
                    } while (i_4);
                }
            }
        }
        else
        {
            var_1c = *(eax_26 + 0x38);
            int32_t* i_5 = *(*(eax_26 + 0x14) + 8);

            if (*i_5 && i_5)
            {
                int32_t ecx_25 = g_afa7e0;
                int32_t eax_46;

                do
                {
                    int32_t* edx_10 = *i_5;
                    void* eax_40;

                    if (!edx_10)
                        eax_40 = nullptr;
                    else
                    {
                        int32_t eax_37 = *edx_10;
                        int32_t eax_38 = -(eax_37);
                        eax_40 = (eax_38 - eax_38) & edx_10;
                    }

                    *((ecx_25 << 2) + &g_afa6e0) = eax_40;
                    g_afa7e0 = ecx_25 + 1;
                    uint32_t eax_42 = sub_505c60();
                    int32_t ecx_27 = 0;
                    ecx_27 = i_5[7];
                    eax_46 = *(((eax_42 * 0x180 + ecx_27) << 2) + &g_a96ae0);

                    if (eax_46)
                        eax_46 = eax_46(i_5, &var_1c);

                    ecx_25 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_25;
                    i_5 = *((ecx_25 << 2) + &g_afa6e0);
                } while (i_5);

                return eax_46;
            }
        }
    }
    else
    {
        eax_26 = sub_505a30(ebx);

        if (eax_26)
        {
            var_1c = *(eax_26 + 0x38);
            int32_t* i_6 = *(*(eax_26 + 0x14) + 8);

            if (*i_6 && i_6)
            {
                int32_t ecx_18 = g_afa7e0;
                int32_t eax_36;

                do
                {
                    int32_t* edx_8 = *i_6;
                    void* eax_30;

                    if (!edx_8)
                        eax_30 = nullptr;
                    else
                    {
                        int32_t eax_27 = *edx_8;
                        int32_t eax_28 = -(eax_27);
                        eax_30 = (eax_28 - eax_28) & edx_8;
                    }

                    *((ecx_18 << 2) + &g_afa6e0) = eax_30;
                    g_afa7e0 = ecx_18 + 1;
                    uint32_t eax_32 = sub_505c60();
                    int32_t ecx_20 = 0;
                    ecx_20 = i_6[7];
                    eax_36 = *(((eax_32 * 0x180 + ecx_20) << 2) + &g_a96ae0);

                    if (eax_36)
                        eax_36 = eax_36(i_6, &var_1c);

                    ecx_18 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_18;
                    i_6 = *((ecx_18 << 2) + &g_afa6e0);
                } while (i_6);

                return eax_36;
            }
        }
    }

    return eax_26;
}
