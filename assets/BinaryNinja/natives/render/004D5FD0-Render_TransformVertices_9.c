// Original IGI.EXE function: Render_TransformVertices_9 (VA 0x004D5FD0; static CFG gate PASS, CFG score 1.000).
#include "Render_TransformVertices_9.h"
int32_t* Render_TransformVertices_9(int32_t* context, int32_t param_2, int32_t param_3)

{
    *context = 0;
    context[1] = param_2;
    context[2] = 0x3f800000;
    context[3] = param_3;
    return context;
}
