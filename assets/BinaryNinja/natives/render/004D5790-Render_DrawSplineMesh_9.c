// Original IGI.EXE function: Render_DrawSplineMesh_9 (VA 0x004D5790; static CFG gate FAIL, CFG score 0.667).
#include "Render_DrawSplineMesh_9.h"
int32_t* Render_DrawSplineMesh_9(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    *a1 = a2;
    a1[1] = a3;
    memcpy(&a1[2], a4, 0x14);
    return a1;
}
