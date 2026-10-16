#include "0043E670-GenericPhysicsMagicObj_Process.h"
/* 0x0043e670 GenericPhysicsMagicObj_Process full linked: callers=0 callees=1 */
void* GenericPhysicsMagicObj_Process(void* a1, int32_t* a2)

{
    int32_t* ecx_1 = *a2 + 0x20;
    int32_t var_c = *ecx_1;
    int32_t var_8 = ecx_1[1];
    int32_t ecx_2 = ecx_1[2];
    float var_18 = a2[2];
    int32_t var_4 = ecx_2;
    float ecx_3 = a2[3];
    float edx_3 = a2[4];
    float var_24 = edx_3 * *(a1 + 0x88) + ecx_3 * *(a1 + 0x7c) + var_18 * *(a1 + 0x70);
    float var_20 = edx_3 * *(a1 + 0x8c) + ecx_3 * *(a1 + 0x80) + var_18 * *(a1 + 0x74);
    void* edx_5 = *(a1 + 0x1b4);
    long double x87_r7_10 = edx_3 * *(a1 + 0x90) + ecx_3 * *(a1 + 0x84);
    long double x87_r6_11 = var_18 * *(a1 + 0x78);
    var_18 = var_24;
    float var_1c = x87_r7_10 + x87_r6_11;
    long double x87_r7_12 = var_1c;
    long double x87_r6_12 = var_20;
    long double x87_r5 = var_24;
    long double x87_r7_15 = *(edx_5 + 8) * 100f
        / sqrtl(x87_r5 * x87_r5 + x87_r6_12 * x87_r6_12 + x87_r7_12 * x87_r7_12);
    var_18 = var_24 * x87_r7_15;
    float var_14_2 = var_20 * x87_r7_15;
    float var_10_2 = var_1c * x87_r7_15;
    return sub_4ecf50(a1 + 0xf0, &var_18);
}
