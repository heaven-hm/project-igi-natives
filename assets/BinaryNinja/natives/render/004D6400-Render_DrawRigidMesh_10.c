// Original IGI.EXE function: Render_DrawRigidMesh_10 (VA 0x004D6400; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawRigidMesh_10.h"
int32_t Render_DrawRigidMesh_10(int32_t a1)

{
    int32_t* srcS = g_a54654;
    int32_t tmpD = *(srcS + a1);
    int32_t result = g_a54648 - 1;
    g_a54648 = result;

    if (tmpD != result)
    {
        int32_t objC1 = g_a54644;
        result = *(objC1 + (result << 2)) * g_a54650 + g_a54640;
        int32_t dstD2 = *(objC1 + (tmpD << 2));
        int32_t srcS1 = *(srcS + result);
        *(objC1 + (tmpD << 2)) = *(objC1 + (srcS1 << 2));
        *(g_a54644 + (srcS1 << 2)) = dstD2;
        *(g_a54654 + result) = tmpD;
    }

    return result;
}
