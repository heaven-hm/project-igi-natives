// Original IGI.EXE function: Display_CloseDevice_15 (VA 0x00497D70; static CFG gate FAIL, CFG score 0.800).
#include "Display_CloseDevice_15.h"
int32_t Display_CloseDevice_15(int32_t* a1, int32_t a2, int32_t a3, float a4)

{
    memcpy(a1, a2, 0x28);
    int32_t objC = a1[3];
    int32_t tmpD = a1[6];
    int32_t v_28 = *a1;
    int32_t v_24 = objC;
    int32_t v_20 = tmpD;
    int32_t v_1c = a1[1];
    int32_t v_18 = a1[4];
    int32_t v_14 = a1[7];
    int32_t v_10 = a1[2];
    int32_t v_c = a1[5];
    int32_t v_8 = a1[8];
    int32_t v_4 = a1[9];
    memcpy(a1, &v_28, 0x28);
    memcpy(&a1[0xa], a3, 0x18);
    a1[0x10] = a4;
    a1[0x11] = g_bcabc4 * a4 / (Display_ClearSurfaces_4() * g_bcabc0);
    a1[0x12] = g_bcabc8 / a1[0x10];
    a1[0x13] = Display_ClearSurfaces_4() * a1[0x12];
    a1[0x14] = g_bcabb8 + g_bcabc8;
    long double x87_r7_12 = g_bcabbc + g_bcabcc;
    a1[0x16] = 1;
    a1[0x18] = 1;
    a1[0x15] = x87_r7_12;
    return 1;
}
