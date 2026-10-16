#include "0042FDF0-Menu_FormatScreen_23.h"
/* 0x0042fdf0 Menu_FormatScreen_23 full linked: callers=1 callees=2 */
double* Menu_FormatScreen_23(double* a1, double* a2, int32_t a3)

{
    memcpy(a3, &a1[0xe], 0x28);
    double* result = WeaponType_UpdateAnim(a2, a1, 8);
    *a2 = a1[4] + *a2;
    a2[1] = a1[5] + a2[1];
    a2[2] = a1[6] + a2[2];
    return result;
}
