#include "004D4690-Render_SetupLighting_7.h"
/* 0x004d4690 Render_SetupLighting_7 full linked: callers=2 callees=1 */
float sub_4d4690(int32_t a1, float a2, int32_t* a3) __location("eax")

{
    int32_t edx = *a3;

    if (edx == 1)
    {
        void* ecx = a3[1];
        int32_t edx_1 = *(ecx + 4);

        if (edx_1)
            return edx_1(a1, a2, *(ecx + 0x10));
    }
    else if (!edx)
    {
        int32_t var_c_2 = a1;
        long double x87_r6;
        return sub_4d3f50(x87_r6, a2, a3[1]);
    }

    return nanf;
}
