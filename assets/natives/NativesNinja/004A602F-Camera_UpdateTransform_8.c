#include "004A602F-Camera_UpdateTransform_8.h"
/* 0x004a602f Camera_UpdateTransform_8 full linked: callers=1 callees=9 */
int32_t sub_4a602f()

{
    if (!g_c32548)
        sub_4aa562();

    char* esi = g_93604c;
    int32_t edi = 0;

    while (true)
    {
        char eax_1 = *esi;

        if (!eax_1)
            break;

        if (eax_1 != 0x3d)
            edi += 1;

        esi = esi + sub_4aa730(esi) + 1;
    }

    void** esi_1 = sub_4aa670((edi << 2) + 4);
    int32_t* ecx_2 = (edi << 2) + 4;
    g_93608c = esi_1;

    if (!esi_1)
    {
        sub_4a51eb(9);
        ecx_2 = 9;
    }

    char* edi_1 = g_93604c;

    while (*edi_1)
    {
        ecx_2 = edi_1;
        int32_t* ebp_2 = sub_4aa730(edi_1) + 1;

        if (*edi_1 != 0x3d)
        {
            void* eax_5 = sub_4aa670(ebp_2);
            *esi_1 = eax_5;

            if (!eax_5)
                sub_4a51eb(9);

            int32_t* var_14_3 = edi_1;
            sub_4aa580(*esi_1, var_14_3);
            esi_1 = &esi_1[1];
            ecx_2 = var_14_3;
        }

        edi_1 += ebp_2;
    }

    int32_t __saved_ebp_3 = g_93604c;
    int32_t result = sub_4a6a50(ecx_2);
    g_93604c = 0;
    *esi_1 = nullptr;
    g_c32544 = 1;
    return result;
}
