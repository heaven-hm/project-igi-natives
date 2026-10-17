// IGI native provenance: Render_SetupLighting_5 - 0x004D3160 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D3160-Render_SetupLighting_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SetupLighting_5.h"
float* Render_SetupLighting_5(float* context, float* param_2, float* param_3, float param_4)

{
    float item_8_1 = (param_2[1] - param_3[1]) * param_4;
    float item_4_1 = (param_2[2] - param_3[2]) * param_4;
    *context = (*param_2 - *param_3) * param_4 + *param_3;
    context[1] = item_8_1 + param_3[1];
    context[2] = item_4_1 + param_3[2];
    return param_3;
}
