#include "0051F140-SmoothQTask_LoadParameters.h"
/* 0x0051f140 SmoothQTask_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_51f140(void* a1)

{
    sub_4f1320(a1 + 0xa8);
    *(a1 + 0x38) = 0x3f800000;
    *(a1 + 0x48) = 0x3f800000;
    *(a1 + 0x58) = 0x3f800000;
    __builtin_memset(a1 + 0x20, 0, 0x18);
    *(a1 + 0xa0) = 0;
    *(a1 + 0x3c) = 0;
    *(a1 + 0x40) = 0;
    *(a1 + 0x44) = 0;
    *(a1 + 0x4c) = 0;
    *(a1 + 0x50) = 0;
    *(a1 + 0x54) = 0;
    __builtin_memset(a1 + 0x5c, 0, 0x40);
    *(a1 + 0xf8) = 0;
    *(a1 + 0x9c) = 0x3ff00000;
    *(a1 + 0xa4) = 0x3ff00000;
    return 0;
}
