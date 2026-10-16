#include "0052AE50-AnimScaleTask_LoadParameters.h"
/* 0x0052ae50 AnimScaleTask_LoadParameters full linked: callers=0 callees=5 */
void* sub_52ae50(void* a1)

{
    *(a1 + 0x20154) = 0xffffffff;
    *(a1 + 0x2014c) = 0xffffffff;
    __builtin_memset(a1 + 0x20, 0, 0x18);
    *(a1 + 0x38) = 0x3f800000;
    *(a1 + 0x3c) = 0;
    *(a1 + 0x40) = 0;
    *(a1 + 0x44) = 0;
    *(a1 + 0x48) = 0x3f800000;
    *(a1 + 0x4c) = 0;
    *(a1 + 0x50) = 0;
    *(a1 + 0x54) = 0;
    *(a1 + 0x58) = 0x3f800000;
    *(a1 + 0x5c) = 0;
    *(a1 + 0x20150) = 1;
    *(a1 + 0xf4) = 0x20;
    *(a1 + 0xf8) = 0;
    *(a1 + 0x200f4) = 1;
    *(a1 + 0x200f5) = 0;
    *(a1 + 0x20148) = 0;
    sub_4f1320(a1 + 0x200f8);
    __builtin_memset(a1 + 0x6c, 0, 0x88);
    *(a1 + 0x64) = 0;
    *(a1 + 0x60) = 0;
    void* result = sub_4af8f0(&g_a76c28, a1 + 0x60);
    *(a1 + 0x68) = a1;
    *(a1 + 0x20160) = 0x3f800000;
    *(a1 + 0x20164) = 0;
    return result;
}
