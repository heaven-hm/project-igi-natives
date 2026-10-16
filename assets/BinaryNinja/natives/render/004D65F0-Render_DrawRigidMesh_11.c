#include "Render_DrawRigidMesh_11.h"
int32_t Render_DrawRigidMesh_11(int32_t a1)

{
    int32_t result = a1;
    int32_t srcS1 = result * 0xc;

    if (*(srcS1 + &g_a542f0))
    {
        Sys_ExecuteBytecode_2(*(srcS1 + &g_a542f4));
        *(srcS1 + &g_a542f4) = 0;
        result = Sys_ExecuteBytecode_2(*(srcS1 + 0xa542f8));
        *(srcS1 + &g_a542f0) = 0;
        *(srcS1 + &g_a542f4) = 0;
        *(srcS1 + 0xa542f8) = 0;
    }

    return result;
}
