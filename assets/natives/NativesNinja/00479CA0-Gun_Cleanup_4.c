#include "00479CA0-Gun_Cleanup_4.h"
/* 0x00479ca0 Gun_Cleanup_4 full linked: callers=0 callees=2 */
void** sub_479ca0(void* a1, float* a2)

{
    float var_c;
    WeaponType_RegisterType_2(&var_c, a1, 0);
    *a2 = var_c + 143.360001f;
    float var_8;
    a2[1] = var_8 - 389.119995f;
    float var_4;
    a2[2] = var_4 - 20.4799995f;
    void** result = WeaponType_RegisterType_2(&var_c, a1, 1);
    long double x87_r7_7 = var_c - 409.600006f;
    a2[4] = var_8;
    a2[3] = x87_r7_7;
    a2[5] = var_4 + 40.9599991f;
    return result;
}
