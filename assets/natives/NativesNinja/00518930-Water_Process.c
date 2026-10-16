#include "00518930-Water_Process.h"
/* 0x00518930 Water_Process full linked: callers=0 callees=2 */
int32_t sub_518930(void* a1, float a2)

{
    int32_t* esi = a2;
    double* eax = esi[2];
    long double x87_r7_2 = esi[1] * 0.5f / esi[3];
    long double x87_r6_3 = (*(a1 + 0x4be8) - *eax + esi[3]) * x87_r7_2;
    long double x87_r5_4 = (*(a1 + 0x4bf0) - eax[1] + esi[3]) * x87_r7_2;
    long double x87_r4_4 = (*(a1 + 0x4c00) - *eax + esi[3]) * x87_r7_2;
    float var_20 = x87_r4_4;
    float var_1c = x87_r5_4;
    float var_18 = x87_r6_3;
    long double x87_r7_4 = (*(a1 + 0x4c08) - eax[1] + esi[3]) * x87_r7_2;
    float var_14 = x87_r7_4;
    sub_4e5610(*esi, x87_r6_3, x87_r5_4, var_20, var_1c, var_18, var_14);
    return sub_4e5610(*esi, var_20, var_1c, var_18, var_14, x87_r4_4, x87_r7_4);
}
