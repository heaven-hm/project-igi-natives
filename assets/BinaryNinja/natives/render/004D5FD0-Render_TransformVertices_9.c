// Original IGI.EXE function: Render_TransformVertices_9 (VA 0x004D5FD0; static CFG gate PASS, CFG score 1.000).
#include "Render_TransformVertices_9.h"
int32_t* Render_TransformVertices_9(int32_t* a1, int32_t a2, int32_t a3)

{
    *a1 = 0;
    a1[1] = a2;
    a1[2] = 0x3f800000;
    a1[3] = a3;
    return a1;
}
