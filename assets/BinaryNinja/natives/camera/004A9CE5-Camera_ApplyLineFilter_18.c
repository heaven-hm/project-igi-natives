// Original IGI.EXE function: Camera_ApplyLineFilter_18 (VA 0x004A9CE5; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_18.h"
🌐  long double __fastcall __fload_withFB(int32_t a1, double* a2)

{
    if ((*(a2 + 4) & 0x7ff00000) != 0x7ff00000)
        return *a2;

    int32_t v_4 = *(a2 + 4) | 0x7fff0000;
    int32_t objC = *a2;
    int32_t v_6 = *(a2 + 4) << 0xb | objC >> 0x15;
    *(a2 + 4);
    return (objC << 0xb);
}
