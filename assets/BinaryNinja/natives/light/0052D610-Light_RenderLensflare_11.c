// Original IGI.EXE function: Light_RenderLensflare_11 (VA 0x0052D610; static CFG gate PASS, CFG score 1.000).
#include "Light_RenderLensflare_11.h"
int32_t Light_RenderLensflare_11(void* context, char* param_2)

{
    int32_t item_4 = *(context + 0x18);
    return Game_DataSymbolLoad(param_2, "%04d");
}
