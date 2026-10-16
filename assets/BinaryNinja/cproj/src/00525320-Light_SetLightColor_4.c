#include "gi_platform.h"
#include "00525320-Light_SetLightColor_4.h"
void Light_SetLightColor_4(int32_t* a1)

{
    Qhash_Init(1);
    Sys_ExecuteBytecode_8(1);
    int16_t objC1 = a1[0xa];
    Sys_AllocateMemory_8(a1, 0, objC1 << 2, objC1, (*(int32_t*)(uintptr_t)(a1 + 0x2a)), 3, 0, 0xa808003c);
    Sys_ExecuteBytecode_8(0xffffffff);
    Qhash_Reset();
    return;
}
