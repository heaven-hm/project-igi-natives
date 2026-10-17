// Original IGI.EXE function: GenericPhysicsMagicObj_Process (VA 0x0043E670; static CFG gate PASS, CFG score 1.000).
#include "GenericPhysicsMagicObj_Process.h"
void* GenericPhysicsMagicObj_Process(void* a1, int32_t* a2)

{
    int32_t* objC1 = *a2 + 0x20;
    int32_t v_c = *objC1;
    int32_t v_8 = objC1[1];
    int32_t objC2 = objC1[2];
    float v_18 = a2[2];
    int32_t v_4 = objC2;
    float objC3 = a2[3];
    float tmpD3 = a2[4];
    float v_24 = tmpD3 * *(a1 + 0x88) + objC3 * *(a1 + 0x7c) + v_18 * *(a1 + 0x70);
    float v_20 = tmpD3 * *(a1 + 0x8c) + objC3 * *(a1 + 0x80) + v_18 * *(a1 + 0x74);
    void* tmpD5 = *(a1 + 0x1b4);
    long double x87_r7_10 = tmpD3 * *(a1 + 0x90) + objC3 * *(a1 + 0x84);
    long double x87_r6_11 = v_18 * *(a1 + 0x78);
    v_18 = v_24;
    float v_1c = x87_r7_10 + x87_r6_11;
    long double x87_r7_12 = v_1c;
    long double x87_r6_12 = v_20;
    long double fpu5 = v_24;
    long double x87_r7_15 = *(tmpD5 + 8) * 100f
        / sqrtl(fpu5 * fpu5 + x87_r6_12 * x87_r6_12 + x87_r7_12 * x87_r7_12);
    v_18 = v_24 * x87_r7_15;
    float v_14_2 = v_20 * x87_r7_15;
    float v_10_2 = v_1c * x87_r7_15;
    return ForceAccumulator_Add(a1 + 0xf0, &v_18);
}
