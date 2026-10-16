#include "004D2EC0-Render_DrawLightmapMesh_5.h"
/* 0x004d2ec0 Render_DrawLightmapMesh_5 full linked: callers=2 callees=2 */
int32_t* sub_4d2ec0(void* a1, int32_t a2)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t* result = g_a54638;
    void* ebx = nullptr;
    int32_t i = 0;

    if (*result > 0)
    {
        var_4 = 0;

        do
        {
            if (*(result[1] + (i << 2)) == a2)
            {
                int32_t* esi_1 = ebx + g_a5467c;
                sub_4d2f80(esi_1, a1);
                *esi_1 = i;
                int32_t* ecx_6 = *(g_a54638 + 8) + var_4;
                esi_1[2] = *ecx_6;
                esi_1[3] = ecx_6[1];
                esi_1[4] = ecx_6[2];
                long double x87_r7_1 = esi_1[4];
                long double x87_r6_1 = esi_1[3];
                long double x87_r5_1 = esi_1[2];
                esi_1[5] = sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
                sub_4d2ec0(esi_1, i);
                result = g_a54638;
            }

            i += 1;
            ebx += 0x84;
            var_4 += 0xc;
        } while (i < *result);
    }

    return result;
}
