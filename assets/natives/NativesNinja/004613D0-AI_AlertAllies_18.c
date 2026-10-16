#include "004613D0-AI_AlertAllies_18.h"
/* 0x004613d0 AI_AlertAllies_18 full linked: callers=5 callees=2 */
int32_t sub_4613d0(void* a1)

{
    *(a1 + 0x538) = 0xffffffff;
    sub_4d3210(a1 + 0x534, a1 + 0x68);
    int32_t result = *(a1 + 0x538);

    if (result == 0xffffffff)
        return result;

    long double x87_r7_4 = *(a1 + 0x80) * *(a1 + 0x54c) + *(a1 + 0x7c) * *(a1 + 0x548)
        + *(a1 + 0x78) * *(a1 + 0x544);
    long double x87_r6_8 = *(a1 + 0x8c) * *(a1 + 0x54c) + *(a1 + 0x88) * *(a1 + 0x548)
        + *(a1 + 0x84) * *(a1 + 0x544);
    long double x87_r6_12 = *(a1 + 0x98) * *(a1 + 0x54c) + *(a1 + 0x94) * *(a1 + 0x548)
        + *(a1 + 0x90) * *(a1 + 0x544);
    double var_18 = x87_r7_4 + *(a1 + 0x20);
    double var_10_1 = x87_r6_8 + *(a1 + 0x28);
    double var_8_1 = x87_r6_12 + *(a1 + 0x30);
    return sub_4ec0e0(result, a1, &var_18);
}
