#include "0051BC60-LevelTimer_LoadParameters.h"
/* 0x0051bc60 LevelTimer_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_51bc60(void* a1)

{
    sub_4f1320(a1 + 0x6c);
    sub_4f1320(a1 + 0xbc);
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
    *(a1 + 0x68) = 0;
    *(a1 + 0x60) = 1;
    *(a1 + 0x64) = 0;
    return 0;
}
