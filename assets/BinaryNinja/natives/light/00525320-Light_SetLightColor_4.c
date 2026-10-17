// Original IGI.EXE function: Light_SetLightColor_4 (VA 0x00525320; static CFG gate FAIL, CFG score 0.767).
#include "Light_SetLightColor_4.h"
int32_t Light_SetLightColor_4(int32_t* context)

{
    Qhash_Init(1);
    Sys_ExecuteBytecode_8(1);
    int16_t entity_1 = context[0xa];
    Sys_AllocateMemory_8(context, 0, entity_1 << 2, entity_1, *(context + 0x2a), 3, 0, 0xa808003c);
    Sys_ExecuteBytecode_8(0xffffffff);
    /* tailcall */
    return Qhash_Reset();
}
