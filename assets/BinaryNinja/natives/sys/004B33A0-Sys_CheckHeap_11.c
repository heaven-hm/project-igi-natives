// Original IGI.EXE function: Sys_CheckHeap_11 (VA 0x004B33A0; static CFG gate FAIL, CFG score 0.833).
#include "Sys_CheckHeap_11.h"
int32_t Sys_CheckHeap_11(int32_t a1, float* a2, float a3, float a4, float a5)

{
    float v_50;
    Sys_ReadFileBlock_12(&v_50, a3, a4, a5);
    float v_4c;
    float v_48;
    float v_28 = v_50 * *a2 + v_48 * a2[6] + v_4c * a2[3];
    float v_24 = v_50 * a2[1] + v_48 * a2[7] + v_4c * a2[4];
    float v_20 = v_50 * a2[2] + v_48 * a2[8] + v_4c * a2[5];
    float v_44;
    float v_40;
    float v_3c;
    float v_1c = v_44 * *a2 + v_3c * a2[6] + v_40 * a2[3];
    float v_18 = v_44 * a2[1] + v_3c * a2[7] + v_40 * a2[4];
    float v_14 = v_44 * a2[2] + v_3c * a2[8] + v_40 * a2[5];
    float v_38;
    float v_34;
    float v_30;
    float v_10 = v_38 * *a2 + v_30 * a2[6] + v_34 * a2[3];
    float v_c = v_38 * a2[1] + v_30 * a2[7] + v_34 * a2[4];
    int32_t v_2c;
    int32_t result = a2[9] + v_2c + 1;
    int32_t result_1 = result;
    float v_8 = v_38 * a2[2] + v_30 * a2[8] + v_34 * a2[5];
    memcpy(a1, &v_28, 0x28);
    return result;
}
