#include "00424CE0-Cursor_LoadParameters.h"
/* 0x00424ce0 Cursor_LoadParameters full linked: callers=0 callees=9 */
int32_t Cursor_LoadParameters(void* a1)

{
    int32_t eax_5;
    void* esi;
    int32_t edi_2;

    if (sub_48f130())
    {
        long double x87_r7_1 = g_bc20f8;
        esi = a1;
        int32_t ecx_2 = *(esi + 0x28);
        *(esi + 0x24) += g_bc20f4 * 320f;
        bool cond:0_1 = *(esi + 0x24) >= 0;
        *(esi + 0x28) = ecx_2 + x87_r7_1 * 240f;
        int32_t eax_10;

        if (cond:0_1)
        {
            int32_t edi_3 = *(esi + 0x24);

            if (g_c28b44 - 1 >= edi_3)
                eax_10 = edi_3;
            else
                eax_10 = g_c28b44 - 1;
        }
        else
            eax_10 = 0;

        *(esi + 0x24) = eax_10;

        if (*(esi + 0x28) >= 0)
        {
            edi_2 = *(esi + 0x28);

            if (g_c28b48 - 1 >= edi_2)
                eax_5 = edi_2;
            else
                eax_5 = g_c28b48 - 1;
        }
        else
            eax_5 = 0;
    }
    else
    {
        esi = a1;
        int32_t eax_1 = g_57bc58;
        *(esi + 0x24) = eax_1;
        *(esi + 0x28) = g_57bc5c;
        int32_t eax_2;

        if (eax_1 >= 0)
        {
            int32_t edi_1 = *(esi + 0x24);

            if (g_c28b44 - 1 >= edi_1)
                eax_2 = edi_1;
            else
                eax_2 = g_c28b44 - 1;
        }
        else
            eax_2 = 0;

        *(esi + 0x24) = eax_2;

        if (*(esi + 0x28) >= 0)
        {
            edi_2 = *(esi + 0x28);

            if (g_c28b48 - 1 >= edi_2)
                eax_5 = edi_2;
            else
                eax_5 = g_c28b48 - 1;
        }
        else
            eax_5 = 0;
    }
    int32_t edx_6 = *(esi + 0x3c);
    *(esi + 0x28) = eax_5;
    *(esi + 0x38) = edx_6;
    int32_t result = *g_c28f8c & 1;
    *(esi + 0x3c) = result;
    return result;
}
