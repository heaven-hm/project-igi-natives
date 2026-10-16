#include "GenericPhysicsObj_Update_2.h"
void* GenericPhysicsObj_Update_2(void* a1, int32_t* a2)

{
    int32_t* objC1 = *a2 + 0x20;
    int32_t v_c = *objC1;
    int32_t v_8 = objC1[1];
    int32_t objC2 = objC1[2];
    float v_18 = a2[2];
    int32_t v_4 = objC2;
    float objC3 = a2[3];
    int32_t v_c_1 = 0;
    float tmpD3 = a2[4];
    int32_t v_8_1 = 0;
    int32_t v_4_1 = 0;
    float v_24 = tmpD3 * *(a1 + 0x88) + objC3 * *(a1 + 0x7c) + v_18 * *(a1 + 0x70);
    float v_20 = tmpD3 * *(a1 + 0x8c) + objC3 * *(a1 + 0x80) + v_18 * *(a1 + 0x74);
    long double x87_r7_10 = tmpD3 * *(a1 + 0x90) + objC3 * *(a1 + 0x84);
    long double x87_r6_11 = v_18 * *(a1 + 0x78);
    v_18 = v_24;
    v_18 = v_24 * 0.200000003f;
    float v_14_2 = v_20 * 0.200000003f;
    float v_10_2 = (x87_r7_10 + x87_r6_11) * 0.200000003f;
    return ForceAccumulator_Add(a1 + 0xf0, &v_18);
}
