// Original IGI.EXE function: Render_SkinBones_5 (VA 0x004D2F80; static CFG gate FAIL, CFG score 0.667).
#include "Render_SkinBones_5.h"
void* Render_SkinBones_5(void* context, void* param_2)

{
    memset(context, 0, 0x84);
    *(context + 0x78) = 0;
    *(context + 0x74) = param_2;
    *(context + 0x7c) = *(param_2 + 0x78);
    *(param_2 + 0x78) = context;
    return param_2;
}
