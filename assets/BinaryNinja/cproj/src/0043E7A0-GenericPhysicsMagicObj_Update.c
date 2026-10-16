#include "gi_platform.h"
#include "0043E7A0-GenericPhysicsMagicObj_Update.h"
void* GenericPhysicsMagicObj_Update(void* a1, void* a2)

{
    double* objC = (*(int32_t*)(uintptr_t)(a2 + 4));
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - *objC;
    double v_10 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - objC[1];
    double v_8 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - objC[2];
    long double x87_r6_4 = v_10;
    long double fpu5 = v_8;
    float v_24 = fpu5 * (*(int32_t*)(uintptr_t)(a1 + 0x88)) + x87_r6_4 * (*(int32_t*)(uintptr_t)(a1 + 0x7c)) + x87_r7_1 * (*(int32_t*)(uintptr_t)(a1 + 0x70));
    long double x87_r4_5 = fpu5 * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
    long double x87_r3_5 = x87_r6_4 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
    float v_18 = v_24;
    float v_20 = x87_r4_5 + x87_r3_5 + x87_r7_1 * (*(int32_t*)(uintptr_t)(a1 + 0x74));
    float v_1c = fpu5 * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + x87_r6_4 * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + x87_r7_1 * (*(int32_t*)(uintptr_t)(a1 + 0x78));
    long double x87_r7_4 = v_1c;
    long double x87_r6_9 = v_20;
    long double x87_r5_4 = v_24;
    v_10 = v_1c;
    long double x87_r7_7 = (*(int32_t*)(uintptr_t)(*(a1 + 0x1b4) + 8)) * 200.0f
        / sqrtl(x87_r5_4 * x87_r5_4 + x87_r6_9 * x87_r6_9 + x87_r7_4 * x87_r7_4);
    v_18 = v_24 * x87_r7_7;
    float v_14_1 = v_20 * x87_r7_7;
    v_10 = v_10 * x87_r7_7;
    *(&v_10 + 4) = 0;
    v_8 = 0;
    *(&v_8 + 4) = 0;
    return ForceAccumulator_Add(a1 + 0xf0, &v_18);
}
