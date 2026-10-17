// Original IGI.EXE function: Light_RenderLensflare_5 (VA 0x00525410; static CFG gate FAIL, CFG score 0.722).
#include "Light_RenderLensflare_5.h"
int32_t Light_RenderLensflare_5(void* a1)

{
    Qhash_Init(1);
    int16_t objC1 = *(a1 + 0x28);
    Sys_OpenFileStream_8(a1, 0, objC1 << 2, objC1, *(a1 + 0x2a), 3, *(a1 + 0x24));
    /* tailcall */
    return Qhash_Reset();
}
