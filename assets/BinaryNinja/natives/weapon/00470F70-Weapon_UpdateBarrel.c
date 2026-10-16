#include "Weapon_UpdateBarrel.h"
void* Weapon_UpdateBarrel(void* a1, float* a2, float* a3, float a4)

{
    long double fpu7 = 1.0 / a4;
    *a2 = *(a1 + 0x48) * *a3 * fpu7;
    a2[1] = *(a1 + 0x4c) * a3[1] * fpu7;
    return a1;
}
