// Original IGI.EXE function: Render_DrawSplineMesh_10 (VA 0x004D64C0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawSplineMesh_10.h"
int32_t Render_DrawSplineMesh_10(void* context, int32_t param_2)

{
    return *(Render_DrawBoneMesh_10(context, param_2) + 4);
}
