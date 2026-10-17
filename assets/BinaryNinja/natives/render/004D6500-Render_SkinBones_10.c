// Original IGI.EXE function: Render_SkinBones_10 (VA 0x004D6500; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_10.h"
long double Render_SkinBones_10(void* context, int32_t param_2)

{
    return *(Render_DrawBoneMesh_10(context, param_2) + 0x2c);
}
