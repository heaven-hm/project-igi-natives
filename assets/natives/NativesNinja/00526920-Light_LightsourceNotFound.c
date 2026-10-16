#include "00526920-Light_LightsourceNotFound.h"
/* 0x00526920 Light_LightsourceNotFound full linked: callers=1 callees=1 */
int32_t sub_526920(int32_t a1)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t ecx_1 = g_a83d00;
    int32_t var_4 = 0;

    if (ecx_1 > 0)
    {
        int32_t* esi_1 = g_a83cfc;
        int32_t edi_1 = g_a83d08;
        int32_t ebx_1 = g_a83cf8;
        int32_t* edx_1 = esi_1;
        bool cond:1_1;

        do
        {
            int32_t* eax_3 = *edx_1 * edi_1 + ebx_1;

            if (*eax_3 == a1)
            {
                int32_t* edx_2 = g_a83d0c;
                int32_t result = *(edx_2 + eax_3);
                g_a83d00 = ecx_1 - 1;

                if (result != ecx_1 - 1)
                {
                    int32_t edi_2 = esi_1[result];
                    int32_t ecx_5 = esi_1[ecx_1 - 1] * edi_1 + ebx_1;
                    int32_t edx_3 = *(edx_2 + ecx_5);
                    esi_1[result] = esi_1[edx_3];
                    *(g_a83cfc + (edx_3 << 2)) = edi_2;
                    *(g_a83d0c + ecx_5) = result;
                }

                return result;
            }

            edx_1 = &edx_1[1];
            cond:1_1 = var_4 + 1 < ecx_1;
            var_4 += 1;
        } while (cond:1_1);
    }

    Error_Show("Lightsource not found");

    while (true)
        /* nop */
}
