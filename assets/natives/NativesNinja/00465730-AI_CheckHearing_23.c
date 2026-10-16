#include "00465730-AI_CheckHearing_23.h"
/* 0x00465730 AI_CheckHearing_23 full linked: callers=1 callees=3 */
int32_t sub_465730(void* a1)

{
    char result = *(a1 + 0xd9);

    if (!result)
        return result;

    double var_18;
    sub_465800(&var_18, a1);
    long double x87_r7_1 = *(a1 + 0x1f0);
    long double x87_r6_1 = *(a1 + 0x1f4);
    long double x87_r5_1 = *(a1 + 0x1f8);
    float ecx_1 = *(a1 + 0xa0);
    float var_20_1 =
        x87_r5_1 * *(a1 + 0x8c) + x87_r6_1 * *(a1 + 0x88) + x87_r7_1 * *(a1 + 0x84);
    long double x87_r7_3 =
        x87_r5_1 * *(a1 + 0x98) + x87_r6_1 * *(a1 + 0x94) + x87_r7_1 * *(a1 + 0x90);
    var_18 =
        x87_r5_1 * *(a1 + 0x80) + x87_r6_1 * *(a1 + 0x7c) + x87_r7_1 * *(a1 + 0x78) + var_18;
    double var_10;
    double var_10_1 = var_20_1 + var_10;
    double var_8;
    double var_8_1 = x87_r7_3 + var_8;
    return sub_4c6940(Level_StartMission_4(), a1, &var_18, ecx_1);
}
