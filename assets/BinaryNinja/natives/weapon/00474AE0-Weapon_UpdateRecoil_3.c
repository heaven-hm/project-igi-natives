// Original IGI.EXE function: Weapon_UpdateRecoil_3 (VA 0x00474AE0; static CFG gate FAIL, CFG score 0.778).
#include "Weapon_UpdateRecoil_3.h"
float* Weapon_UpdateRecoil_3(void* a1)

{
    int16_t valA = DynObj_LookupHashItem_5();
    void* v_48 = a1;
    void* valA1 = QTask_FindType_2(v_48, valA);

    if (!valA1)
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

    *(a1 + 0x130) = *(a1 + 0xf0) - *(valA1 + 0x20);
    *(a1 + 0x138) = *(a1 + 0xf8) - *(valA1 + 0x28);
    long double x87_r7_5 = *(a1 + 0x100) - *(valA1 + 0x30);
    *(a1 + 0x140) = x87_r7_5;
    double v_30 = *(valA1 + 0x88) * x87_r7_5 + *(valA1 + 0x70) * *(a1 + 0x130)
        + *(valA1 + 0x7c) * *(a1 + 0x138);
    double v_28 = *(valA1 + 0x74) * *(a1 + 0x130) + *(valA1 + 0x8c) * x87_r7_5
        + *(valA1 + 0x80) * *(a1 + 0x138);
    double v_20 = *(valA1 + 0x78) * *(a1 + 0x130) + *(valA1 + 0x90) * x87_r7_5
        + *(valA1 + 0x84) * *(a1 + 0x138);
    memcpy(a1 + 0x130, &v_30, 0x18);
    long double x87_r7_7 = *(a1 + 0x110);
    int32_t tmpD = *(valA1 + 0x7c);
    v_30 = *(valA1 + 0x70);
    int32_t objC1 = *(valA1 + 0x88);
    *(&v_30 + 4) = tmpD;
    v_28 = objC1;
    *(&v_28 + 4) = *(valA1 + 0x74);
    v_20 = *(valA1 + 0x80);
    *(&v_20 + 4) = *(valA1 + 0x8c);
    int32_t v_18 = *(valA1 + 0x78);
    int32_t v_14 = *(valA1 + 0x84);
    int32_t v_10 = *(valA1 + 0x90);
    int32_t v_c = *(valA1 + 0x94);
    memcpy(a1 + 0x148, &v_30, 0x28);
    v_30 = x87_r7_7 * *(a1 + 0x160) + *(a1 + 0x10c) * *(a1 + 0x154)
        + *(a1 + 0x108) * *(a1 + 0x148);
    long double x87_r7_14 = *(a1 + 0x10c) * *(a1 + 0x158) + *(a1 + 0x110) * *(a1 + 0x164)
        + *(a1 + 0x108) * *(a1 + 0x14c);
    int32_t v_c_1 = *(a1 + 0x16c) + *(a1 + 0x12c) + 1;
    *(&v_30 + 4) = x87_r7_14;
    long double x87_r7_18 = *(a1 + 0x10c) * *(a1 + 0x15c) + *(a1 + 0x110) * *(a1 + 0x168)
        + *(a1 + 0x108) * *(a1 + 0x150);
    v_28 = x87_r7_18;
    long double x87_r7_22 = *(a1 + 0x11c) * *(a1 + 0x160) + *(a1 + 0x114) * *(a1 + 0x148)
        + *(a1 + 0x154) * *(a1 + 0x118);
    *(&v_28 + 4) = x87_r7_22;
    long double x87_r7_26 = *(a1 + 0x164) * *(a1 + 0x11c) + *(a1 + 0x14c) * *(a1 + 0x114)
        + *(a1 + 0x158) * *(a1 + 0x118);
    v_20 = x87_r7_26;
    long double x87_r7_30 = *(a1 + 0x168) * *(a1 + 0x11c) + *(a1 + 0x150) * *(a1 + 0x114)
        + *(a1 + 0x15c) * *(a1 + 0x118);
    *(&v_20 + 4) = x87_r7_30;
    long double x87_r7_34 = *(a1 + 0x128) * *(a1 + 0x160) + *(a1 + 0x120) * *(a1 + 0x148)
        + *(a1 + 0x124) * *(a1 + 0x154);
    float v_18_1 = x87_r7_34;
    long double x87_r7_38 = *(a1 + 0x124) * *(a1 + 0x158) + *(a1 + 0x128) * *(a1 + 0x164)
        + *(a1 + 0x120) * *(a1 + 0x14c);
    float v_14_1 = x87_r7_38;
    long double x87_r7_42 = *(a1 + 0x124) * *(a1 + 0x15c) + *(a1 + 0x128) * *(a1 + 0x168)
        + *(a1 + 0x120) * *(a1 + 0x150);
    float v_10_1 = x87_r7_42;
    memcpy(a1 + 0x148, &v_30, 0x28);
    return a1 + 0x148;
}
