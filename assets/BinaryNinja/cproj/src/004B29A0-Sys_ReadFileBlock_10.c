#include "gi_platform.h"
#include "004B29A0-Sys_ReadFileBlock_10.h"
int32_t Sys_ReadFileBlock_10(double* a1)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_CloseFileStream_10(a1);
    long double x87_r7_1 = 1.0 / fp0;
    *a1 = x87_r7_1 * *a1;
    a1[1] = x87_r7_1 * a1[1];
    return result;
}
