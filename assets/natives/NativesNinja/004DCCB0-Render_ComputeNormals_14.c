#include "004DCCB0-Render_ComputeNormals_14.h"
/* 0x004dccb0 Render_ComputeNormals_14 full linked: callers=17 callees=2 */
int32_t sub_4dccb0(int32_t a1, void* a2, double* a3)

{
    double* var_30 = a3;
    void* var_28 = nullptr;
    int32_t var_24 = 0;
    int32_t var_2c = 1;
    sub_4ce090(a1, sub_4d14c0(), &var_30, a3, 0xffffffff, 5);

    if (var_28 && var_28 != var_24 && *(var_28 + 0x138) < *(var_28 + 0x13c))
    {
        int32_t ecx_2 = g_a5e320;

        if (ecx_2 < g_a5e324)
        {
            int32_t* eax_7 = *(g_a5e31c + (ecx_2 << 2)) * g_a5e328 + g_a5e318;
            *(g_a5e32c + eax_7) = ecx_2;
            g_a5e320 += 1;
            eax_7[1] = var_28;
            eax_7[2] = var_24;
            int32_t esi_2 = *(var_28 + 0x138);
            int32_t* ecx_9 =
                *(*(var_28 + 0x134) + (esi_2 << 2)) * *(var_28 + 0x140) + *(var_28 + 0x130);
            *(*(var_28 + 0x144) + ecx_9) = esi_2;
            void* edx_2 = eax_7[1];
            *(edx_2 + 0x138) += 1;
            *eax_7 = ecx_9;
            *ecx_9 = a2;
            *(a2 + 0x60) = 1;
            return 1;
        }
    }

    *(a2 + 0x60) = 0;
    return 0;
}
