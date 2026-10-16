#include "gi_platform.h"
#include "004453E0-Env_CheckAmbientArea_7.h"
float* Env_CheckAmbientArea_7(void* a1)

{
    int16_t valA = DynObj_LookupHashItem_5();
    void* v_48 = a1;
    void* valA1 = QTask_FindType_2(v_48, valA);

    if (!valA1)
    {
        __builtin_memset(a1 + 0x130, 0, 0x18);
        (*(int32_t*)(uintptr_t)(a1 + 0x148)) = 0x3f800000;
        (*(int32_t*)(uintptr_t)(a1 + 0x14c)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x150)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x154)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x158)) = 0x3f800000;
        (*(int32_t*)(uintptr_t)(a1 + 0x15c)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x160)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x164)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x168)) = 0x3f800000;
        (*(int32_t*)(uintptr_t)(a1 + 0x16c)) = 0;
        return 0x3f800000;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x130)) = (*(int32_t*)(uintptr_t)(a1 + 0xf0)) - *(valA1 + 0x20);
    (*(int32_t*)(uintptr_t)(a1 + 0x138)) = (*(int32_t*)(uintptr_t)(a1 + 0xf8)) - *(valA1 + 0x28);
    long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x100)) - *(valA1 + 0x30);
    (*(int32_t*)(uintptr_t)(a1 + 0x140)) = x87_r7_5;
    double v_30 = *(valA1 + 0x70) * (*(int32_t*)(uintptr_t)(a1 + 0x130)) + *(valA1 + 0x7c) * (*(int32_t*)(uintptr_t)(a1 + 0x138))
        + *(valA1 + 0x88) * x87_r7_5;
    double v_28 = *(valA1 + 0x74) * (*(int32_t*)(uintptr_t)(a1 + 0x130)) + *(valA1 + 0x8c) * x87_r7_5
        + *(valA1 + 0x80) * (*(int32_t*)(uintptr_t)(a1 + 0x138));
    double v_20 = *(valA1 + 0x78) * (*(int32_t*)(uintptr_t)(a1 + 0x130)) + *(valA1 + 0x90) * x87_r7_5
        + *(valA1 + 0x84) * (*(int32_t*)(uintptr_t)(a1 + 0x138));
    memcpy(a1 + 0x130, &v_30, 0x18);
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
    long double x87_r7_10 = (*(int32_t*)(uintptr_t)(a1 + 0x154)) * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + (*(int32_t*)(uintptr_t)(a1 + 0x108)) * (*(int32_t*)(uintptr_t)(a1 + 0x148))
        + (*(int32_t*)(uintptr_t)(a1 + 0x110)) * (*(int32_t*)(uintptr_t)(a1 + 0x160));
    v_30 = x87_r7_10;
    long double x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0x158)) * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + (*(int32_t*)(uintptr_t)(a1 + 0x108)) * (*(int32_t*)(uintptr_t)(a1 + 0x14c))
        + (*(int32_t*)(uintptr_t)(a1 + 0x164)) * (*(int32_t*)(uintptr_t)(a1 + 0x110));
    int32_t v_c_1 = (*(int32_t*)(uintptr_t)(a1 + 0x16c)) + (*(int32_t*)(uintptr_t)(a1 + 0x12c)) + 1;
    *(&v_30 + 4) = x87_r7_14;
    long double x87_r7_18 = (*(int32_t*)(uintptr_t)(a1 + 0x15c)) * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + (*(int32_t*)(uintptr_t)(a1 + 0x150)) * (*(int32_t*)(uintptr_t)(a1 + 0x108))
        + (*(int32_t*)(uintptr_t)(a1 + 0x168)) * (*(int32_t*)(uintptr_t)(a1 + 0x110));
    v_28 = x87_r7_18;
    long double x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x148)) * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + (*(int32_t*)(uintptr_t)(a1 + 0x11c)) * (*(int32_t*)(uintptr_t)(a1 + 0x160))
        + (*(int32_t*)(uintptr_t)(a1 + 0x154)) * (*(int32_t*)(uintptr_t)(a1 + 0x118));
    *(&v_28 + 4) = x87_r7_22;
    long double x87_r7_26 = (*(int32_t*)(uintptr_t)(a1 + 0x114)) * (*(int32_t*)(uintptr_t)(a1 + 0x14c)) + (*(int32_t*)(uintptr_t)(a1 + 0x164)) * (*(int32_t*)(uintptr_t)(a1 + 0x11c))
        + (*(int32_t*)(uintptr_t)(a1 + 0x158)) * (*(int32_t*)(uintptr_t)(a1 + 0x118));
    v_20 = x87_r7_26;
    long double x87_r7_30 = (*(int32_t*)(uintptr_t)(a1 + 0x150)) * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + (*(int32_t*)(uintptr_t)(a1 + 0x168)) * (*(int32_t*)(uintptr_t)(a1 + 0x11c))
        + (*(int32_t*)(uintptr_t)(a1 + 0x15c)) * (*(int32_t*)(uintptr_t)(a1 + 0x118));
    *(&v_20 + 4) = x87_r7_30;
    long double x87_r7_34 = (*(int32_t*)(uintptr_t)(a1 + 0x154)) * (*(int32_t*)(uintptr_t)(a1 + 0x124)) + (*(int32_t*)(uintptr_t)(a1 + 0x160)) * (*(int32_t*)(uintptr_t)(a1 + 0x128))
        + (*(int32_t*)(uintptr_t)(a1 + 0x148)) * (*(int32_t*)(uintptr_t)(a1 + 0x120));
    float v_18_1 = x87_r7_34;
    long double x87_r7_38 = (*(int32_t*)(uintptr_t)(a1 + 0x164)) * (*(int32_t*)(uintptr_t)(a1 + 0x128)) + (*(int32_t*)(uintptr_t)(a1 + 0x158)) * (*(int32_t*)(uintptr_t)(a1 + 0x124))
        + (*(int32_t*)(uintptr_t)(a1 + 0x120)) * (*(int32_t*)(uintptr_t)(a1 + 0x14c));
    float v_14_1 = x87_r7_38;
    long double x87_r7_42 = (*(int32_t*)(uintptr_t)(a1 + 0x168)) * (*(int32_t*)(uintptr_t)(a1 + 0x128)) + (*(int32_t*)(uintptr_t)(a1 + 0x15c)) * (*(int32_t*)(uintptr_t)(a1 + 0x124))
        + (*(int32_t*)(uintptr_t)(a1 + 0x150)) * (*(int32_t*)(uintptr_t)(a1 + 0x120));
    float v_10_1 = x87_r7_42;
    memcpy(a1 + 0x148, &v_30, 0x28);
    return a1 + 0x148;
}
