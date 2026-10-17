// Original IGI.EXE function: Render_SetupLighting_10 (VA 0x004D6580; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_10.h"
int32_t Render_SetupLighting_10(void* a1, int32_t a2, float a3)

{
    void* valA = Render_DrawBoneMesh_10(a1, a2);
    *(valA + 0x28) = g_a54658 * a3;
    return Render_ComputeNormals_10(valA);
}
