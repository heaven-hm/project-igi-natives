#include "004D4F60-Render_BindTexture_8.h"
/* 0x004d4f60 Render_BindTexture_8 full linked: callers=1 callees=0 */
int32_t* sub_4d4f60(int32_t* a1, int32_t* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    int32_t eax_1 = a4 * 0x28;
    int32_t* result;

    if (!*(eax_1 + 0xa53910))
    {
        result = a1;
        result[0xc] = 0;
    }
    else
    {
        int32_t esi_1 = *(eax_1 + 0xa53900);
        void* ecx_4 =
            *(*(eax_1 + &g_a538fc) + (esi_1 << 2)) * *(eax_1 + 0xa53908) + *(eax_1 + 0xa538f8);
        *(*(eax_1 + &g_a5390c) + ecx_4) = esi_1;
        *(eax_1 + 0xa53900) += 1;
        result = a1;
        result[0xc] = ecx_4;
        *(ecx_4 + 0xc) = ecx_4 + 0x10;
        *result[0xc] = a4;
        *(result[0xc] + 4) = 0;
        *(result[0xc] + 8) = 0;
        int32_t edx_1 = *(a4 * 0xc + &g_a542f0);
        int32_t ecx_8 = 0;

        if (edx_1 > 0)
        {
            do
            {
                ecx_8 += 1;
                *(*(result[0xc] + 0xc) + (ecx_8 << 2) - 4) = 0;
            } while (ecx_8 < edx_1);
        }
    }

    *result = a5;
    result[1] = a6;
    result[3] = a2;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[2] = a3;
    int32_t* edx_4 = a2[2];

    if (!(a3 & 2))
    {
        int32_t* edx_8 = edx_4[1];
        result[4] = *edx_8;
        result[5] = edx_8[1];
        result[6] = edx_8[2];
        int32_t ecx_13 = g_a54658;
        result[0xb] = 0;
        result[0xa] = ecx_13;
        return result;
    }

    int32_t* edx_6 = edx_4[1] + *edx_4 * 0x28 - 0x28;
    result[4] = *edx_6;
    result[5] = edx_6[1];
    result[6] = edx_6[2];
    result[0xa] = -(g_a54658);
    result[0xb] = *a2;
    return result;
}
