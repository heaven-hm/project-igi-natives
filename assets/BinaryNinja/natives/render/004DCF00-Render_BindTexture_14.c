// Original IGI.EXE function: Render_BindTexture_14 (VA 0x004DCF00; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_14.h"
int32_t Render_BindTexture_14(int32_t a1, void* a2, double* a3)

{
    Render_SetupLighting_14(a2);
    return Render_ComputeNormals_14(a1, a2, a3);
}
