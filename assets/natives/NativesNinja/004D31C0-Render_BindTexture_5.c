#include "004D31C0-Render_BindTexture_5.h"
/* 0x004d31c0 Render_BindTexture_5 full linked: callers=2 callees=1 */
int32_t sub_4d31c0(float* a1, float* a2, int32_t* a3)

{
    int32_t ecx = *a3;

    if (ecx == 1)
    {
        int32_t* ecx_1 = a3[1];
        int32_t edx = *ecx_1;

        if (edx)
            return edx(a1, a2, ecx_1[4]);
    }
    else
    {
        long double x87_r0;

        if (!ecx)
            return sub_4d3020(x87_r0, a1, a2, a3[1]);
    }

    return 0;
}
