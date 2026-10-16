#include "004DC3D0-Sector_Cleanup_2.h"
/* 0x004dc3d0 Sector_Cleanup_2 full linked: callers=0 callees=7 */
int32_t* sub_4dc3d0(int32_t* a1, int32_t* a2)

{
    int32_t var_c = 0;
    int32_t* result_1 = nullptr;
    int32_t var_4 = *a2;
    int32_t* i_2 = a1;
    uint32_t eax_2 = sub_4cfc80();
    int32_t eax_3 = 0;
    eax_3 = i_2[7];
    (*(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0))(i_2, &var_4);

    if (i_2[0x52])
    {
        int32_t* i = i_2;

        if (i_2)
        {
            do
            {
                void* eax_6 = i[0x1b];

                if (eax_6)
                {
                    result_1 += *(eax_6 + 0x3c);
                    int32_t* ecx_1 = *(i[0x3a] + 8);
                    int32_t eax_8 = *ecx_1;
                    int32_t eax_9 = -(eax_8);
                    sub_4dbf30(&result_1, (eax_9 - eax_9) & ecx_1);
                }

                if (i != i_2)
                {
                    i = *i;

                    if (!i)
                        break;

                    if (!*i)
                        break;
                }
                else
                {
                    void* esi_1 = i[0x52];

                    if (!esi_1)
                        break;

                    i = *(esi_1 + 8);

                    if (!*i)
                        break;
                }
            } while (i);
        }
    }

    int32_t* ecx_2 = i_2[2];
    int32_t eax_12 = *ecx_2;
    int32_t eax_13 = -(eax_12);
    sub_4dbfa0(&result_1, (eax_13 - eax_13) & ecx_2);
    int32_t* result = result_1;

    if (result)
    {
        int32_t** eax_17 = Mem_Alloc(result * 0x24 + 0x18, 4);
        *eax_17 = result_1;
        eax_17[1] = i_2[0x1b];

        if (i_2[0x52])
        {
            int32_t* i_1 = i_2;

            if (i_2)
            {
                do
                {
                    void* edx_5 = i_1[0x1b];

                    if (edx_5)
                    {
                        i_1[0x37] = &eax_17[var_c * 9 + 6];
                        int32_t j = 0;

                        if (*(edx_5 + 0x3c) > 0)
                        {
                            int32_t ecx_5 = var_c;
                            void* ebx = edx_5;

                            do
                            {
                                ebx += 4;
                                eax_17[ecx_5 * 9 + 6] = 0;
                                eax_17[var_c * 9 + 8] = i_1;
                                eax_17[var_c * 9 + 9] = &i_1[0x1c];
                                eax_17[var_c * 9 + 0xa] = &i_1[8];
                                eax_17[var_c * 9 + 0xb] = i_1[0x36];
                                eax_17[var_c * 9 + 0xc] = j;
                                eax_17[var_c * 9 + 0xd] = *(edx_5 + 0x3c);
                                eax_17[var_c * 9 + 7] = *(ebx - 4);
                                eax_17[var_c * 9 + 0xe] = 0;
                                ecx_5 = var_c + 1;
                                j += 1;
                                var_c = ecx_5;
                            } while (j < *(edx_5 + 0x3c));

                            i_2 = a1;
                        }

                        int32_t* ecx_24 = *(i_1[0x3a] + 8);
                        int32_t eax_22 = *ecx_24;
                        int32_t eax_23 = -(eax_22);
                        int32_t ecx_25 = 0;
                        ecx_25 = i_1 == i_2;
                        sub_4dc050(&var_c, eax_17, (eax_23 - eax_23) & ecx_24, ecx_25);
                    }

                    if (i_1 != i_2)
                    {
                        i_1 = *i_1;

                        if (!i_1)
                            break;

                        if (!*i_1)
                            break;
                    }
                    else
                    {
                        void* edi_3 = i_1[0x52];

                        if (!edi_3)
                            break;

                        i_1 = *(edi_3 + 8);

                        if (!*i_1)
                            break;
                    }
                } while (i_1);
            }
        }

        int32_t* ecx_26 = i_2[2];
        int32_t eax_26 = *ecx_26;
        int32_t eax_27 = -(eax_26);
        sub_4dc190(&var_c, eax_17, (eax_27 - eax_27) & ecx_26);
        sub_4dc640(i_2, &eax_17[3], &eax_17[2]);
        result = a2;
        *result = eax_17;
    }

    return result;
}
