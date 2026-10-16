#include "004F0460-CameraBase_Cleanup_10.h"
/* 0x004f0460 CameraBase_Cleanup_10 full linked: callers=0 callees=2 */
int32_t sub_4f0460(int32_t* a1, int32_t* a2)

{
    sub_4f1c20(a2, 1);
    int32_t i = 0xffffffff;
    char* edx = *a1;
    char* edi = edx;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    sub_4b8a80(a2[1], *a2, edx, ~i - 1);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}
