#include "00448570-Env_UpdateCameraLens_10.h"
/* 0x00448570 Env_UpdateCameraLens_10 full linked: callers=3 callees=2 */
double* sub_448570(double* a1, double* a2, int32_t a3)

{
    memcpy(a3, &a1[0xe], 0x28);
    double* result = WeaponType_UpdateAnim(a2, a1, 1);
    *a2 = a1[4] + *a2;
    a2[1] = a1[5] + a2[1];
    a2[2] = a1[6] + a2[2];
    return result;
}
