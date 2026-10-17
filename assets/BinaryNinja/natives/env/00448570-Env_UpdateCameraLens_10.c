// Original IGI.EXE function: Env_UpdateCameraLens_10 (VA 0x00448570; static CFG gate FAIL, CFG score 0.833).
#include "Env_UpdateCameraLens_10.h"
double* Env_UpdateCameraLens_10(double* a1, double* a2, int32_t a3)

{
    memcpy(a3, &a1[0xe], 0x28);
    double* result = WeaponType_UpdateAnim(a2, a1, 1);
    *a2 = a1[4] + *a2;
    a2[1] = a1[5] + a2[1];
    a2[2] = a1[6] + a2[2];
    return result;
}
