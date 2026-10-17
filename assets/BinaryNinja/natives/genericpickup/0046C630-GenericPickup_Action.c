// Original IGI.EXE function: GenericPickup_Action (VA 0x0046C630; static CFG gate PASS, CFG score 0.889).
#include "GenericPickup_Action.h"
int32_t GenericPickup_Action(void* a1, void* a2)

{
    long double fpu7 = *(a1 + 0x9c);
    long double fpu6 = *(a1 + 0xa0);
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    int32_t* valA1 = *(a1 + 0x6c);
    float v_30 = x87_r7_3;
    long double x87_r7_6 = Render_ComputeNormals(valA1) * v_30;
    v_30 = x87_r7_6;
    long double f0 = 2867.1999999999998;
    x87_r7_6 - f0;

    if (*(&((x87_r7_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f0) ? 1 : 0) << 0xa
        | (x87_r7_6 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        __builtin_strncpy(&v_30, "ffff", 4);
        int32_t v_2c_1 = 0x40a66666;
    }

    double v_20 = *(a1 + 0x20) - *(a2 + 8);
    double v_18 = *(a1 + 0x28) - *(a2 + 0x10);
    long double x87_r7_12 = *(a1 + 0x30) - *(a2 + 0x18);
    long double f1 = 0.0;
    x87_r7_12 - f1;

    if (*(&((x87_r7_12 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f1) ? 1 : 0) << 0xa
            | (x87_r7_12 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_12 = -(x87_r7_12);

    int32_t v_10 = 0;
    int32_t v_c = 0;
    long double fp0_1 = Sys_OpenFileStream_11(&v_20);
    long double f2 = v_30;
    fp0_1 - f2;
    int16_t result = (fp0_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2) ? 1 : 0) << 0xa
        | (fp0_1 == f2 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double x87_r7_14 = x87_r7_12;
        long double f3_1 = 4096.0;
        x87_r7_14 - f3_1;
        result = (x87_r7_14 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == f3_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
            *(a1 + 0x119) = 1;
    }

    return result;
}
