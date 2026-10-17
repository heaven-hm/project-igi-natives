// IGI native provenance: Display_SetGammaRamp_15 - 0x00498040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498040-Display_SetGammaRamp_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetGammaRamp_15.h"
float* Display_SetGammaRamp_15(float* context, float* param_2, float param_3)

{
    long double fpu7 = 1.0 / param_3;
    *context = *param_2 * g_bcab28 * fpu7;
    context[1] = param_2[1] * g_bcab2c * fpu7;
    return param_2;
}
