#include "004DE4E0-Sector_Cleanup_4.h"
/* 0x004de4e0 Sector_Cleanup_4 full linked: callers=0 callees=0 */
int32_t sub_4de4e0(void* a1)

{
    int32_t* i = *(a1 + 8);
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* ecx_4;

            if (!esi_1)
                ecx_4 = nullptr;
            else
            {
                int32_t ecx_1 = *esi_1;
                int32_t ecx_2 = -(ecx_1);
                ecx_4 = (ecx_2 - ecx_2) & esi_1;
            }

            *((result << 2) + &g_afa6e0) = ecx_4;
            int32_t eax = result + 1;
            int32_t ecx_5 = 0;
            g_afa7e0 = eax;
            ecx_5 = i[7];
            int32_t ecx_6 = *((ecx_5 << 2) + &g_a970e0);

            if (ecx_6)
            {
                ecx_6(i);
                eax = g_afa7e0;
            }

            i = *((eax << 2) + &g_afa6dc);
            result = eax - 1;
            g_afa7e0 = result;
        } while (i);
    }

    void* ecx_7 = *(a1 + 0xe8);

    if (ecx_7)
    {
        int32_t* i_1 = *(ecx_7 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* esi_2 = *i_1;
                void* ecx_11;

                if (!esi_2)
                    ecx_11 = nullptr;
                else
                {
                    int32_t ecx_8 = *esi_2;
                    int32_t ecx_9 = -(ecx_8);
                    ecx_11 = (ecx_9 - ecx_9) & esi_2;
                }

                *((result << 2) + &g_afa6e0) = ecx_11;
                int32_t eax_1 = result + 1;
                int32_t ecx_12 = 0;
                g_afa7e0 = eax_1;
                ecx_12 = i_1[7];
                int32_t ecx_13 = *((ecx_12 << 2) + &g_a970e0);

                if (ecx_13)
                {
                    ecx_13(i_1);
                    eax_1 = g_afa7e0;
                }

                i_1 = *((eax_1 << 2) + &g_afa6dc);
                result = eax_1 - 1;
                g_afa7e0 = result;
            } while (i_1);
        }
    }

    if (*(a1 + 0x6c))
    {
        void* ecx_15 = *(a1 + 0x148);

        if (ecx_15)
        {
            int32_t* i_3 = *(ecx_15 + 8);

            if (*i_3)
            {
                int32_t* i_4;

                for (int32_t* i_2 = i_3; i_2; i_2 = i_4)
                {
                    int32_t* j = i_2[2];

                    if (*j && j)
                    {
                        do
                        {
                            int32_t* esi_3 = *j;
                            void* ecx_19;

                            if (!esi_3)
                                ecx_19 = nullptr;
                            else
                            {
                                int32_t ecx_16 = *esi_3;
                                int32_t ecx_17 = -(ecx_16);
                                ecx_19 = (ecx_17 - ecx_17) & esi_3;
                            }

                            *((result << 2) + &g_afa6e0) = ecx_19;
                            int32_t eax_2 = result + 1;
                            int32_t ecx_20 = 0;
                            g_afa7e0 = eax_2;
                            ecx_20 = j[7];
                            int32_t ecx_21 = *((ecx_20 << 2) + &g_a970e0);

                            if (ecx_21)
                            {
                                ecx_21(j);
                                eax_2 = g_afa7e0;
                            }

                            j = *((eax_2 << 2) + &g_afa6dc);
                            result = eax_2 - 1;
                            g_afa7e0 = result;
                        } while (j);
                    }

                    void* ecx_22 = i_2[0x3a];

                    if (ecx_22)
                    {
                        int32_t* j_1 = *(ecx_22 + 8);

                        if (*j_1 && j_1)
                        {
                            do
                            {
                                int32_t* esi_4 = *j_1;
                                void* ecx_26;

                                if (!esi_4)
                                    ecx_26 = nullptr;
                                else
                                {
                                    int32_t ecx_23 = *esi_4;
                                    int32_t ecx_24 = -(ecx_23);
                                    ecx_26 = (ecx_24 - ecx_24) & esi_4;
                                }

                                *((result << 2) + &g_afa6e0) = ecx_26;
                                int32_t eax_3 = result + 1;
                                int32_t ecx_27 = 0;
                                g_afa7e0 = eax_3;
                                ecx_27 = j_1[7];
                                int32_t ecx_28 = *((ecx_27 << 2) + &g_a970e0);

                                if (ecx_28)
                                {
                                    ecx_28(j_1);
                                    eax_3 = g_afa7e0;
                                }

                                j_1 = *((eax_3 << 2) + &g_afa6dc);
                                result = eax_3 - 1;
                                g_afa7e0 = result;
                            } while (j_1);
                        }
                    }

                    i_4 = *i_2;

                    if (!i_4)
                        break;

                    if (!*i_4)
                        break;
                }
            }
        }
    }

    return result;
}
