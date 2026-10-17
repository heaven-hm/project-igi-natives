// IGI native provenance: Light_SampleLightmap_9 - 0x0052D2B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D2B0-Light_SampleLightmap_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SampleLightmap_9.h"
int32_t Light_SampleLightmap_9(int32_t* context, int32_t* param_2, int32_t* param_3, int32_t* param_4, int32_t* param_5, int32_t* param_6)

{
    *context = *param_2;
    context[1] = param_2[1];
    context[2] = param_2[2];
    context[3] = *param_2;
    context[4] = param_2[1];
    context[5] = param_2[2];
    context[6] = *param_3;
    context[7] = param_3[1];
    context[8] = param_3[2];
    context[9] = *param_4;
    context[0xa] = param_4[1];
    context[0xb] = param_4[2];
    context[0xc] = *param_5;
    context[0xd] = param_5[1];
    context[0xe] = param_5[2];
    context[0xf] = *param_6;
    context[0x10] = param_6[1];
    context[0x11] = param_6[2];
    return Light_ComputeDirectional(context);
}
