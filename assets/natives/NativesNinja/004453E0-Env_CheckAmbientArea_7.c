#include "004453E0-Env_CheckAmbientArea_7.h"
/* 0x004453e0 Env_CheckAmbientArea_7 full linked: callers=3 callees=6 */
float* sub_4453e0(void* a1)

{
    int16_t eax = sub_4c48c0();
    void* var_48 = a1;
    void* eax_1 = QTask_FindType_2(var_48, eax);

    if (!eax_1)
    {
        __builtin_memset(a1 + 0x130, 0, 0x18);
        *(a1 + 0x148) = 0x3f800000;
        *(a1 + 0x14c) = 0;
        *(a1 + 0x150) = 0;
        *(a1 + 0x154) = 0;
        *(a1 + 0x158) = 0x3f800000;
        *(a1 + 0x15c) = 0;
        *(a1 + 0x160) = 0;
        *(a1 + 0x164) = 0;
        *(a1 + 0x168) = 0x3f800000;
        *(a1 + 0x16c) = 0;
        return 0x3f800000;
    }

    *(a1 + 0x130) = *(a1 + 0xf0) - *(eax_1 + 0x20);
    *(a1 + 0x138) = *(a1 + 0xf8) - *(eax_1 + 0x28);
    long double x87_r7_5 = *(a1 + 0x100) - *(eax_1 + 0x30);
    *(a1 + 0x140) = x87_r7_5;
    double var_30 = *(eax_1 + 0x70) * *(a1 + 0x130) + *(eax_1 + 0x7c) * *(a1 + 0x138)
        + *(eax_1 + 0x88) * x87_r7_5;
    double var_28 = *(eax_1 + 0x74) * *(a1 + 0x130) + *(eax_1 + 0x8c) * x87_r7_5
        + *(eax_1 + 0x80) * *(a1 + 0x138);
    double var_20 = *(eax_1 + 0x78) * *(a1 + 0x130) + *(eax_1 + 0x90) * x87_r7_5
        + *(eax_1 + 0x84) * *(a1 + 0x138);
    memcpy(a1 + 0x130, &var_30, 0x18);
    int32_t edx = *(eax_1 + 0x7c);
    var_30 = *(eax_1 + 0x70);
    int32_t ecx_1 = *(eax_1 + 0x88);
    *(&var_30 + 4) = edx;
    var_28 = ecx_1;
    *(&var_28 + 4) = *(eax_1 + 0x74);
    var_20 = *(eax_1 + 0x80);
    *(&var_20 + 4) = *(eax_1 + 0x8c);
    int32_t var_18 = *(eax_1 + 0x78);
    int32_t var_14 = *(eax_1 + 0x84);
    int32_t var_10 = *(eax_1 + 0x90);
    int32_t var_c = *(eax_1 + 0x94);
    memcpy(a1 + 0x148, &var_30, 0x28);
    long double x87_r7_10 = *(a1 + 0x154) * *(a1 + 0x10c) + *(a1 + 0x108) * *(a1 + 0x148)
        + *(a1 + 0x110) * *(a1 + 0x160);
    var_30 = x87_r7_10;
    long double x87_r7_14 = *(a1 + 0x158) * *(a1 + 0x10c) + *(a1 + 0x108) * *(a1 + 0x14c)
        + *(a1 + 0x164) * *(a1 + 0x110);
    int32_t var_c_1 = *(a1 + 0x16c) + *(a1 + 0x12c) + 1;
    *(&var_30 + 4) = x87_r7_14;
    long double x87_r7_18 = *(a1 + 0x15c) * *(a1 + 0x10c) + *(a1 + 0x150) * *(a1 + 0x108)
        + *(a1 + 0x168) * *(a1 + 0x110);
    var_28 = x87_r7_18;
    long double x87_r7_22 = *(a1 + 0x148) * *(a1 + 0x114) + *(a1 + 0x11c) * *(a1 + 0x160)
        + *(a1 + 0x154) * *(a1 + 0x118);
    *(&var_28 + 4) = x87_r7_22;
    long double x87_r7_26 = *(a1 + 0x114) * *(a1 + 0x14c) + *(a1 + 0x164) * *(a1 + 0x11c)
        + *(a1 + 0x158) * *(a1 + 0x118);
    var_20 = x87_r7_26;
    long double x87_r7_30 = *(a1 + 0x150) * *(a1 + 0x114) + *(a1 + 0x168) * *(a1 + 0x11c)
        + *(a1 + 0x15c) * *(a1 + 0x118);
    *(&var_20 + 4) = x87_r7_30;
    long double x87_r7_34 = *(a1 + 0x154) * *(a1 + 0x124) + *(a1 + 0x160) * *(a1 + 0x128)
        + *(a1 + 0x148) * *(a1 + 0x120);
    float var_18_1 = x87_r7_34;
    long double x87_r7_38 = *(a1 + 0x164) * *(a1 + 0x128) + *(a1 + 0x158) * *(a1 + 0x124)
        + *(a1 + 0x120) * *(a1 + 0x14c);
    float var_14_1 = x87_r7_38;
    long double x87_r7_42 = *(a1 + 0x168) * *(a1 + 0x128) + *(a1 + 0x15c) * *(a1 + 0x124)
        + *(a1 + 0x150) * *(a1 + 0x120);
    float var_10_1 = x87_r7_42;
    memcpy(a1 + 0x148, &var_30, 0x28);
    return a1 + 0x148;
}
