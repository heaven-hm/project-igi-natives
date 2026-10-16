#include "Camera_ApplyPostProcess_13.h"
long double Camera_ApplyPostProcess_13(double a1, int32_t* a2)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    long double fpu7 = a1;
    long double f0 = 0.0;
    fpu7 - f0;
    int32_t srcS;

    if (TEST_BITB(
        *(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1),
        6))
    {
        srcS = 0;
        v_c = 0;
    }
    else if (*(&a1 + 6) & 0x7ff0 || (!(*(&a1 + 4) & 0xfffff) && !a1))
    {
        int32_t v_1c_2 = 0;
        v_1c_2 = a1;
        v_c = Camera_ApplyHandiCam_13(v_1c_2, 0, 0);
        srcS = (*(&a1 + 6) >> 4 & 0x7ff) - 0x3fe;
    }
    else
    {
        long double x87_r7_2 = a1;
        long double f1_1 = 0.0;
        x87_r7_2 - f1_1;
        srcS = 0xfffffc03;
        int32_t valA1;

        valA1 = !TEST_BITB(
            *(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1),
            0) ? 0 : 1;

        while (!(*(&a1 + 6) & 0x10))
        {
            *(&a1 + 4) <<= 1;

            if (*(&a1 + 3) & 0x80)
                *(&a1 + 4) |= 1;

            a1 <<= 1;
            srcS -= 1;
        }

        *(&a1 + 6) &= 0xffef;

        if (valA1)
            *(&a1 + 7) |= 0x80;

        int32_t v_1c_1 = 0;
        v_1c_1 = a1;
        v_c = Camera_ApplyHandiCam_13(v_1c_1, 0, 0);
    }

    *a2 = srcS;
    return v_c;
}
