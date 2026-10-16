#include "AI_TakeCover_25.h"
void AI_TakeCover_25(int32_t a1)

{
    int32_t* objC1 = a1;
    int32_t* srcS = objC1[6];

    if (!srcS)
        return;

    double* valA1 = objC1[3];
    double* tmpD1 = *objC1;
    float v_c = *valA1 - *tmpD1;
    float v_8_1 = valA1[1] - tmpD1[1];
    float v_4_1 = valA1[2] - tmpD1[2];
    float* valA2 = objC1[1];
    float v_18 = v_4_1 * valA2[6] + v_8_1 * valA2[3] + v_c * *valA2;
    float v_14_1 = v_4_1 * valA2[7] + v_8_1 * valA2[4] + v_c * valA2[1];
    long double x87_r7_17 = v_4_1 * valA2[8] + v_8_1 * valA2[5];
    long double x87_r6_12 = v_c * valA2[2];
    float v_8_2 = v_14_1;
    v_c = v_18;
    float v_4_2 = x87_r7_17 + x87_r6_12;
    AI_UpdateSensors_24(&v_18, &v_c, objC1);
    long double x87_r7_20 = Sys_CloseFileStream_17(srcS) * 0.5f;
    v_18 = v_18 - x87_r7_20;
    float v_14_2 = v_14_1 - Sys_ExecuteBytecode_17(srcS) * 0.5f;
    v_18 = v_18 - 10f;
    Sys_AllocateMemory_15(srcS, v_18, v_14_2, 128f, 128f, 128f, 0x3f800000, 0x44051eb8, 0, 0x400c0000,
        0xffffffff);
}
