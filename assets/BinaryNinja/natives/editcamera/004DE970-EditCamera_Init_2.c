#include "EditCamera_Init_2.h"

int32_t EditCamera_Init_2(void* pThis, int32_t param)

{
    void* eax = *(pThis + 0xe8);
    int32_t afa7e0_1;

    if (!eax)
        afa7e0_1 = g_afa7e0;
    else
    {
        int32_t* i_2 = *(eax + 8);

        if (!*i_2)
            afa7e0_1 = g_afa7e0;
        else
        {
            int32_t* i = i_2;

            if (!i)
                afa7e0_1 = g_afa7e0;
            else
            {
                afa7e0_1 = g_afa7e0;

                do
                {
                    int32_t* edx_1 = *i;
                    void* ecx_4;

                    if (!edx_1)
                        ecx_4 = nullptr;
                    else
                    {
                        int32_t ecx_1 = *edx_1;
                        int32_t ecx_2 = -(ecx_1);
                        ecx_4 = (ecx_2 - ecx_2) & edx_1;
                    }

                    *((afa7e0_1 << 2) + &g_afa6e0) = ecx_4;
                    g_afa7e0 = afa7e0_1 + 1;
                    uint32_t eax_3 = DynObj_UpdateDynTree_12();
                    int32_t ecx_5 = 0;
                    ecx_5 = i[7];
                    int32_t eax_7 = *(((eax_3 * 0x180 + ecx_5) << 2) + &g_a96ae0);

                    if (eax_7)
                        eax_7(i, param);

                    afa7e0_1 = g_afa7e0 - 1;
                    g_afa7e0 = afa7e0_1;
                    i = *((afa7e0_1 << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    void* ecx_6 = *(pThis + 0x148);

    if (ecx_6)
    {
        int32_t* i_1 = *(ecx_6 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* edx_2 = *i_1;
                void* ecx_10;

                if (!edx_2)
                    ecx_10 = nullptr;
                else
                {
                    int32_t ecx_7 = *edx_2;
                    int32_t ecx_8 = -(ecx_7);
                    ecx_10 = (ecx_8 - ecx_8) & edx_2;
                }

                *((afa7e0_1 << 2) + &g_afa6e0) = ecx_10;
                g_afa7e0 = afa7e0_1 + 1;
                uint32_t eax_11 = DynObj_UpdateDynTree_12();
                int32_t eax_12 = 0;
                eax_12 = i_1[7];
                int32_t eax_13 = *(((eax_11 * 0x180 + eax_12) << 2) + &g_a96ae0);

                if (eax_13)
                    eax_13(i_1, param);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i_1 = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return afa7e0_1;
}
