// Original IGI.EXE function: Human_AttachedMovement (VA 0x00462CF0; static CFG gate PASS, CFG score 0.889).
#include "Human_AttachedMovement.h"
int32_t Human_AttachedMovement(void* a1)

{
    void* valA = *(a1 + 0x76c);
    long double x87_r7_3 = *(valA + 0x70) * *(a1 + 0x520) + *(a1 + 0x524) * *(valA + 0x7c)
        + *(a1 + 0x528) * *(valA + 0x88);
    long double x87_r6_7 = *(a1 + 0x524) * *(valA + 0x80) + *(valA + 0x74) * *(a1 + 0x520)
        + *(valA + 0x8c) * *(a1 + 0x528);
    float v_2c = x87_r6_7;
    long double x87_r6_11 = *(a1 + 0x524) * *(valA + 0x84) + *(valA + 0x78) * *(a1 + 0x520)
        + *(a1 + 0x528) * *(valA + 0x90);
    float v_28 = x87_r6_11;
    long double x87_r7_4 = x87_r7_3 + *(a1 + 0x770);
    *(a1 + 0x770) = x87_r7_4;
    long double x87_r6_13 = v_2c + *(a1 + 0x778);
    *(a1 + 0x778) = x87_r6_13;
    long double x87_r5_9 = v_28 + *(a1 + 0x780);
    *(a1 + 0x780) = x87_r5_9;
    double v_18 = *(valA + 0x74) * x87_r6_13 + *(valA + 0x70) * x87_r7_4 + *(valA + 0x78) * x87_r5_9;
    double v_10 = *(valA + 0x84) * x87_r5_9 + *(valA + 0x7c) * x87_r7_4 + *(valA + 0x80) * x87_r6_13;
    double v_8 = *(valA + 0x90) * x87_r5_9 + *(valA + 0x88) * x87_r7_4 + *(valA + 0x8c) * x87_r6_13;
    double v_30;
    memcpy(&v_30, &v_18, 0x18);
    v_30 = v_18 + *(valA + 0x20);
    v_28 = v_28 + *(valA + 0x28);
    double v_20;
    double v_20_1 = v_20 + *(valA + 0x30);
    float valA1 = *(a1 + 0xa0);
    double* v_40 = &v_30;
    void* v_48 = Level_StartMission_4();
    return WorldObject_CommitTransform(v_48, a1, v_40, valA1);
}
