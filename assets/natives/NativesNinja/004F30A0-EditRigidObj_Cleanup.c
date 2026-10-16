#include "004F30A0-EditRigidObj_Cleanup.h"
/* 0x004f30a0 EditRigidObj_Cleanup full linked: callers=0 callees=6 */
int32_t sub_4f30a0(float a1, void* a2)

{
    int32_t* edi = a1;
    long double x87_r7 = edi[0x27];
    long double x87_r6 = edi[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = edi[0x28];
    else
        x87_r7_1 = edi[0x27];

    long double x87_r6_1 = edi[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = edi[0x27];
        long double x87_r6_2 = edi[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = edi[0x28];
        else
            x87_r7_3 = edi[0x27];
    }
    else
        x87_r7_3 = edi[0x26];

    long double x87_r7_6 = sub_4d0950(edi[0x1b]) * x87_r7_3;
    sub_4c7140(*(a2 + 4), edi, &edi[0x3c], x87_r7_6, 2);
    double* eax_2 = sub_4c3440(edi);
    sub_4dccb0(*(a2 + 4), edi, eax_2);
    int32_t* i = edi[2];
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

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

            *((result << 2) + &g_afa6e0) = ecx_4;
            g_afa7e0 = result + 1;
            uint32_t eax_6 = sub_4cea10();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            int32_t eax_7 = *(((eax_6 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (eax_7)
                eax_7(i, a2);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* ecx_8 = edi[0x3a];

    if (ecx_8)
    {
        int32_t* i_1 = *(ecx_8 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* edx_3 = *i_1;
                void* ecx_12;

                if (!edx_3)
                    ecx_12 = nullptr;
                else
                {
                    int32_t ecx_9 = *edx_3;
                    int32_t ecx_10 = -(ecx_9);
                    ecx_12 = (ecx_10 - ecx_10) & edx_3;
                }

                *((result << 2) + &g_afa6e0) = ecx_12;
                g_afa7e0 = result + 1;
                uint32_t eax_11 = sub_4cea10();
                int32_t ecx_13 = 0;
                ecx_13 = i_1[7];
                int32_t eax_15 = *(((eax_11 * 0x180 + ecx_13) << 2) + &g_a96ae0);

                if (eax_15)
                    eax_15(i_1, a2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    edi[0x66] = 1;
    return result;
}
