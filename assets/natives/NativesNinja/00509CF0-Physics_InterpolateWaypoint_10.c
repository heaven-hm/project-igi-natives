#include "00509CF0-Physics_InterpolateWaypoint_10.h"
/* 0x00509cf0 Physics_InterpolateWaypoint_10 full linked: callers=1 callees=3 */
void sub_509cf0()

{
    int32_t i_1 = g_a7b638;
    int32_t ebx = 0;
    int32_t var_4 = 0;

    if (i_1 > 0)
    {
        int32_t* var_8_1 = &g_a7b4e0;
        bool cond:1_1;

        do
        {
            int32_t* eax_2 = *var_8_1;

            if (eax_2)
            {
                memcpy(ebx + 0xa7b4f8, ebx + &g_a7b2f0, 0x50);
                (*(*eax_2 + 0x64))(eax_2);
                int32_t* eax_3 = *var_8_1;
                int32_t eax_4 = (*(*eax_3 + 0x24))(eax_3, 0x50, ebx + &g_a7b2f0);

                if (eax_4 < 0)
                {
                    if (eax_4 == 0x8007001e)
                        sub_509cc0(var_4);

                    __builtin_memset(ebx + &g_a7b2f0, 0, 0x50);
                }
            }

            i_1 = g_a7b638;
            ebx += 0x50;
            cond:1_1 = var_4 + 1 < i_1;
            var_4 += 1;
            var_8_1 = &var_8_1[1];
        } while (cond:1_1);
    }

    if (i_1 <= 0)
        return;

    int32_t* edi_3 = &g_a7b2f0;
    int32_t* edx_3 = &g_bcaa20;
    int32_t i;

    do
    {
        int32_t j = 0;
        edx_3[1] = *edx_3;
        *edx_3 = 0;
        int32_t ebx_1 = *edx_3;

        do
        {
            int32_t eax_7 = 0;
            eax_7 = (*(edi_3 + j + 0x30) & 0x80) == 0x80;
            ebx_1 |= eax_7 << ((j + 4) & 0x1f);
            j += 1;
        } while (j < 0x20);

        *edx_3 = ebx_1;
        int16_t eax_9;
        eax_9 = edx_3[-7];

        if (eax_9)
        {
            int32_t eax_10 = *edi_3;
            int32_t eax_11;

            if (eax_10 < 0)
            {
                eax_11 = ebx_1;
                eax_11 |= 1;
                *edx_3 = eax_11;
            }
            else if (eax_10 > 0)
            {
                eax_11 = *edx_3;
                eax_11 |= 2;
                *edx_3 = eax_11;
            }
            int32_t eax_12 = edi_3[1];
            int32_t eax_13;

            if (eax_12 < 0)
            {
                eax_13 = *edx_3;
                eax_13 |= 4;
                *edx_3 = eax_13;
            }
            else if (eax_12 > 0)
            {
                eax_13 = *edx_3;
                eax_13 |= 8;
                *edx_3 = eax_13;
            }
        }

        eax_9 = *(edx_3 - 0x1b);

        if (eax_9)
        {
            if (!*edx_3)
                *(edx_3 - 0x1b) = 0;

            *edx_3 = 0;
        }

        int32_t ecx = edi_3[5];
        edx_3[-6] = *edi_3 * 0.0078125;
        edx_3[-5] = edi_3[1] * 0.0078125;
        long double x87_r7_5 = ecx;
        long double temp1_1 = 0f;
        x87_r7_5 - temp1_1;
        eax_9 = (x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&eax_9 + 1) & 0x41)
        {
            edx_3[-2] = -((ecx * 0.0078125));
            edx_3[-1] = 0;
        }
        else
        {
            edx_3[-2] = 0;
            edx_3[-1] = ecx * 0.0078125;
        }

        long double x87_r7_11 = edi_3[6];
        edi_3 = &edi_3[0x14];
        edx_3 = &edx_3[0xa];
        i = i_1;
        i_1 -= 1;
        edx_3[-0xe] = x87_r7_11;
        edx_3[-0xd] = edi_3[-0xd];
    } while (i != 1);
}
