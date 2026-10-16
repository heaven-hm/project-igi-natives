#include "gi_platform.h"
#include "004304B0-Vehicle_InitPlane.h"
long double Vehicle_InitPlane(float a1, int32_t a2)

{
    float valA = (*(int32_t*)(uintptr_t)(a1 + 0x72c));
    long double fpu7 = valA;
    long double f0 = 0.00999999978.0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_4 = valA;
        long double f1_1 = -0.00999999978.0f;
        x87_r7_4 - f1_1;

        if (*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1 && !(*(int32_t*)(uintptr_t)(a1 + a2 * 0x38 + 0x1bc)))
        {
            long double x87_r7_6 = valA + 0.5.0f;
            return x87_r7_6 + x87_r7_6;
        }
    }
    else if ((*(int32_t*)(uintptr_t)(a1 + a2 * 0x38 + 0x1bc)) == 1)
    {
        long double x87_r7_2 = 0.5.0f - valA;
        return x87_r7_2 + x87_r7_2;
    }

    return 1.0f;
}
