#include "004015F0-QTask_FindType.h"
/* 0x004015f0 QTask_FindType full linked: callers=120 callees=3 */
int32_t QTask_FindType(int32_t* a1)

{
    g_567c58 -= 1;
    int32_t edx_1 = g_afa7e0;
    int32_t eax = 0;

    if (edx_1 > 0)
    {
        int32_t* ecx_1 = &g_afa6e0;

        do
        {
            if (*ecx_1 == a1)
            {
                int32_t* edx_2 = *a1;
                void* ecx_5;

                if (!edx_2)
                    ecx_5 = nullptr;
                else
                {
                    int32_t ecx_2 = *edx_2;
                    int32_t ecx_3 = -(ecx_2);
                    ecx_5 = (ecx_3 - ecx_3) & edx_2;
                }

                *((eax << 2) + &g_afa6e0) = ecx_5;
                break;
            }

            eax += 1;
            ecx_1 = &ecx_1[1];
        } while (eax < edx_1);
    }

    int32_t eax_1 = 0;
    eax_1 = a1[7];
    int32_t eax_2 = *((eax_1 << 2) + &g_a97ce0);

    if (eax_2)
        eax_2(a1);

    int32_t* i_1 = a1[4];

    for (int32_t* i = i_1[1]; i; i = i[1])
    {
        QTask_FindType(i_1);
        i_1 = i;
    }

    int32_t ecx_6 = 0;
    ecx_6 = a1[7];
    int32_t eax_3 = *((ecx_6 << 2) + &g_a976e0);

    if (eax_3)
        eax_3(a1);

    if (a1[6])
    {
        int32_t eax_5 = g_567c40;
        int32_t ecx_7 = 0;

        if (eax_5 > 0)
        {
            do
            {
                int32_t ebx_1 = g_567c38;
                int32_t* eax_8 = *(g_567c3c + (ecx_7 << 2)) * g_567c48;

                if (*(eax_8 + ebx_1) == a1)
                    *(eax_8 + ebx_1) = 0;

                ecx_7 += 1;
            } while (ecx_7 < eax_5);
        }
    }

    QTask_AllocateEvent(a1);

    if (!*(a1 + 0x1e))
        return sub_4b0d10(a1);

    int32_t eax_12 = 0;
    eax_12 = a1[7];
    int32_t eax_14 = eax_12 * 0x30;
    int32_t edi_1 = *(*(eax_14 + 0xaf5f00) + a1);
    *(eax_14 + 0xaf5ef4) -= 1;
    int32_t eax_15 = 0;
    eax_15 = a1[7];
    int32_t ecx_10 = eax_15 * 0x30;
    int32_t eax_16 = *(ecx_10 + 0xaf5ef4);

    if (edi_1 == eax_16)
        return eax_16;

    int32_t edx_4 = *(ecx_10 + 0xaf5ef0);
    int32_t ebp_3 = *(edx_4 + (edi_1 << 2));
    int32_t eax_19 = *(edx_4 + (eax_16 << 2)) * *(ecx_10 + 0xaf5efc) + *(ecx_10 + 0xaf5eec);
    int32_t ebx_3 = *(*(ecx_10 + 0xaf5f00) + eax_19);
    *(edx_4 + (edi_1 << 2)) = *(edx_4 + (ebx_3 << 2));
    int32_t ecx_13 = 0;
    ecx_13 = a1[7];
    *(*(ecx_13 * 0x30 + 0xaf5ef0) + (ebx_3 << 2)) = ebp_3;
    int32_t ecx_15 = 0;
    ecx_15 = a1[7];
    *(*(ecx_15 * 0x30 + 0xaf5f00) + eax_19) = edi_1;
    return eax_19;
}
