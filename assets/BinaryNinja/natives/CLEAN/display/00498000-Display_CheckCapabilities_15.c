// IGI native provenance: Display_CheckCapabilities_15 - 0x00498000 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498000-Display_CheckCapabilities_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CheckCapabilities_15.h"
float* Display_CheckCapabilities_15(float* context, float* param_2)

{
    long double fpu_val_7_1 = 1.0 / param_2[2];
    *context = *param_2 * g_bcab28 * fpu_val_7_1 + g_bcab30;
    context[1] = param_2[1] * g_bcab2c * fpu_val_7_1 + g_bcab34;
    return param_2;
}
