// Original IGI.EXE function: Script_ParseEnumString_13 (VA 0x004F2D50; static CFG gate FAIL, CFG score 0.778).
#include "Script_ParseEnumString_13.h"
float* Script_ParseEnumString_13(void* a1)

{
    int16_t valA = DynObj_LookupHashItem_5();
    void* v_48 = a1;
    void* valA1 = QTask_FindType_2(v_48, valA);

    if (!valA1)
    {
        __builtin_memset(a1 + 0x158, 0, 0x18);
        *(a1 + 0x170) = 0x3f800000;
        *(a1 + 0x174) = 0;
        *(a1 + 0x178) = 0;
        *(a1 + 0x17c) = 0;
        *(a1 + 0x180) = 0x3f800000;
        *(a1 + 0x184) = 0;
        *(a1 + 0x188) = 0;
        *(a1 + 0x18c) = 0;
        *(a1 + 0x190) = 0x3f800000;
        *(a1 + 0x194) = 0;
        return 0x3f800000;
    }

    *(a1 + 0x158) = *(a1 + 0xf0) - *(valA1 + 0x20);
    *(a1 + 0x160) = *(a1 + 0xf8) - *(valA1 + 0x28);
    long double x87_r7_5 = *(a1 + 0x100) - *(valA1 + 0x30);
    *(a1 + 0x168) = x87_r7_5;
    double v_30 = *(valA1 + 0x70) * *(a1 + 0x158) + *(valA1 + 0x7c) * *(a1 + 0x160)
        + *(valA1 + 0x88) * x87_r7_5;
    double v_28 = *(valA1 + 0x74) * *(a1 + 0x158) + *(valA1 + 0x8c) * x87_r7_5
        + *(valA1 + 0x80) * *(a1 + 0x160);
    double v_20 = *(valA1 + 0x78) * *(a1 + 0x158) + *(valA1 + 0x90) * x87_r7_5
        + *(valA1 + 0x84) * *(a1 + 0x160);
    memcpy(a1 + 0x158, &v_30, 0x18);
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
    memcpy(a1 + 0x170, &v_30, 0x28);
    long double x87_r7_10 = *(a1 + 0x17c) * *(a1 + 0x10c) + *(a1 + 0x108) * *(a1 + 0x170)
        + *(a1 + 0x110) * *(a1 + 0x188);
    v_30 = x87_r7_10;
    long double x87_r7_14 = *(a1 + 0x180) * *(a1 + 0x10c) + *(a1 + 0x108) * *(a1 + 0x174)
        + *(a1 + 0x18c) * *(a1 + 0x110);
    int32_t v_c_1 = *(a1 + 0x194) + *(a1 + 0x12c) + 1;
    *(&v_30 + 4) = x87_r7_14;
    long double x87_r7_18 = *(a1 + 0x184) * *(a1 + 0x10c) + *(a1 + 0x178) * *(a1 + 0x108)
        + *(a1 + 0x190) * *(a1 + 0x110);
    v_28 = x87_r7_18;
    long double x87_r7_22 = *(a1 + 0x170) * *(a1 + 0x114) + *(a1 + 0x11c) * *(a1 + 0x188)
        + *(a1 + 0x17c) * *(a1 + 0x118);
    *(&v_28 + 4) = x87_r7_22;
    long double x87_r7_26 = *(a1 + 0x114) * *(a1 + 0x174) + *(a1 + 0x18c) * *(a1 + 0x11c)
        + *(a1 + 0x180) * *(a1 + 0x118);
    v_20 = x87_r7_26;
    long double x87_r7_30 = *(a1 + 0x178) * *(a1 + 0x114) + *(a1 + 0x190) * *(a1 + 0x11c)
        + *(a1 + 0x184) * *(a1 + 0x118);
    *(&v_20 + 4) = x87_r7_30;
    long double x87_r7_34 = *(a1 + 0x17c) * *(a1 + 0x124) + *(a1 + 0x188) * *(a1 + 0x128)
        + *(a1 + 0x170) * *(a1 + 0x120);
    float v_18_1 = x87_r7_34;
    long double x87_r7_38 = *(a1 + 0x18c) * *(a1 + 0x128) + *(a1 + 0x180) * *(a1 + 0x124)
        + *(a1 + 0x120) * *(a1 + 0x174);
    float v_14_1 = x87_r7_38;
    long double x87_r7_42 = *(a1 + 0x190) * *(a1 + 0x128) + *(a1 + 0x184) * *(a1 + 0x124)
        + *(a1 + 0x178) * *(a1 + 0x120);
    float v_10_1 = x87_r7_42;
    memcpy(a1 + 0x170, &v_30, 0x28);
    return a1 + 0x170;
}
