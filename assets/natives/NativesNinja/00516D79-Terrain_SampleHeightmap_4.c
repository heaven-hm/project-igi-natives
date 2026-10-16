#include "00516D79-Terrain_SampleHeightmap_4.h"
/* 0x00516d79 Terrain_SampleHeightmap_4 full linked: callers=1 callees=4 */
uint32_t sub_516d79(char* a1, int32_t a2, uint32_t a3, int32_t* a4)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    uint32_t edi_1 = a2 * a3;
    uint32_t var_8_1 = edi_1;
    uint32_t ebx = edi_1;

    if (!edi_1)
        return 0;

    int32_t* esi_1 = a4;

    if (!(esi_1[3] & 0x10c))
        a4 = 0x1000;
    else
        a4 = esi_1[6];

    uint32_t eax_12;

    while (true)
    {
        int32_t ecx_2 = esi_1[3] & 0x108;
        uint32_t eax_3;

        if (ecx_2)
            eax_3 = esi_1[1];

        if (ecx_2 && eax_3)
        {
            uint32_t edi_2 = ebx;

            if (ebx >= eax_3)
                edi_2 = eax_3;

            sub_4aa7b0(*esi_1, a1, edi_2);
            esi_1[1] -= edi_2;
            *esi_1 += edi_2;
            ebx -= edi_2;
            a1 = &a1[edi_2];
            edi_1 = var_8_1;
        }
        else if (ebx < a4)
        {
            int32_t var_1c_3 = *a1;

            if (sub_4a760b(esi_1) == 0xffffffff)
            {
                eax_12 = edi_1;
                break;
            }

            a1 = &a1[1];
            int32_t* eax_11 = esi_1[6];
            ebx -= 1;
            a4 = eax_11;

            if (eax_11 <= 0)
                a4 = 1;
        }
        else
        {
            bool cond:3_1;

            if (ecx_2)
                cond:3_1 = sub_4a6bd2(esi_1);

            if (ecx_2 && cond:3_1)
            {
                eax_12 = edi_1;
                break;
            }

            uint32_t edi_4;

            edi_4 = !a4 ? ebx : ebx - COMBINE(0, ebx) % a4;

            int32_t eax_7 = sub_4abec7(esi_1[4], a1, edi_4);

            if (eax_7 != 0xffffffff)
            {
                a1 = &a1[eax_7];
                ebx -= eax_7;
            }

            if (eax_7 == 0xffffffff || eax_7 < edi_4)
            {
                esi_1[3] |= 0x20;
                eax_12 = var_8_1;
                break;
            }

            edi_1 = var_8_1;
        }

        if (!ebx)
            return a3;
    }

    return COMBINE(0, eax_12 - ebx) / a2;
}
