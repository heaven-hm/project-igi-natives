#include "AI_CheckSector_22.h"
int32_t AI_CheckSector_22(void* a1)

{
    long double fpu7 = *(a1 + 0x1cc);
    long double f0 = *(a1 + 0x1d0);
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
        long double x87_r7_1 = *(a1 + 0x1d8);
        long double f1_1 = *(a1 + 0x1dc);
        x87_r7_1 - f1_1;
        result = (x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            result = 1;
            return result;
        }
    }

    result = 0;
    return result;
}
