// Original IGI.EXE function: AI_AlertAllies_19 (VA 0x00463220; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_19.h"
int32_t AI_AlertAllies_19(void* a1, float a2)

{
    *(a1 + 0x50c) = a2;
    *(a1 + 0x508) = a2;
    Sys_DispatchOpcode_12(a1 + 0x78, a2);
    return Render_DrawBoneMesh_7(a1 + 0x78, a1 + 0x68);
}
