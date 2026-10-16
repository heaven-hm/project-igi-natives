#include "gi_platform.h"
#include "00467F30-AI_UpdateOrders_25.h"
void AI_UpdateOrders_25(float a1)

{
    float srcS = a1;
    int32_t ctxB = (*(int32_t*)(uintptr_t)(srcS + 0x1c));

    if (ctxB == 0xffffffff)
        return;

    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(srcS + 0x14));
    a1 = x87_r7_1;
    long double f0_1 = 3072.0f;
    x87_r7_1 - f0_1;

    if (*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
        a1 = 3072.0f;

    double* valA2 = (*(int32_t*)(uintptr_t)(srcS + 0xc));
    double* objC1 = *srcS;
    float v_c = *valA2 - *objC1;
    float v_8_1 = valA2[1] - objC1[1];
    float v_4_1 = valA2[2] - objC1[2];
    float* valA3 = (*(int32_t*)(uintptr_t)(srcS + 4));
    float v_18 = v_4_1 * valA3[6] + v_8_1 * valA3[3] + v_c * *valA3;
    float v_14_1 = v_4_1 * valA3[7] + v_8_1 * valA3[4] + v_c * valA3[1];
    long double x87_r7_18 = v_4_1 * valA3[8] + v_8_1 * valA3[5];
    long double x87_r6_12 = v_c * valA3[2];
    float v_8_2 = v_14_1;
    v_c = v_18;
    int32_t valA5 = (*(int32_t*)(uintptr_t)(srcS + 0x20));
    float v_10_1 = x87_r7_18 + x87_r6_12;
    AI_UpdateSensors_24(&v_18, &v_c, srcS);
    float v_28 = a1;
    float v_24_1 = a1;
    float v_20;
    Display_SetGammaRamp_15(&v_20, &v_28, v_10_1);
    float v_34;
    float v_30;
    float v_2c;
    Sys_Atan2UndefinedInOrig((*(int32_t*)(uintptr_t)(srcS + 0x10)), &v_2c, &v_30, &v_34);
    float objC4 = v_20;
    float v_54_2 = objC4;
    float v_1c;
    Sys_DispatchOpcode_15((*(int32_t*)(uintptr_t)((ctxB << 3) + &g_53f5f0)), (*(int32_t*)(uintptr_t)((ctxB << 3) + &g_53f5f4)), v_18, v_14_1,
        0x44051eb8, *(valA5 * 0xc + &g_53f608), *(valA5 * 0xc + 0x53f60c),
        *(valA5 * 0xc + 0x53f610), 0x3f400000, -(v_34), objC4, v_1c, 0x400c0000, 0xffffffff);
}
