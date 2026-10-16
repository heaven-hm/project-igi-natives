#include "00462CF0-Human_AttachedMovement.h"
/* 0x00462cf0 Human_AttachedMovement full linked: callers=5 callees=3 */
int32_t sub_462cf0(void* a1)

{
    void* eax = *(a1 + 0x76c);
    long double x87_r7_3 = *(eax + 0x70) * *(a1 + 0x520) + *(a1 + 0x524) * *(eax + 0x7c)
        + *(a1 + 0x528) * *(eax + 0x88);
    long double x87_r6_7 = *(a1 + 0x524) * *(eax + 0x80) + *(eax + 0x74) * *(a1 + 0x520)
        + *(eax + 0x8c) * *(a1 + 0x528);
    float var_2c = x87_r6_7;
    long double x87_r6_11 = *(a1 + 0x524) * *(eax + 0x84) + *(eax + 0x78) * *(a1 + 0x520)
        + *(a1 + 0x528) * *(eax + 0x90);
    float var_28 = x87_r6_11;
    long double x87_r7_4 = x87_r7_3 + *(a1 + 0x770);
    *(a1 + 0x770) = x87_r7_4;
    long double x87_r6_13 = var_2c + *(a1 + 0x778);
    *(a1 + 0x778) = x87_r6_13;
    long double x87_r5_9 = var_28 + *(a1 + 0x780);
    *(a1 + 0x780) = x87_r5_9;
    double var_18 = *(eax + 0x74) * x87_r6_13 + *(eax + 0x70) * x87_r7_4 + *(eax + 0x78) * x87_r5_9;
    double var_10 = *(eax + 0x84) * x87_r5_9 + *(eax + 0x7c) * x87_r7_4 + *(eax + 0x80) * x87_r6_13;
    double var_8 = *(eax + 0x90) * x87_r5_9 + *(eax + 0x88) * x87_r7_4 + *(eax + 0x8c) * x87_r6_13;
    double var_30;
    memcpy(&var_30, &var_18, 0x18);
    var_30 = var_18 + *(eax + 0x20);
    var_28 = var_28 + *(eax + 0x28);
    double var_20;
    double var_20_1 = var_20 + *(eax + 0x30);
    float eax_1 = *(a1 + 0xa0);
    double* var_40 = &var_30;
    void* var_48 = Level_StartMission_4();
    return sub_4c6940(var_48, a1, var_40, eax_1);
}
