#include "00520200-NoiseQTask_LoadParameters.h"
/* 0x00520200 NoiseQTask_LoadParameters full linked: callers=0 callees=4 */
int32_t sub_520200(void* a1)

{
    sub_4f1320(a1 + 0xd8);
    *(a1 + 0x38) = 0x3f800000;
    *(a1 + 0x48) = 0x3f800000;
    *(a1 + 0x58) = 0x3f800000;
    __builtin_memset(a1 + 0x20, 0, 0x18);
    __builtin_memset(a1 + 0x88, 0, 0x44);
    *(a1 + 0xd0) = 0;
    *(a1 + 0x3c) = 0;
    *(a1 + 0x40) = 0;
    *(a1 + 0x44) = 0;
    *(a1 + 0x4c) = 0;
    *(a1 + 0x50) = 0;
    *(a1 + 0x54) = 0;
    __builtin_memset(a1 + 0x5c, 0, 0x28);
    *(a1 + 0x128) = 0;
    *(a1 + 0xcc) = 0x3ff00000;
    *(a1 + 0xd4) = 0x3ff00000;
    return 0;
}
