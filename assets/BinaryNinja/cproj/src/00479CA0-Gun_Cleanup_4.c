#include "gi_platform.h"
#include "00479CA0-Gun_Cleanup_4.h"
void** Gun_Cleanup_4(void* a1, float* a2)

{
    float v_c;
    WeaponType_RegisterType_2(&v_c, a1, 0);
    *a2 = v_c + 143.360001.0f;
    float v_8;
    a2[1] = v_8 - 389.119995.0f;
    float v_4;
    a2[2] = v_4 - 20.4799995.0f;
    void** result = WeaponType_RegisterType_2(&v_c, a1, 1);
    long double x87_r7_7 = v_c - 409.600006.0f;
    a2[4] = v_8;
    a2[3] = x87_r7_7;
    a2[5] = v_4 + 40.9599991.0f;
    return result;
}
