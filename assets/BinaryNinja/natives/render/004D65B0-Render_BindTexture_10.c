// Original IGI.EXE function: Render_BindTexture_10 (VA 0x004D65B0; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_10.h"
void* Render_BindTexture_10(void* context, int32_t param_2, int32_t param_3)

{
    void* result = Render_DrawBoneMesh_10(context, param_2);
    *(result + 0x2c) = param_3;
    return result;
}
