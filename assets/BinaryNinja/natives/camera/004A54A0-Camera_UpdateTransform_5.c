// Original IGI.EXE function: Camera_UpdateTransform_5 (VA 0x004A54A0; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_5.h"
void* const __convention("regparm") Camera_UpdateTransform_5(int32_t a1)

{
    void arg_4;
    void* objC = &arg_4;

    while (a1 >= 0x1000)
    {
        objC -= 0x1000;
        a1 -= 0x1000;
        *objC;
    }

    void* objC1 = objC - a1;
    *objC1;
    *(objC1 - 4) = __return_addr;
    return __return_addr;
}
