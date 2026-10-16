#include "004F9770-Script_CallNativeHandler_23.h"
/* 0x004f9770 Script_CallNativeHandler_23 full linked: callers=33 callees=3 */
double* sub_4f9770(double* a1, void* a2)

{
    void* eax = *(a2 + 0x134);

    if (!*(eax + 0x64))
    {
        memcpy(a1, a2 + 8, 0x18);
        *a1 = *(*(a2 + 0x134) + 0x20) + *a1;
        a1[1] = *(*(a2 + 0x134) + 0x28) + a1[1];
        a1[2] = *(*(a2 + 0x134) + 0x30) + a1[2];
        return a1;
    }

    void* edx = *(eax + 0x14);
    memcpy(a1, a2 + 8, 0x18);
    *a1 = *(*(a2 + 0x134) + 0x20) + *a1;
    a1[1] = *(*(a2 + 0x134) + 0x28) + a1[1];
    long double x87_r7_5 = *(*(a2 + 0x134) + 0x30) + a1[2];
    a1[2] = x87_r7_5;
    double var_20 = *(edx + 0x78) * x87_r7_5 + *(edx + 0x74) * a1[1] + *(edx + 0x70) * *a1;
    double var_18 = *(edx + 0x84) * x87_r7_5 + *(edx + 0x80) * a1[1] + *(edx + 0x7c) * *a1;
    double var_10 = *(edx + 0x90) * x87_r7_5 + *(edx + 0x8c) * a1[1] + *(edx + 0x88) * *a1;
    memcpy(a1, &var_20, 0x18);
    *a1 = *(edx + 0x20) + *a1;
    a1[1] = *(edx + 0x28) + a1[1];
    a1[2] = *(edx + 0x30) + a1[2];
    return a1;
}
