#include "0042BFA0-Afterburner_Setup.h"
/* 0x0042bfa0 Afterburner_Setup full linked: callers=0 callees=1 */
int32_t Afterburner_Setup(float a1)

{
    float esi = a1;
    void* ecx = *(esi + 0x130);
    long double x87_r7 = *(ecx + 0x720);
    long double temp1 = 0.810000002f;
    x87_r7 - temp1;
    long double x87_r7_3;

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_3 = 0f;
    else
        x87_r7_3 = (*(ecx + 0x720) - 0.810000002f) * 2.27272725f;

    long double temp2 = *(esi + 0x138);
    x87_r7_3 - temp2;

    if (!(*(&((x87_r7_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        *(esi + 0x138) = *(esi + 0x138) * 0.980000019f + x87_r7_3 * 0.0199999809f;

    long double x87_r7_8 = *(esi + 0x138) * 1.39999998f;
    long double x87_r6_5 = 1f;
    x87_r6_5 - x87_r7_8;

    a1 = *(&((x87_r6_5 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? x87_r7_8 : 1f;

    int32_t result;
    long double st0;
    st0 = sub_4b4770(&g_57bd00);
    int32_t* i = *(esi + 8);
    *(esi + 0x9c) = st0 * 0.200000003f + a1;

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_4;

            if (!esi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *esi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_4;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = edx_2;
            eax_5 = i[7];
            result = *((eax_5 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    return result;
}
