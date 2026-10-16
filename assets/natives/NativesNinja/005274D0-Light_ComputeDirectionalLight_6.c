#include "005274D0-Light_ComputeDirectionalLight_6.h"
/* 0x005274d0 Light_ComputeDirectionalLight_6 full linked: callers=1 callees=1 */
int32_t sub_5274d0(float a1)

{
    int32_t result = g_ba1e08;
    int32_t esi = 0;

    if (result > 0)
    {
        do
        {
            long double x87_r7_1 = a1;
            float ecx_3 = *(*(g_ba1e04 + (esi << 2)) * g_ba1e10 + g_ba1e00);
            long double temp0_1 = *(ecx_3 + 0x5c);
            x87_r7_1 - temp0_1;

            if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                *(ecx_3 + 0x5c) = a1;
                sub_5269c0(ecx_3);
            }

            result = g_ba1e08;
            esi += 1;
        } while (esi < result);
    }

    return result;
}
