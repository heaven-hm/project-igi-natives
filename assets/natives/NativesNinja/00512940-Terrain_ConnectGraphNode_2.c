#include "00512940-Terrain_ConnectGraphNode_2.h"
/* 0x00512940 Terrain_ConnectGraphNode_2 full linked: callers=0 callees=2 */
int32_t sub_512940(int32_t a1)

{
    void* ebp = nullptr;
    int32_t ebx = 0;
    int32_t eax_3;

    if (g_bcab38)
    {
        int32_t eax_7 = g_b015a8;
        int32_t var_34_1 = 0x20;
        int32_t var_38_1 = 0x20;
        int32_t esi_4 = *(g_b015a4 + (eax_7 << 2)) * g_b015b0 + g_b015a0;
        *(g_b015b4 + esi_4) = eax_7;
        g_b015a8 += 1;
        int32_t edi_5 = a1;
        int32_t var_3c_1 = *(edi_5 + 0x14) - 16f;
        int32_t var_40_1 = *(edi_5 + 0x10) - 16f;
        int32_t var_44_1 = esi_4;
        a1 = 0xfffffff0;
        long double x87_r7_5 = 0f;
        long double x87_r6_1 = 0f;
        long double x87_r5_1 = 0f;
        bool cond:2_1;

        do
        {
            int32_t i = 0xfffffff0;
            int32_t i_1 = 0xfffffff0;

            do
            {
                if (*(ebp + 0xa7dc64) && *(esi_4 + (ebx << 1)) == *(*(edi_5 + 0x24) + (ebx << 1)))
                {
                    x87_r7_5 = x87_r7_5 + 1f;
                    x87_r6_1 = x87_r6_1 + i_1;
                    x87_r5_1 = x87_r5_1 + a1;
                }

                ebx += 1;
                ebp += 1;
                i += 1;
                i_1 = i;
            } while (i < 0x10);

            cond:2_1 = a1 + 1 < 0x10;
            a1 += 1;
        } while (cond:2_1);
        long double temp1_1 = 0f;
        x87_r7_5 - temp1_1;

        if (!(*(&((x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        {
            *(edi_5 + 0x10) = x87_r6_1 / x87_r7_5 + *(edi_5 + 0x10);
            *(edi_5 + 0x14) = x87_r5_1 / x87_r7_5 + *(edi_5 + 0x14);
        }

        long double x87_r7_7 = x87_r7_5 * 0.0009765625f;
        int32_t* ecx_8 = *(edi_5 + 0xc);
        float var_c = x87_r7_7 * *(edi_5 + 0x18);
        float var_8_1 = x87_r7_7 * *(edi_5 + 0x1c);
        float var_4_1 = x87_r7_7 * *(edi_5 + 0x20);
        sub_5182b0(ecx_8, edi_5 + 0x10, &var_c);
        int32_t* ebx_2 = g_b015b4;
        int32_t eax_14 = g_b015a8 - 1;
        int32_t esi_5 = *(ebx_2 + esi_4);
        g_b015a8 = eax_14;

        if (esi_5 != eax_14)
        {
            int32_t ecx_9 = g_b015a4;
            int32_t eax_17 = *(ecx_9 + (eax_14 << 2)) * g_b015b0 + g_b015a0;
            int32_t edx_5 = *(ecx_9 + (esi_5 << 2));
            int32_t ebx_3 = *(ebx_2 + eax_17);
            *(ecx_9 + (esi_5 << 2)) = *(ecx_9 + (ebx_3 << 2));
            *(g_b015a4 + (ebx_3 << 2)) = edx_5;
            *(g_b015b4 + eax_17) = esi_5;
            eax_14 = g_b015a8;
            ebx_2 = g_b015b4;
        }

        eax_3 = eax_14 - 1;
        int32_t ecx_12 = *(*(edi_5 + 0x24) + ebx_2);
        g_b015a8 = eax_3;

        if (ecx_12 != eax_3)
        {
            int32_t edx_7 = g_b015a4;
            eax_3 = *(edx_7 + (eax_3 << 2)) * g_b015b0 + g_b015a0;
            int32_t esi_7 = *(edx_7 + (ecx_12 << 2));
            int32_t ebx_4 = *(ebx_2 + eax_3);
            *(edx_7 + (ecx_12 << 2)) = *(edx_7 + (ebx_4 << 2));
            *(g_b015a4 + (ebx_4 << 2)) = esi_7;
            *(g_b015b4 + eax_3) = ecx_12;
        }
    }
    else
    {
        int32_t* esi = g_b015b4;
        eax_3 = g_b015a8 - 1;
        int32_t edx = *(*(a1 + 0x24) + esi);
        g_b015a8 = eax_3;

        if (edx != eax_3)
        {
            int32_t ecx_1 = g_b015a4;
            int32_t eax_6 = *(ecx_1 + (eax_3 << 2)) * g_b015b0 + g_b015a0;
            int32_t edi_2 = *(ecx_1 + (edx << 2));
            int32_t esi_1 = *(esi + eax_6);
            *(ecx_1 + (edx << 2)) = *(ecx_1 + (esi_1 << 2));
            *(g_b015a4 + (esi_1 << 2)) = edi_2;
            *(g_b015b4 + eax_6) = edx;
            return eax_6;
        }
    }

    return eax_3;
}
