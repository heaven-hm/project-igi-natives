#include "00451470-AI_CheckVisibility_3.h"
/* 0x00451470 AI_CheckVisibility_3 full linked: callers=2 callees=4 */
int32_t sub_451470(void* a1)

{
    long double x87_r7 = *(a1 + 0x34);
    long double x87_r6 = *(a1 + 0x40);
    long double x87_r5 = *(a1 + 0x4c);
    double var_18 = *(a1 + 0x70) * x87_r5 + *(a1 + 0x64) * x87_r6 + *(a1 + 0x58) * x87_r7;
    double var_10 = *(a1 + 0x74) * x87_r5 + *(a1 + 0x68) * x87_r6 + *(a1 + 0x5c) * x87_r7;
    double* var_24 = &var_18;
    double var_8 = *(a1 + 0x78) * x87_r5 + *(a1 + 0x6c) * x87_r6 + *(a1 + 0x60) * x87_r7;
    memcpy(&var_18, &var_18, 0x18);
    var_18 = 0;
    *(&var_18 + 4) = 0;

    if (!sub_4b3320(var_24))
        sub_4b3100(&var_18);

    int32_t __saved_esi_2 = *(&var_10 + 4);
    sub_4b28a0(var_10);
    long double x87_r7_2 = var_8;
    long double temp0 = 0.0;
    x87_r7_2 - temp0;
    return (x87_r7_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp0 ? 1 : 0) << 0xe;
}
