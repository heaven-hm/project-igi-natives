#include "004B3190-Sys_CloseFileStream_11.h"
/* 0x004b3190 Sys_CloseFileStream_11 full linked: callers=2 callees=1 */
double* sub_4b3190(int32_t a1, double* a2, double* a3)

{
    double var_18 = a3[2] * a2[1] - a2[2] * a3[1];
    double var_10 = -((a3[2] * *a2 - a2[2] * *a3));
    double var_8 = *a2 * a3[1] - *a3 * a2[1];
    memcpy(a1, &var_18, 0x18);
    return a2;
}
