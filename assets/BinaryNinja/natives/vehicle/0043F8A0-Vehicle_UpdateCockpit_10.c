// Original IGI.EXE function: Vehicle_UpdateCockpit_10 (VA 0x0043F8A0; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_UpdateCockpit_10.h"
int32_t Vehicle_UpdateCockpit_10(float a1)

{
    float v_28[0xa];
    Vehicle_DeployGear_10(&v_28, a1);
    float v_30;
    float v_2c;
    Sys_Atan2UndefinedInOrig(&v_28, &a1, &v_2c, &v_30);
    long double fpu7 = a1;
    long double f0 = 0f;
    fpu7 - f0;
    long double x87_r7_1 = a1;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    long double f1 = 0.0349065848f;
    x87_r7_1 - f1;
    int16_t result = (x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f1 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
    {
        result = 0;
        return result;
    }

    result = 1;
    return result;
}
