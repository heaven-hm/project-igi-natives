#include "00444B30-Env_ActivateEntity_5.h"
/* 0x00444b30 Env_ActivateEntity_5 full linked: callers=5 callees=2 */
double* sub_444b30(double* a1, double* a2, int32_t a3)

{
    memcpy(a3, &a1[0xe], 0x28);
    double* result = WeaponType_UpdateAnim(a2, a1, 0);
    *a2 = a1[4] + *a2;
    a2[1] = a1[5] + a2[1];
    a2[2] = a1[6] + a2[2];
    return result;
}
