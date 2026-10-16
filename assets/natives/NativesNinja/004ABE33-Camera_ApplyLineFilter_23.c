#include "004ABE33-Camera_ApplyLineFilter_23.h"
/* 0x004abe33 Camera_ApplyLineFilter_23 full linked: callers=7 callees=0 */
int32_t sub_4abe33(int32_t a1)

{
    if (a1 < g_c32540)
    {
        int32_t eax = a1 & 0x1f;
        int32_t ecx_3 = (&g_c32440)[a1 >> 5];

        if (*(ecx_3 + (eax << 3) + 4) & 1)
            return *(ecx_3 + (eax << 3));
    }

    g_936068 = 0;
    g_936064 = 9;
    return 0xffffffff;
}
