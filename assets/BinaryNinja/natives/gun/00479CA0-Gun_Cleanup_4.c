// Original IGI.EXE function: Gun_Cleanup_4 (VA 0x00479CA0; static CFG gate PASS, CFG score 1.000).
#include "Gun_Cleanup_4.h"
void** Gun_Cleanup_4(void* a1, float* a2)

{
    float v_c;
    WeaponType_RegisterType_2(&v_c, a1, 0);
    *a2 = v_c + 143.360001f;
    float v_8;
    a2[1] = v_8 - 389.119995f;
    float v_4;
    a2[2] = v_4 - 20.4799995f;
    void** result = WeaponType_RegisterType_2(&v_c, a1, 1);
    long double x87_r7_7 = v_c - 409.600006f;
    a2[4] = v_8;
    a2[3] = x87_r7_7;
    a2[5] = v_4 + 40.9599991f;
    return result;
}
