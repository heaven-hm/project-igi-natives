#include "004A5405-Camera_UpdateViewCone_4.h"
/* 0x004a5405 Camera_UpdateViewCone_4 full linked: callers=1 callees=2 */
int32_t sub_4a5405(char* a1)

{
    char* edi = a1;
    BOOL eax_2;
    wchar16 (* ecx)[0x21];
    int32_t edx;

    while (true)
    {
        if (g_54427c <= 1)
        {
            uint32_t eax_3 = *edi;
            ecx = g_544070;
            eax_3 = (*ecx)[eax_3];
            eax_2 = eax_3 & 8;
        }
        else
        {
            uint32_t eax_1 = *edi;
            uint32_t var_18_1 = eax_1;
            eax_2 = sub_4a7f2a(eax_1, edx, ecx, 8);
            ecx = 8;
        }

        if (!eax_2)
            break;

        edi = &edi[1];
    }

    uint32_t esi = *edi;
    char* edi_1 = &edi[1];
    uint32_t ebp = esi;

    if (esi == 0x2d || esi == 0x2b)
    {
        esi = *edi_1;
        edi_1 = &edi_1[1];
    }

    int32_t result = 0;

    while (true)
    {
        BOOL eax_4;

        if (g_54427c <= 1)
        {
            wchar16 (* eax_5)[0x21] = g_544070;
            eax_5 = (*eax_5)[esi];
            eax_4 = eax_5 & 4;
        }
        else
        {
            uint32_t var_18_2 = esi;
            eax_4 = sub_4a7f2a(eax_2, edx, ecx, 4);
            ecx = 4;
        }

        if (!eax_4)
            break;

        eax_2 = result * 5;
        result = esi + (eax_2 << 1) - 0x30;
        esi = *edi_1;
        edi_1 = &edi_1[1];
    }

    if (ebp != 0x2d)
        return result;

    return -(result);
}
