// Original IGI.EXE function: AI_AlertAllies_19 (VA 0x00463220; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_19.h"
int32_t AI_AlertAllies_19(void* context, float param_2)

{
    *(context + 0x50c) = param_2;
    *(context + 0x508) = param_2;
    Sys_DispatchOpcode_12(context + 0x78, param_2);
    return Render_DrawBoneMesh_7(context + 0x78, context + 0x68);
}
