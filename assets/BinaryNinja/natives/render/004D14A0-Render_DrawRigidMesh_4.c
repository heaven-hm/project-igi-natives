// Original IGI.EXE function: Render_DrawRigidMesh_4 (VA 0x004D14A0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawRigidMesh_4.h"
void Render_DrawRigidMesh_4(int32_t* context, int32_t param_2)

{
    for (int32_t* i = context; i; i = *i)
        i[1](param_2);
}
