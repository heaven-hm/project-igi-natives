// Original IGI.EXE function: Render_DrawSplineMesh_9 (VA 0x004D5790; static CFG gate FAIL, CFG score 0.667).
#include "Render_DrawSplineMesh_9.h"
int32_t* Render_DrawSplineMesh_9(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    *context = param_2;
    context[1] = param_3;
    memcpy(&context[2], param_4, 0x14);
    return context;
}
