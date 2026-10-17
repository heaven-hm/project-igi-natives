// Original IGI.EXE function: Script_EvaluateCondition_29 (VA 0x004FC870; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_29.h"
int32_t Script_EvaluateCondition_29(float* context, void* param_2, float* param_3, float* param_4 )

{
    float item_c;
    SoundSys_SetMasterVolume_17(&item_c, param_2, param_3);
    float item_8;
    float item_4;
    long double fpu_val_7_3 = item_4 * context[2] + item_8 * context[1] + item_c * *context;
    *param_4 = fpu_val_7_3;
    long double f0 = 1.0f;
    fpu_val_7_3 - f0;

    if (!(*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        return 0;

    long double f1 = -1.0f;
    fpu_val_7_3 - f1;

    if (!(*(&((fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
        return 1;

    return 2;
}
