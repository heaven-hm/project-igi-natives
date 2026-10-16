#include "gi_platform.h"
#include "004474E0-Env_UpdateCameraLens_8.h"
float* Env_UpdateCameraLens_8(void* a1)

{
    int16_t valA = DynObj_LookupHashItem_5();
    void* v_48 = a1;
    void* valA1 = QTask_FindType_2(v_48, valA);

    if (!valA1)
    {
        __builtin_memset(a1 + 0x2e8, 0, 0x18);
        (*(int32_t*)(uintptr_t)(a1 + 0x300)) = 0x3f800000;
        (*(int32_t*)(uintptr_t)(a1 + 0x304)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x308)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x30c)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x310)) = 0x3f800000;
        (*(int32_t*)(uintptr_t)(a1 + 0x314)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x318)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x31c)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x320)) = 0x3f800000;
        (*(int32_t*)(uintptr_t)(a1 + 0x324)) = 0;
        return 0x3f800000;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x2e8)) = (*(int32_t*)(uintptr_t)(a1 + 0xf0)) - *(valA1 + 0x20);
    (*(int32_t*)(uintptr_t)(a1 + 0x2f0)) = (*(int32_t*)(uintptr_t)(a1 + 0xf8)) - *(valA1 + 0x28);
    long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x100)) - *(valA1 + 0x30);
    (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = x87_r7_5;
    double v_30 = *(valA1 + 0x70) * (*(int32_t*)(uintptr_t)(a1 + 0x2e8)) + *(valA1 + 0x7c) * (*(int32_t*)(uintptr_t)(a1 + 0x2f0))
        + *(valA1 + 0x88) * x87_r7_5;
    double v_28 = *(valA1 + 0x74) * (*(int32_t*)(uintptr_t)(a1 + 0x2e8)) + *(valA1 + 0x8c) * x87_r7_5
        + *(valA1 + 0x80) * (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
    double v_20 = *(valA1 + 0x78) * (*(int32_t*)(uintptr_t)(a1 + 0x2e8)) + *(valA1 + 0x90) * x87_r7_5
        + *(valA1 + 0x84) * (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
    memcpy(a1 + 0x2e8, &v_30, 0x18);
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
    memcpy(a1 + 0x300, &v_30, 0x28);
    long double x87_r7_10 = (*(int32_t*)(uintptr_t)(a1 + 0x30c)) * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + (*(int32_t*)(uintptr_t)(a1 + 0x110)) * (*(int32_t*)(uintptr_t)(a1 + 0x300))
        + (*(int32_t*)(uintptr_t)(a1 + 0x118)) * (*(int32_t*)(uintptr_t)(a1 + 0x318));
    v_30 = x87_r7_10;
    long double x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0x310)) * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + (*(int32_t*)(uintptr_t)(a1 + 0x110)) * (*(int32_t*)(uintptr_t)(a1 + 0x304))
        + (*(int32_t*)(uintptr_t)(a1 + 0x31c)) * (*(int32_t*)(uintptr_t)(a1 + 0x118));
    int32_t v_c_1 = (*(int32_t*)(uintptr_t)(a1 + 0x324)) + (*(int32_t*)(uintptr_t)(a1 + 0x134)) + 1;
    *(&v_30 + 4) = x87_r7_14;
    long double x87_r7_18 = (*(int32_t*)(uintptr_t)(a1 + 0x314)) * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + (*(int32_t*)(uintptr_t)(a1 + 0x308)) * (*(int32_t*)(uintptr_t)(a1 + 0x110))
        + (*(int32_t*)(uintptr_t)(a1 + 0x320)) * (*(int32_t*)(uintptr_t)(a1 + 0x118));
    v_28 = x87_r7_18;
    long double x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x300)) * (*(int32_t*)(uintptr_t)(a1 + 0x11c)) + (*(int32_t*)(uintptr_t)(a1 + 0x124)) * (*(int32_t*)(uintptr_t)(a1 + 0x318))
        + (*(int32_t*)(uintptr_t)(a1 + 0x30c)) * (*(int32_t*)(uintptr_t)(a1 + 0x120));
    *(&v_28 + 4) = x87_r7_22;
    long double x87_r7_26 = (*(int32_t*)(uintptr_t)(a1 + 0x11c)) * (*(int32_t*)(uintptr_t)(a1 + 0x304)) + (*(int32_t*)(uintptr_t)(a1 + 0x31c)) * (*(int32_t*)(uintptr_t)(a1 + 0x124))
        + (*(int32_t*)(uintptr_t)(a1 + 0x310)) * (*(int32_t*)(uintptr_t)(a1 + 0x120));
    v_20 = x87_r7_26;
    long double x87_r7_30 = (*(int32_t*)(uintptr_t)(a1 + 0x308)) * (*(int32_t*)(uintptr_t)(a1 + 0x11c)) + (*(int32_t*)(uintptr_t)(a1 + 0x320)) * (*(int32_t*)(uintptr_t)(a1 + 0x124))
        + (*(int32_t*)(uintptr_t)(a1 + 0x314)) * (*(int32_t*)(uintptr_t)(a1 + 0x120));
    *(&v_20 + 4) = x87_r7_30;
    long double x87_r7_34 = (*(int32_t*)(uintptr_t)(a1 + 0x30c)) * (*(int32_t*)(uintptr_t)(a1 + 0x12c)) + (*(int32_t*)(uintptr_t)(a1 + 0x318)) * (*(int32_t*)(uintptr_t)(a1 + 0x130))
        + (*(int32_t*)(uintptr_t)(a1 + 0x300)) * (*(int32_t*)(uintptr_t)(a1 + 0x128));
    float v_18_1 = x87_r7_34;
    long double x87_r7_38 = (*(int32_t*)(uintptr_t)(a1 + 0x31c)) * (*(int32_t*)(uintptr_t)(a1 + 0x130)) + (*(int32_t*)(uintptr_t)(a1 + 0x310)) * (*(int32_t*)(uintptr_t)(a1 + 0x12c))
        + (*(int32_t*)(uintptr_t)(a1 + 0x128)) * (*(int32_t*)(uintptr_t)(a1 + 0x304));
    float v_14_1 = x87_r7_38;
    long double x87_r7_42 = (*(int32_t*)(uintptr_t)(a1 + 0x320)) * (*(int32_t*)(uintptr_t)(a1 + 0x130)) + (*(int32_t*)(uintptr_t)(a1 + 0x314)) * (*(int32_t*)(uintptr_t)(a1 + 0x12c))
        + (*(int32_t*)(uintptr_t)(a1 + 0x308)) * (*(int32_t*)(uintptr_t)(a1 + 0x128));
    float v_10_1 = x87_r7_42;
    memcpy(a1 + 0x300, &v_30, 0x28);
    return a1 + 0x300;
}
