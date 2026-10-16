#include "004D2A20-Render_IllegalAllocInfo.h"
/* 0x004d2a20 Render_IllegalAllocInfo full linked: callers=1 callees=1 */
int32_t sub_4d2a20()

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t i_1 = 0;
    int32_t* ebx = &g_b04358;
    int32_t i;

    do
    {
        int32_t* eax_1 = *ebx;

        if (eax_1)
        {
            int32_t ecx_1 = ebx[-1];
            int32_t eax_6;
            int32_t edx_1;

            if (!ecx_1)
            {
                int32_t* esi_1 = g_b12b74;
                edx_1 = *(eax_1 + esi_1);
                int32_t eax_3 = g_b12b68 - 1;
                g_b12b68 = eax_3;

                if (edx_1 != eax_3)
                {
                    int32_t ecx_2 = g_b12b64;
                    eax_6 = *(ecx_2 + (eax_3 << 2)) * g_b12b70 + g_b12b60;
                    int32_t edi_2 = *(ecx_2 + (edx_1 << 2));
                    int32_t esi_2 = *(esi_1 + eax_6);
                    *(ecx_2 + (edx_1 << 2)) = *(ecx_2 + (esi_2 << 2));
                    *(g_b12b64 + (esi_2 << 2)) = edi_2;
                    *(g_b12b74 + eax_6) = edx_1;
                }
            }
            else if (ecx_1 == 1)
            {
                int32_t* esi_3 = g_b12c54;
                edx_1 = *(eax_1 + esi_3);
                int32_t eax_8 = g_b12c48 - 1;
                g_b12c48 = eax_8;

                if (edx_1 != eax_8)
                {
                    int32_t ecx_5 = g_b12c44;
                    eax_6 = *(ecx_5 + (eax_8 << 2)) * g_b12c50 + g_b12c40;
                    int32_t edi_4 = *(ecx_5 + (edx_1 << 2));
                    int32_t esi_4 = *(esi_3 + eax_6);
                    *(ecx_5 + (edx_1 << 2)) = *(ecx_5 + (esi_4 << 2));
                    *(g_b12c44 + (esi_4 << 2)) = edi_4;
                    *(g_b12c54 + eax_6) = edx_1;
                }
            }
            else if (ecx_1 != 2)
            {
                Error_Show("Illegal alloc info");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t* esi_5 = g_b16cd4;
                edx_1 = *(eax_1 + esi_5);
                int32_t eax_12 = g_b16cc8 - 1;
                g_b16cc8 = eax_12;

                if (edx_1 != eax_12)
                {
                    int32_t ecx_7 = g_b16cc4;
                    eax_6 = *(ecx_7 + (eax_12 << 2)) * g_b16cd0 + g_b16cc0;
                    int32_t edi_6 = *(ecx_7 + (edx_1 << 2));
                    int32_t esi_6 = *(esi_5 + eax_6);
                    *(ecx_7 + (edx_1 << 2)) = *(ecx_7 + (esi_6 << 2));
                    *(g_b16cc4 + (esi_6 << 2)) = edi_6;
                    *(g_b16cd4 + eax_6) = edx_1;
                }
            }
            *ebx = 0;
            *ebx = 0;
        }

        ebx[-2] = 0xffffffff;
        i = i_1 + 1;
        ebx = &ebx[7];
        i_1 = i;
    } while (i < 0x800);

    return i;
}
