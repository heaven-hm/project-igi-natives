#include "gi_platform.h"
#include "004DE4E0-Sector_Cleanup_4.h"
int32_t Sector_Cleanup_4(void* a1)

{
    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* objC4;

            if (!srcS1)
                objC4 = nullptr;
            else
            {
                int32_t objC1 = *srcS1;
                int32_t objC2 = -(objC1);
                objC4 = (objC2 - objC2) & srcS1;
            }

            *((result << 2) + &g_afa6e0) = objC4;
            int32_t valA = result + 1;
            int32_t objC5 = 0;
            g_afa7e0 = valA;
            objC5 = i[7];
            int32_t objC6 = *((objC5 << 2) + &g_a970e0);

            if (objC6)
            {
                objC6(i);
                valA = g_afa7e0;
            }

            i = (*(int32_t*)(uintptr_t)((valA << 2) + &g_afa6dc));
            result = valA - 1;
            g_afa7e0 = result;
        } while (i);
    }

    void* objC7 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (objC7)
    {
        int32_t* i_1 = *(objC7 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* srcS2 = *i_1;
                void* objC11;

                if (!srcS2)
                    objC11 = nullptr;
                else
                {
                    int32_t objC8 = *srcS2;
                    int32_t objC9 = -(objC8);
                    objC11 = (objC9 - objC9) & srcS2;
                }

                *((result << 2) + &g_afa6e0) = objC11;
                int32_t valA1 = result + 1;
                int32_t objC12 = 0;
                g_afa7e0 = valA1;
                objC12 = i_1[7];
                int32_t objC13 = *((objC12 << 2) + &g_a970e0);

                if (objC13)
                {
                    objC13(i_1);
                    valA1 = g_afa7e0;
                }

                i_1 = *((valA1 << 2) + &g_afa6dc);
                result = valA1 - 1;
                g_afa7e0 = result;
            } while (i_1);
        }
    }

    if ((*(int32_t*)(uintptr_t)(a1 + 0x6c)))
    {
        void* objC15 = (*(int32_t*)(uintptr_t)(a1 + 0x148));

        if (objC15)
        {
            int32_t* i_3 = *(objC15 + 8);

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
                            int32_t* srcS3 = *j;
                            void* objC19;

                            if (!srcS3)
                                objC19 = nullptr;
                            else
                            {
                                int32_t objC16 = *srcS3;
                                int32_t objC17 = -(objC16);
                                objC19 = (objC17 - objC17) & srcS3;
                            }

                            *((result << 2) + &g_afa6e0) = objC19;
                            int32_t valA2 = result + 1;
                            int32_t objC20 = 0;
                            g_afa7e0 = valA2;
                            objC20 = j[7];
                            int32_t objC21 = *((objC20 << 2) + &g_a970e0);

                            if (objC21)
                            {
                                objC21(j);
                                valA2 = g_afa7e0;
                            }

                            j = *((valA2 << 2) + &g_afa6dc);
                            result = valA2 - 1;
                            g_afa7e0 = result;
                        } while (j);
                    }

                    void* objC22 = i_2[0x3a];

                    if (objC22)
                    {
                        int32_t* j_1 = *(objC22 + 8);

                        if (*j_1 && j_1)
                        {
                            do
                            {
                                int32_t* srcS4 = *j_1;
                                void* objC26;

                                if (!srcS4)
                                    objC26 = nullptr;
                                else
                                {
                                    int32_t objC23 = *srcS4;
                                    int32_t objC24 = -(objC23);
                                    objC26 = (objC24 - objC24) & srcS4;
                                }

                                *((result << 2) + &g_afa6e0) = objC26;
                                int32_t valA3 = result + 1;
                                int32_t objC27 = 0;
                                g_afa7e0 = valA3;
                                objC27 = j_1[7];
                                int32_t objC28 = *((objC27 << 2) + &g_a970e0);

                                if (objC28)
                                {
                                    objC28(j_1);
                                    valA3 = g_afa7e0;
                                }

                                j_1 = *((valA3 << 2) + &g_afa6dc);
                                result = valA3 - 1;
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
