#include "Door_Cleanup_2.h"
int32_t Door_Cleanup_2(void* a1, double* a2)

{
    long double fp0 = Sys_PushStack_11(a2, a1 + 0x20);
    long double fpu6 = a2[3];
    long double f0 = 0.0;
    fpu6 - f0;
    int16_t result = (fpu6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f0) ? 1 : 0) << 0xa
        | (fpu6 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double f1_1 = a2[3];
        fp0 - f1_1;
        result = (fp0 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fp0, f1_1) ? 1 : 0) << 0xa
            | (fp0 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            return result;
    }

    a2[3] = fp0;
    a2[4] = a1;
    return result;
}
