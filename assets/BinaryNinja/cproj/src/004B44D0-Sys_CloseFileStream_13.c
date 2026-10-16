#include "gi_platform.h"
#include "004B44D0-Sys_CloseFileStream_13.h"
float* Sys_CloseFileStream_13(float a1, float* a2, float* a3, float* a4, float* a5)

{
    char* srcS = a1;
    *srcS = 0;
    long double fp0 = Sys_ExecuteBytecode_13(a4, a5);
    a1 = fp0;
    long double f0 = 0.0f;
    fp0 - f0;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_1 = a1;
        long double f2_1 = -9.99999994e-09.0f;
        x87_r7_1 - f2_1;

        if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
            a1 = 0.0f;
        else
        {
            a1 = -(a1);
            *srcS = 1;
        }
    }

    long double fp0_1 = Sys_DispatchOpcode_9(a1);
    float* result = a2;
    *result = fp0_1;
    long double f1 = 0.0f;
    fp0_1 - f1;
    result = (fp0_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f1) ? 1 : 0) << 0xa
        | (fp0_1 == f1 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
        *a3 = 1.0f;
        return result;
    }

    long double fp0_2;
    bool c1;
    bool c2_3;
    fp0_2 = __fsin(fp0_1);
    *a3 = 1.0f / fp0_2;
    return result;
}
