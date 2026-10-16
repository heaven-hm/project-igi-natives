#include "004DCDD0-Render_SetupLighting_14.h"
/* 0x004dcdd0 Render_SetupLighting_14 full linked: callers=16 callees=0 */
int32_t sub_4dcdd0(void* a1)

{
    void* ebx = a1;
    int32_t eax = *(ebx + 0x60);

    if (eax)
    {
        eax = g_a5e320;
        int32_t edx_1 = 0;

        if (eax > 0)
        {
            int32_t* ecx_1 = g_a5e31c;
            int32_t edi_1 = g_a5e318;
            int32_t* eax_3;

            while (true)
            {
                int32_t** eax_2 = *ecx_1 * g_a5e328;
                eax_3 = eax_2 + edi_1;

                if (**(eax_2 + edi_1) == ebx)
                    break;

                int32_t eax_4 = g_a5e320;
                edx_1 += 1;
                ecx_1 = &ecx_1[1];

                if (edx_1 >= eax_4)
                    return eax_4;
            }

            void* ecx_2 = eax_3[1];
            int32_t edi_2 = *(*(ecx_2 + 0x144) + *eax_3);
            *(ecx_2 + 0x138) -= 1;
            void* edx_3 = eax_3[1];
            int32_t ecx_3 = *(edx_3 + 0x138);

            if (edi_2 != ecx_3)
            {
                int32_t esi_3 = *(edx_3 + 0x134);
                int32_t ecx_6 = *(esi_3 + (ecx_3 << 2)) * *(edx_3 + 0x140) + *(edx_3 + 0x130);
                int32_t ebx_2 = *(esi_3 + (edi_2 << 2));
                int32_t edx_5 = *(*(edx_3 + 0x144) + ecx_6);
                *(esi_3 + (edi_2 << 2)) = *(esi_3 + (edx_5 << 2));
                *(*(eax_3[1] + 0x134) + (edx_5 << 2)) = ebx_2;
                ebx = a1;
                *(*(eax_3[1] + 0x144) + ecx_6) = edi_2;
            }

            *eax_3 = 0;
            int32_t* esi_6 = g_a5e32c;
            eax = *(esi_6 + eax_3);
            int32_t ecx_8 = g_a5e320 - 1;
            g_a5e320 = ecx_8;

            if (eax != ecx_8)
            {
                int32_t edx_8 = g_a5e31c;
                int32_t ecx_11 = *(edx_8 + (ecx_8 << 2)) * g_a5e328 + g_a5e318;
                int32_t edi_4 = *(edx_8 + (eax << 2));
                int32_t esi_7 = *(esi_6 + ecx_11);
                *(edx_8 + (eax << 2)) = *(edx_8 + (esi_7 << 2));
                *(g_a5e31c + (esi_7 << 2)) = edi_4;
                *(g_a5e32c + ecx_11) = eax;
            }

            *(ebx + 0x60) = 0;
        }
    }

    return eax;
}
