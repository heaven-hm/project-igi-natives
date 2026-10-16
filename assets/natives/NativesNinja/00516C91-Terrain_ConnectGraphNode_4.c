#include "00516C91-Terrain_ConnectGraphNode_4.h"
/* 0x00516c91 Terrain_ConnectGraphNode_4 full linked: callers=1 callees=3 */
uint32_t sub_516c91(char* a1, int32_t a2, uint32_t a3, int32_t* a4)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    char* edi_1 = a2 * a3;
    char* ebx = a1;
    char* ecx_1 = edi_1;
    char* var_8_1 = edi_1;
    a1 = ecx_1;

    if (!edi_1)
        return 0;

    int32_t* esi_1 = a4;

    if (!(esi_1[3] & 0x10c))
        a4 = 0x1000;
    else
        a4 = esi_1[6];

    while (true)
    {
        char* eax_3;

        if (esi_1[3] & 0x10c)
            eax_3 = esi_1[1];

        if (esi_1[3] & 0x10c && eax_3)
        {
            char* edi_2 = ecx_1;

            if (ecx_1 >= eax_3)
                edi_2 = eax_3;

            sub_4aa7b0(ebx, *esi_1, edi_2);
            a1 -= edi_2;
            esi_1[1] -= edi_2;
            *esi_1 = &edi_2[*esi_1];
            ebx += edi_2;
            edi_1 = var_8_1;
        }
        else if (ecx_1 < a4)
        {
            uint32_t eax_7 = sub_4a6ca4(esi_1);

            if (eax_7 == 0xffffffff)
                break;

            *ebx = eax_7;
            ebx = &ebx[1];
            a1 -= 1;
            a4 = esi_1[6];
        }
        else
        {
            char* eax_4 = ecx_1;

            if (a4)
                eax_4 = ecx_1 - COMBINE(0, eax_4) % a4;

            void* eax_6 = sub_4ac12d(esi_1[4], ebx, eax_4);

            if (!eax_6)
            {
                esi_1[3] |= 0x10;
                break;
            }

            if (eax_6 == 0xffffffff)
            {
                esi_1[3] |= 0x20;
                break;
            }

            a1 -= eax_6;
            ebx += eax_6;
        }

        if (!a1)
            return a3;

        ecx_1 = a1;
    }

    return COMBINE(0, edi_1 - a1) / a2;
}
