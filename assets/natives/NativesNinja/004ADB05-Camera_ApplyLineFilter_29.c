#include "004ADB05-Camera_ApplyLineFilter_29.h"
/* 0x004adb05 Camera_ApplyLineFilter_29 full linked: callers=2 callees=0 */
int32_t* sub_4adb05(int32_t* a1)

{
    int32_t edx = a1[2];
    int32_t ecx = a1[1];
    a1[1] = ecx >> 1 | edx << 0x1f;
    int32_t ecx_5 = *a1 >> 1 | ecx << 0x1f;
    a1[2] = edx >> 1;
    *a1 = ecx_5;
    return a1;
}
