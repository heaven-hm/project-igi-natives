#include "Light_SetLightColor_4.h"
int32_t Light_SetLightColor_4(int32_t* a1)

{
    Qhash_Init(1);
    Sys_ExecuteBytecode_8(1);
    int16_t objC1 = a1[0xa];
    Sys_AllocateMemory_8(a1, 0, objC1 << 2, objC1, *(a1 + 0x2a), 3, 0, 0xa808003c);
    Sys_ExecuteBytecode_8(0xffffffff);
    /* tailcall */
    return Qhash_Reset();
}
