#include "Human_SetParent.h"
void* Human_SetParent(void* a1, void* a2)

{
    long double fpu7 = *(a1 + 0x20);
    *(a1 + 0x76c) = a2;
    long double x87_r7_1 = fpu7 - *(a2 + 0x20);
    long double x87_r6_1 = *(a1 + 0x28) - *(a2 + 0x28);
    long double x87_r5_1 = *(a1 + 0x30) - *(a2 + 0x30);
    double v_50 =
        *(a2 + 0x7c) * x87_r6_1 + *(a2 + 0x88) * x87_r5_1 + *(a2 + 0x70) * x87_r7_1;
    int32_t v_48 =
        *(a2 + 0x80) * x87_r6_1 + *(a2 + 0x8c) * x87_r5_1 + *(a2 + 0x74) * x87_r7_1;
    double v_40 =
        *(a2 + 0x84) * x87_r6_1 + *(a2 + 0x90) * x87_r5_1 + *(a2 + 0x78) * x87_r7_1;
    memcpy(a1 + 0x770, &v_50, 0x18);
    long double x87_r7_3 = *(a2 + 0x70);
    long double x87_r6_3 = *(a2 + 0x74);
    long double x87_r5_3 = *(a2 + 0x78);
    long double x87_r4_14 = x87_r6_3 * *(a1 + 0x7c) + x87_r5_3 * *(a1 + 0x80);
    long double x87_r3_15 = x87_r7_3 * *(a1 + 0x78);
    *(&v_50 + 4) = *(a2 + 0x7c);
    int32_t objC1 = *(a2 + 0x88);
    v_40 = *(a2 + 0x80);
    *(&v_40 + 4) = *(a2 + 0x8c);
    float objC4 = *(a2 + 0x84);
    float v_28 = x87_r4_14 + x87_r3_15;
    float objC5 = *(a2 + 0x90);
    float v_24 =
        v_40 * *(a1 + 0x7c) + objC4 * *(a1 + 0x80) + *(&v_50 + 4) * *(a1 + 0x78);
    int32_t v_4 = *(a1 + 0x9c) + *(a2 + 0x94) + 1;
    float v_20 =
        *(&v_40 + 4) * *(a1 + 0x7c) + objC5 * *(a1 + 0x80) + objC1 * *(a1 + 0x78);
    float v_1c =
        x87_r5_3 * *(a1 + 0x8c) + x87_r7_3 * *(a1 + 0x84) + x87_r6_3 * *(a1 + 0x88);
    float v_18 =
        objC4 * *(a1 + 0x8c) + *(&v_50 + 4) * *(a1 + 0x84) + v_40 * *(a1 + 0x88);
    float v_14 =
        objC5 * *(a1 + 0x8c) + objC1 * *(a1 + 0x84) + *(&v_40 + 4) * *(a1 + 0x88);
    float v_10 =
        x87_r6_3 * *(a1 + 0x94) + x87_r5_3 * *(a1 + 0x98) + x87_r7_3 * *(a1 + 0x90);
    float v_c =
        v_40 * *(a1 + 0x94) + objC4 * *(a1 + 0x98) + *(&v_50 + 4) * *(a1 + 0x90);
    float v_8 = *(&v_40 + 4) * *(a1 + 0x94) + objC5 * *(a1 + 0x98) + objC1 * *(a1 + 0x90);
    memcpy(a1 + 0x788, &v_28, 0x28);
    return AI_SelectTarget_21(a1);
}
