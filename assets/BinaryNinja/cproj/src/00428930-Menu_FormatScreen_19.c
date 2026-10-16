#include "gi_platform.h"
#include "00428930-Menu_FormatScreen_19.h"
int32_t Menu_FormatScreen_19(void* a1)

{
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - (*(int32_t*)(uintptr_t)(a1 + 0x828));
    int32_t v_54 = 0x40c80000;
    double v_30 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - (*(int32_t*)(uintptr_t)(a1 + 0x830));
    long double x87_r6_3 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - (*(int32_t*)(uintptr_t)(a1 + 0x838));
    double v_28 = x87_r6_3;
    long double x87_r6_6 =
        x87_r6_3 * (*(int32_t*)(uintptr_t)(a1 + 0x850)) + v_30 * (*(int32_t*)(uintptr_t)(a1 + 0x848)) + x87_r7_1 * (*(int32_t*)(uintptr_t)(a1 + 0x840));
    double v_40 = x87_r6_6;
    double v_38 = x87_r6_6 * x87_r7_1;
    double v_30_1 = v_40 * v_30;
    double v_28_1 = v_40 * v_28;
    double v_20;
    memcpy(&v_20, &v_38, 0x18);
    Sys_AllocateMemory_11(&v_20, 0.0f);
    v_38 = v_20 + v_38;
    double v_18;
    double v_30_2 = v_18 + v_30_1;
    double v_10;
    double v_28_2 = v_10 + v_28_1;
    long double fpu0;
    long double fpu1;
    return Menu_RequestScreen_20(fpu0, fpu1, a1, &v_38);
}
