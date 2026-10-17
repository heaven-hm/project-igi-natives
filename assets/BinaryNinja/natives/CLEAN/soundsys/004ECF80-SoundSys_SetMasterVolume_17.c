// IGI native provenance: SoundSys_SetMasterVolume_17 - 0x004ECF80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ECF80-SoundSys_SetMasterVolume_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetMasterVolume_17.h"
void* SoundSys_SetMasterVolume_17(float* context, void* param_2, float* param_3)

{
    float item_8 = -((param_3[2] * *(param_2 + 0x48) - *(param_2 + 0x50) * *param_3));
    long double fpu_val_7_9 = *(param_2 + 0x48) * param_3[1] - *param_3 * *(param_2 + 0x4c);
    *context = param_3[2] * *(param_2 + 0x4c) - *(param_2 + 0x50) * param_3[1];
    context[1] = item_8;
    context[2] = fpu_val_7_9;
    *context = *(param_2 + 0x18) + *context;
    context[1] = *(param_2 + 0x1c) + context[1];
    context[2] = *(param_2 + 0x20) + context[2];
    return param_2;
}
