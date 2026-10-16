#include "00497D70-Display_CloseDevice_15.h"
/* 0x00497d70 Display_CloseDevice_15 full linked: callers=2 callees=5 */
int32_t sub_497d70(int32_t* a1, int32_t a2, int32_t a3, float a4)

{
    memcpy(a1, a2, 0x28);
    int32_t ecx = a1[3];
    int32_t edx = a1[6];
    int32_t var_28 = *a1;
    int32_t var_24 = ecx;
    int32_t var_20 = edx;
    int32_t var_1c = a1[1];
    int32_t var_18 = a1[4];
    int32_t var_14 = a1[7];
    int32_t var_10 = a1[2];
    int32_t var_c = a1[5];
    int32_t var_8 = a1[8];
    int32_t var_4 = a1[9];
    memcpy(a1, &var_28, 0x28);
    memcpy(&a1[0xa], a3, 0x18);
    a1[0x10] = a4;
    a1[0x11] = g_bcabc4 * a4 / (sub_491d40() * g_bcabc0);
    a1[0x12] = g_bcabc8 / a1[0x10];
    a1[0x13] = sub_491d40() * a1[0x12];
    a1[0x14] = g_bcabb8 + g_bcabc8;
    long double x87_r7_12 = g_bcabbc + g_bcabcc;
    a1[0x16] = 1;
    a1[0x18] = 1;
    a1[0x15] = x87_r7_12;
    return 1;
}
