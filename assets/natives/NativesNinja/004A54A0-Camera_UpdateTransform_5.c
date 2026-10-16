#include "004A54A0-Camera_UpdateTransform_5.h"
/* 0x004a54a0 Camera_UpdateTransform_5 full linked: callers=34 callees=0 */
void* const __convention("regparm") sub_4a54a0(int32_t a1)

{
    void arg_4;
    void* ecx = &arg_4;

    while (a1 >= 0x1000)
    {
        ecx -= 0x1000;
        a1 -= 0x1000;
        *ecx;
    }

    void* ecx_1 = ecx - a1;
    *ecx_1;
    *(ecx_1 - 4) = __return_addr;
    return __return_addr;
}
