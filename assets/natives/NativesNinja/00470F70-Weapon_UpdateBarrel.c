#include "00470F70-Weapon_UpdateBarrel.h"
/* 0x00470f70 Weapon_UpdateBarrel full linked: callers=1 callees=0 */
void* sub_470f70(void* a1, float* a2, float* a3, float a4)

{
    long double x87_r7 = 1.0 / a4;
    *a2 = *(a1 + 0x48) * *a3 * x87_r7;
    a2[1] = *(a1 + 0x4c) * a3[1] * x87_r7;
    return a1;
}
