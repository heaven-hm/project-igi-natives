#include "004304B0-Vehicle_InitPlane.h"
/* 0x004304b0 Vehicle_InitPlane full linked: callers=2 callees=0 */
long double Vehicle_InitPlane(float a1, int32_t a2)

{
    float eax = *(a1 + 0x72c);
    long double x87_r7 = eax;
    long double temp0 = 0.00999999978f;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_4 = eax;
        long double temp1_1 = -0.00999999978f;
        x87_r7_4 - temp1_1;

        if (*(&((x87_r7_4 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1 && !*(a1 + a2 * 0x38 + 0x1bc))
        {
            long double x87_r7_6 = eax + 0.5f;
            return x87_r7_6 + x87_r7_6;
        }
    }
    else if (*(a1 + a2 * 0x38 + 0x1bc) == 1)
    {
        long double x87_r7_2 = 0.5f - eax;
        return x87_r7_2 + x87_r7_2;
    }

    return 1f;
}
