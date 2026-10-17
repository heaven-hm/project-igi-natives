// IGI native provenance: Display_SetGammaRamp_7 - 0x004950F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004950F0-Display_SetGammaRamp_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetGammaRamp_7.h"
int32_t* Display_SetGammaRamp_7(int32_t* context, int32_t* param_2, int32_t* param_3)

{
    *context = *param_2;
    context[1] = param_2[3];
    context[2] = param_2[6];
    context[3] = 0;
    context[4] = param_2[1];
    context[5] = param_2[4];
    context[6] = param_2[7];
    context[7] = 0;
    context[8] = param_2[2];
    context[9] = param_2[5];
    context[0xa] = param_2[8];
    context[0xb] = 0;

    if (!param_3)
    {
        context[0xc] = 0;
        context[0xd] = 0;
        context[0xe] = 0;
        context[0xf] = 0x3f800000;
        return context;
    }

    context[0xc] = *param_3;
    context[0xd] = param_3[1];
    context[0xe] = param_3[2];
    context[0xf] = 0x3f800000;
    return context;
}
