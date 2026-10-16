#include "gi_platform.h"
#include "00462CF0-Human_AttachedMovement.h"
int32_t Human_AttachedMovement(void* a1)

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x76c));
    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(valA + 0x70)) * (*(int32_t*)(uintptr_t)(a1 + 0x520)) + (*(int32_t*)(uintptr_t)(a1 + 0x524)) * (*(int32_t*)(uintptr_t)(valA + 0x7c))
        + (*(int32_t*)(uintptr_t)(a1 + 0x528)) * (*(int32_t*)(uintptr_t)(valA + 0x88));
    long double x87_r6_7 = (*(int32_t*)(uintptr_t)(a1 + 0x524)) * (*(int32_t*)(uintptr_t)(valA + 0x80)) + (*(int32_t*)(uintptr_t)(valA + 0x74)) * (*(int32_t*)(uintptr_t)(a1 + 0x520))
        + (*(int32_t*)(uintptr_t)(valA + 0x8c)) * (*(int32_t*)(uintptr_t)(a1 + 0x528));
    float v_2c = x87_r6_7;
    long double x87_r6_11 = (*(int32_t*)(uintptr_t)(a1 + 0x524)) * (*(int32_t*)(uintptr_t)(valA + 0x84)) + (*(int32_t*)(uintptr_t)(valA + 0x78)) * (*(int32_t*)(uintptr_t)(a1 + 0x520))
        + (*(int32_t*)(uintptr_t)(a1 + 0x528)) * (*(int32_t*)(uintptr_t)(valA + 0x90));
    float v_28 = x87_r6_11;
    long double x87_r7_4 = x87_r7_3 + (*(int32_t*)(uintptr_t)(a1 + 0x770));
    (*(int32_t*)(uintptr_t)(a1 + 0x770)) = x87_r7_4;
    long double x87_r6_13 = v_2c + (*(int32_t*)(uintptr_t)(a1 + 0x778));
    (*(int32_t*)(uintptr_t)(a1 + 0x778)) = x87_r6_13;
    long double x87_r5_9 = v_28 + (*(int32_t*)(uintptr_t)(a1 + 0x780));
    (*(int32_t*)(uintptr_t)(a1 + 0x780)) = x87_r5_9;
    double v_18 = (*(int32_t*)(uintptr_t)(valA + 0x74)) * x87_r6_13 + (*(int32_t*)(uintptr_t)(valA + 0x70)) * x87_r7_4 + (*(int32_t*)(uintptr_t)(valA + 0x78)) * x87_r5_9;
    double v_10 = (*(int32_t*)(uintptr_t)(valA + 0x84)) * x87_r5_9 + (*(int32_t*)(uintptr_t)(valA + 0x7c)) * x87_r7_4 + (*(int32_t*)(uintptr_t)(valA + 0x80)) * x87_r6_13;
    double v_8 = (*(int32_t*)(uintptr_t)(valA + 0x90)) * x87_r5_9 + (*(int32_t*)(uintptr_t)(valA + 0x88)) * x87_r7_4 + (*(int32_t*)(uintptr_t)(valA + 0x8c)) * x87_r6_13;
    double v_30;
    memcpy(&v_30, &v_18, 0x18);
    v_30 = v_18 + (*(int32_t*)(uintptr_t)(valA + 0x20));
    v_28 = v_28 + (*(int32_t*)(uintptr_t)(valA + 0x28));
    double v_20;
    double v_20_1 = v_20 + (*(int32_t*)(uintptr_t)(valA + 0x30));
    float valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    double* v_40 = &v_30;
    void* v_48 = Level_StartMission_4();
    return WorldObject_CommitTransform(v_48, a1, v_40, valA1);
}
