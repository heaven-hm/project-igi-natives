// Original IGI.EXE function: Light_RenderLensflare_5 (VA 0x00525410; static CFG gate FAIL, CFG score 0.722).
#include "Light_RenderLensflare_5.h"
int32_t Light_RenderLensflare_5(void* context)

{
    Qhash_Init(1);
    int16_t entity_1 = *(context + 0x28);
    Sys_OpenFileStream_8(context, 0, entity_1 << 2, entity_1, *(context + 0x2a), 3, *(context + 0x24));
    /* tailcall */
    return Qhash_Reset();
}
