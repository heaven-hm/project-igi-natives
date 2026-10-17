// Original IGI.EXE function: Script_CallNativeHandler_23 (VA 0x004F9770; static CFG gate FAIL, CFG score 0.667).
#include "Script_CallNativeHandler_23.h"
double* Script_CallNativeHandler_23(double* a1, void* a2)

{
    void* valA = *(a2 + 0x134);

    if (!*(valA + 0x64))
    {
        memcpy(a1, a2 + 8, 0x18);
        *a1 = *(*(a2 + 0x134) + 0x20) + *a1;
        a1[1] = *(*(a2 + 0x134) + 0x28) + a1[1];
        a1[2] = *(*(a2 + 0x134) + 0x30) + a1[2];
        return a1;
    }

    void* tmpD = *(valA + 0x14);
    memcpy(a1, a2 + 8, 0x18);
    *a1 = *(*(a2 + 0x134) + 0x20) + *a1;
    a1[1] = *(*(a2 + 0x134) + 0x28) + a1[1];
    long double x87_r7_5 = *(*(a2 + 0x134) + 0x30) + a1[2];
    a1[2] = x87_r7_5;
    double v_20 = *(tmpD + 0x78) * x87_r7_5 + *(tmpD + 0x74) * a1[1] + *(tmpD + 0x70) * *a1;
    double v_18 = *(tmpD + 0x84) * x87_r7_5 + *(tmpD + 0x80) * a1[1] + *(tmpD + 0x7c) * *a1;
    double v_10 = *(tmpD + 0x90) * x87_r7_5 + *(tmpD + 0x8c) * a1[1] + *(tmpD + 0x88) * *a1;
    memcpy(a1, &v_20, 0x18);
    *a1 = *(tmpD + 0x20) + *a1;
    a1[1] = *(tmpD + 0x28) + a1[1];
    a1[2] = *(tmpD + 0x30) + a1[2];
    return a1;
}
