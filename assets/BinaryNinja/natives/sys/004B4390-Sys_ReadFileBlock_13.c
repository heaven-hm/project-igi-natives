#include "Sys_ReadFileBlock_13.h"
int32_t Sys_ReadFileBlock_13(int32_t a1, float a2)

{
    float* valA = a2;
    long double x87_r7_1 = valA[3] * valA[7];
    long double x87_r6_1 = valA[6] * valA[5];
    long double x87_r5_1 = valA[8] * valA[4];
    long double x87_r4_1 = valA[5] * valA[7];
    float v_30 = valA[8] * valA[3];
    float v_2c = valA[6] * valA[4];
    long double x87_r3_9 =
        x87_r5_1 * *valA + x87_r7_1 * valA[2] + x87_r6_1 * valA[1] - x87_r4_1 * *valA - v_30 * valA[1];
    a2 = 1f / (x87_r3_9 - v_2c * valA[2]);
    float v_28 = (x87_r5_1 - x87_r4_1) * a2;
    float v_24 = -(((v_30 - x87_r6_1) * a2));
    float v_20 = (x87_r7_1 - v_2c) * a2;
    float v_1c = -(((valA[8] * valA[1] - valA[2] * valA[7]) * a2));
    float v_18 = (valA[8] * *valA - valA[6] * valA[2]) * a2;
    float v_14 = -(((*valA * valA[7] - valA[6] * valA[1]) * a2));
    float v_10 = (valA[5] * valA[1] - valA[2] * valA[4]) * a2;
    float v_c = -(((valA[5] * *valA - valA[3] * valA[2]) * a2));
    int32_t result = valA[9] + 1;
    int32_t result_1 = result;
    float v_8 = (valA[4] * *valA - valA[3] * valA[1]) * a2;
    memcpy(a1, &v_28, 0x28);
    return result;
}
