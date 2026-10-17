// Original IGI.EXE function: Menu_FormatScreen_23 (VA 0x0042FDF0; static CFG gate FAIL, CFG score 0.833).
#include "Menu_FormatScreen_23.h"
double* Menu_FormatScreen_23(double* context, double* param_2, int32_t param_3)

{
    memcpy(param_3, &context[0xe], 0x28);
    double* result = WeaponType_UpdateAnim(param_2, context, 8);
    *param_2 = context[4] + *param_2;
    param_2[1] = context[5] + param_2[1];
    param_2[2] = context[6] + param_2[2];
    return result;
}
