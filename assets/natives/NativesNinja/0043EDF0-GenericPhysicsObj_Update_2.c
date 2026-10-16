#include "0043EDF0-GenericPhysicsObj_Update_2.h"
/* 0x0043edf0 GenericPhysicsObj_Update_2 full linked: callers=0 callees=1 */
void* GenericPhysicsObj_Update_2(void* a1, int32_t* a2)

{
    int32_t* ecx_1 = *a2 + 0x20;
    int32_t var_c = *ecx_1;
    int32_t var_8 = ecx_1[1];
    int32_t ecx_2 = ecx_1[2];
    float var_18 = a2[2];
    int32_t var_4 = ecx_2;
    float ecx_3 = a2[3];
    int32_t var_c_1 = 0;
    float edx_3 = a2[4];
    int32_t var_8_1 = 0;
    int32_t var_4_1 = 0;
    float var_24 = edx_3 * *(a1 + 0x88) + ecx_3 * *(a1 + 0x7c) + var_18 * *(a1 + 0x70);
    float var_20 = edx_3 * *(a1 + 0x8c) + ecx_3 * *(a1 + 0x80) + var_18 * *(a1 + 0x74);
    long double x87_r7_10 = edx_3 * *(a1 + 0x90) + ecx_3 * *(a1 + 0x84);
    long double x87_r6_11 = var_18 * *(a1 + 0x78);
    var_18 = var_24;
    var_18 = var_24 * 0.200000003f;
    float var_14_2 = var_20 * 0.200000003f;
    float var_10_2 = (x87_r7_10 + x87_r6_11) * 0.200000003f;
    return sub_4ecf50(a1 + 0xf0, &var_18);
}
