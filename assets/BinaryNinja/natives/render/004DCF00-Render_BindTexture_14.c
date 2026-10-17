// Original IGI.EXE function: Render_BindTexture_14 (VA 0x004DCF00; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_14.h"
int32_t Render_BindTexture_14(int32_t context, void* param_2, double* param_3)

{
    Render_SetupLighting_14(param_2);
    return Render_ComputeNormals_14(context, param_2, param_3);
}
