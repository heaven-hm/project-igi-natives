// Original IGI.EXE function: PhysicsObj_LoadParameters (VA 0x004FB2C0; static CFG gate FAIL, CFG score 0.667).
#include "PhysicsObj_LoadParameters.h"
int32_t PhysicsObj_LoadParameters(void* a1, int32_t* a2)

{
    long double x87_r7_1 = *(a1 + 0x20) - *(a1 + 0x6c0);
    double* tmpD = *a2;
    double v_28 = *(a1 + 0x28) - *(a1 + 0x6c8);
    double v_20 = *(a1 + 0x30) - *(a1 + 0x6d0);
    long double x87_r6_5 = *tmpD - *(a1 + 0x6c0);
    double v_68 = tmpD[1] - *(a1 + 0x6c8);
    double v_60 = tmpD[2] - *(a1 + 0x6d0);
    long double x87_r5_7 =
        *(a1 + 0x6a0) * v_68 + *(a1 + 0x6ac) * v_60 + *(a1 + 0x694) * x87_r6_5;
    long double x87_r4_7 =
        *(a1 + 0x6a4) * v_68 + *(a1 + 0x6b0) * v_60 + *(a1 + 0x698) * x87_r6_5;
    long double x87_r3_7 =
        *(a1 + 0x6a8) * v_68 + *(a1 + 0x6b4) * v_60 + *(a1 + 0x69c) * x87_r6_5;
    double v_58 =
        *(a1 + 0x74) * x87_r4_7 + *(a1 + 0x78) * x87_r3_7 + *(a1 + 0x70) * x87_r5_7;
    double v_50 =
        *(a1 + 0x80) * x87_r4_7 + *(a1 + 0x84) * x87_r3_7 + *(a1 + 0x7c) * x87_r5_7;
    double v_48 =
        *(a1 + 0x8c) * x87_r4_7 + *(a1 + 0x90) * x87_r3_7 + *(a1 + 0x88) * x87_r5_7;
    *(a2 + 8) = v_58 + x87_r7_1 - x87_r6_5;
    *(a2 + 0x10) = v_50 + v_28 - v_68;
    *(a2 + 0x18) = v_48 + v_20 - v_60;
    long double x87_r7_9 = *(a1 + 0x694);
    long double x87_r6_7 = *(a1 + 0x698);
    long double x87_r5_12 = *(a1 + 0x69c);
    float tmpD1 = *(a1 + 0x6a0);
    v_28 = *(a1 + 0x6ac);
    v_20 = *(a1 + 0x6a4);
    *(&v_20 + 4) = *(a1 + 0x6b0);
    float tmpD5 = *(a1 + 0x6a8);
    float tmpD6 = *(a1 + 0x6b4);
    v_58 = x87_r6_7 * *(a1 + 0x74) + x87_r5_12 * *(a1 + 0x78) + x87_r7_9 * *(a1 + 0x70);
    int32_t tmpD7 = *(a1 + 0x6b8);
    *(&v_58 + 4) = v_20 * *(a1 + 0x74) + tmpD5 * *(a1 + 0x78) + tmpD1 * *(a1 + 0x70);
    v_50 = *(&v_20 + 4) * *(a1 + 0x74) + tmpD6 * *(a1 + 0x78) + v_28 * *(a1 + 0x70);
    *(&v_50 + 4) =
        x87_r6_7 * *(a1 + 0x80) + x87_r5_12 * *(a1 + 0x84) + x87_r7_9 * *(a1 + 0x7c);
    v_48 = v_20 * *(a1 + 0x80) + tmpD5 * *(a1 + 0x84) + tmpD1 * *(a1 + 0x7c);
    *(&v_48 + 4) =
        *(&v_20 + 4) * *(a1 + 0x80) + tmpD6 * *(a1 + 0x84) + v_28 * *(a1 + 0x7c);
    float v_40 =
        x87_r6_7 * *(a1 + 0x8c) + x87_r5_12 * *(a1 + 0x90) + x87_r7_9 * *(a1 + 0x88);
    float v_3c = v_20 * *(a1 + 0x8c) + tmpD5 * *(a1 + 0x90) + tmpD1 * *(a1 + 0x88);
    int32_t result = *(a1 + 0x94);
    int32_t v_34 = result + tmpD7 + 1;
    float v_38 =
        *(&v_20 + 4) * *(a1 + 0x8c) + tmpD6 * *(a1 + 0x90) + v_28 * *(a1 + 0x88);
    memcpy(&a2[8], &v_58, 0x28);
    return result;
}
