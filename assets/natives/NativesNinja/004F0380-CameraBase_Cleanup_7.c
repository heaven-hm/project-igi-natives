#include "004F0380-CameraBase_Cleanup_7.h"
/* 0x004f0380 CameraBase_Cleanup_7 full linked: callers=0 callees=0 */
int32_t* sub_4f0380(int32_t a1, int32_t* a2)

{
    int32_t edi = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    *a2 = ~i;
    return a2;
}
