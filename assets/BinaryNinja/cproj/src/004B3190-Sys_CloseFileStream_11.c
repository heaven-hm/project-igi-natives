#include "gi_platform.h"
#include "004B3190-Sys_CloseFileStream_11.h"
double* Sys_CloseFileStream_11(int32_t a1, double* a2, double* a3)

{
    double v_18 = a3[2] * a2[1] - a2[2] * a3[1];
    double v_10 = -((a3[2] * *a2 - a2[2] * *a3));
    double v_8 = *a2 * a3[1] - *a3 * a2[1];
    memcpy(a1, &v_18, 0x18);
    return a2;
}
