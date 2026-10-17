// Original IGI.EXE function: Env_UpdateCameraLens_10 (VA 0x00448570; static CFG gate FAIL, CFG score 0.833).
#include "Env_UpdateCameraLens_10.h"
double* Env_UpdateCameraLens_10(double* context, double* param_2, int32_t param_3)

{
    memcpy(param_3, &context[0xe], 0x28);
    double* result = WeaponType_UpdateAnim(param_2, context, 1);
    *param_2 = context[4] + *param_2;
    param_2[1] = context[5] + param_2[1];
    param_2[2] = context[6] + param_2[2];
    return result;
}
