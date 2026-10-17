// IGI native provenance: Light_SetLightColor_4 - 0x00525320 - CFG score 76.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00525320-Light_SetLightColor_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
