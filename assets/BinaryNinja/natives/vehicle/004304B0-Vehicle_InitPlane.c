// Original IGI.EXE function: Vehicle_InitPlane (VA 0x004304B0; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_InitPlane.h"
long double Vehicle_InitPlane(float context, int32_t param_2)

{
    float data_val = *(context + 0x72c);
    long double fpu7 = data_val;
    long double f0 = 0.00999999978f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_4 = data_val;
        long double f1_1 = -0.00999999978f;
        fpu_val_7_4 - f1_1;

        if (*(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1 && !*(context + param_2 * 0x38 + 0x1bc))
        {
            long double fpu_val_7_6 = data_val + 0.5f;
            return fpu_val_7_6 + fpu_val_7_6;
        }
    }
    else if (*(context + param_2 * 0x38 + 0x1bc) == 1)
    {
        long double fpu_val_7_2 = 0.5f - data_val;
        return fpu_val_7_2 + fpu_val_7_2;
    }

    return 1.0f;
}
