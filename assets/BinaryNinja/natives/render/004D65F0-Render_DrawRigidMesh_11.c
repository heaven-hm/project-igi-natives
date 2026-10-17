// Original IGI.EXE function: Render_DrawRigidMesh_11 (VA 0x004D65F0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawRigidMesh_11.h"
int32_t Render_DrawRigidMesh_11(int32_t context)

{
    int32_t result = context;
    int32_t source_1 = result * 0xc;

    if (*(source_1 + &g_a542f0))
    {
        Sys_ExecuteBytecode_2(*(source_1 + &g_a542f4));
        *(source_1 + &g_a542f4) = 0;
        result = Sys_ExecuteBytecode_2(*(source_1 + 0xa542f8));
        *(source_1 + &g_a542f0) = 0;
        *(source_1 + &g_a542f4) = 0;
        *(source_1 + 0xa542f8) = 0;
    }

    return result;
}
