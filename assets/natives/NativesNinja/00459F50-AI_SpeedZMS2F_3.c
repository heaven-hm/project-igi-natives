#include "00459F50-AI_SpeedZMS2F_3.h"
/* 0x00459f50 AI_SpeedZMS2F_3 full linked: callers=1 callees=29 */
int32_t sub_459f50(int32_t a1)

{
    sub_45d360(a1);
    sub_460cf0(a1);
    sub_4ec1e0(a1 + 0x2ec, a1);
    long double x87_r7 = *(a1 + 0x200);
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
        *(a1 + 0xd00) ^= 1;

    *(a1 + 0x2f4) &= 0xfffeffff;
    sub_4610c0(a1);
    sub_464800(*(a1 + 0x4ec), a1);
    *(a1 + 0xd8) = 1;
    sub_4d2fb0(a1 + 0x514, a1 + 0x520, a1 + 0x68);
    long double x87_r6_3 = *(a1 + 0x80) * *(a1 + 0x528) + *(a1 + 0x7c) * *(a1 + 0x524)
        + *(a1 + 0x78) * *(a1 + 0x520);
    long double x87_r6_7 = *(a1 + 0x8c) * *(a1 + 0x528) + *(a1 + 0x88) * *(a1 + 0x524)
        + *(a1 + 0x84) * *(a1 + 0x520);
    long double x87_r6_10 = *(a1 + 0x98) * *(a1 + 0x528) + *(a1 + 0x94) * *(a1 + 0x524);
    long double x87_r5_11 = *(a1 + 0x90) * *(a1 + 0x520);
    *(a1 + 0x520) = x87_r6_3;
    *(a1 + 0x524) = x87_r6_7;
    *(a1 + 0x528) = x87_r6_10 + x87_r5_11;
    sub_4613d0(a1);

    if (*(a1 + 0x76c))
        sub_462cf0(a1);
    else
        sub_4614b0(a1);

    void* var_28_2 = *(a1 + 0x4ec);
    sub_464bd0(var_28_2, a1);
    int32_t __saved_ebp;
    sub_462e50(&__saved_ebp, a1, a1 + 0x520, a1);
    sub_463080(a1);
    sub_457810(a1);
    long double x87_r6_12 = *(a1 + 0x66c);
    long double temp1 = 0f;
    x87_r6_12 - temp1;
    long double x87_r6_13 = *(a1 + 0x66c);

    if (*(&((x87_r6_12 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, temp1) ? 1 : 0) << 0xa
            | (x87_r6_12 == temp1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_13 = -(x87_r6_13);

    var_28_2 = x87_r6_13 * 0.000244140625f * 30f;
    sub_460c80(a1, "Speed Z (m/s): %.2f\n");
    int32_t var_38_1 = sub_463680(a1);
    sub_460c80(a1, "Ground task: %x\n");
    int32_t var_44 = *(a1 + 0x76c);
    sub_460c80(a1, "Attach task: %x\n");
    var_28_2 = *(a1 + 0x728);
    sub_460c80(a1, "Delta move pos X: %.2f\n");
    var_28_2 = *(a1 + 0x72c);
    sub_460c80(a1, "Delta move pos Y: %.2f\n");
    var_28_2 = *(a1 + 0x730);
    sub_460c80(a1, "Delta move pos Z: %.2f\n");
    var_28_2 = *(a1 + 0x75c);
    sub_460c80(a1, "Delta move Alpha: %.2f\n");
    var_28_2 = *(a1 + 0x760);
    sub_460c80(a1, "Delta move Beta: %.2f\n");
    var_28_2 = *(a1 + 0x764);
    sub_460c80(a1, "Delta move Gamma: %.2f\n");
    var_28_2 = *(a1 + 0x710) * 0.000244140625;
    sub_460c80(a1, "Distance to ground from feet: %.2fm\n");
    var_28_2 = *(a1 + 0x718) * 57.2957764f;
    sub_460c80(a1, "Ground angle: %.3f\n");
    var_28_2 = *(a1 + 0x520);
    sub_460c80(a1, "Delta translation X: %.2f\n");
    var_28_2 = *(a1 + 0x524);
    sub_460c80(a1, "Delta translation Y: %.2f\n");
    var_28_2 = *(a1 + 0x528);
    sub_460c80(a1, "Delta translation Z: %.2f\n");
    char result = *(a1 + 0x2f4);

    if (!(result & 4))
        return result;

    return sub_460c80(a1, "Ground!\n");
}
