#include "004B47E0-Sys_OpenFileStream_14.h"
/* 0x004b47e0 Sys_OpenFileStream_14 full linked: callers=10 callees=1 */
int32_t sub_4b47e0(int32_t* a1, int32_t a2)

{
    sub_4b4720(a1);
    int32_t edx = a1[1];
    *a1 ^= a2;
    int32_t result = a2 << 9;
    int32_t ecx_5 = a1[2] - result;
    a1[1] = edx + (a2 << 0xf);
    a1[2] = ecx_5;
    return result;
}
