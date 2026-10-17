// Original IGI.EXE function: Menu_FormatScreen_23 (VA 0x0042FDF0; static CFG gate FAIL, CFG score 0.833).
#include "Menu_FormatScreen_23.h"
double* Menu_FormatScreen_23(double* a1, double* a2, int32_t a3)

{
    memcpy(a3, &a1[0xe], 0x28);
    double* result = WeaponType_UpdateAnim(a2, a1, 8);
    *a2 = a1[4] + *a2;
    a2[1] = a1[5] + a2[1];
    a2[2] = a1[6] + a2[2];
    return result;
}
