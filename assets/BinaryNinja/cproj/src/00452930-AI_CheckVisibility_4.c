#include "gi_platform.h"
#include "00452930-AI_CheckVisibility_4.h"
float* AI_CheckVisibility_4(long double a1 , int32_t a2, float* a3, float a4, double* a5, float a6)

{
    float v_78 = a4;
    a6 = a6 * 30.0f;
    double v_68;
    AI_UpdatePatrol_3(&v_68, v_78);
    long double x87_r7_3 = v_68 - *a5;
    v_68 = x87_r7_3;
    double v_60;
    long double x87_r6_1 = v_60 - a5[1];
    double v_60_1 = x87_r6_1;
    double v_58;
    long double x87_r5_1 = v_58 - a5[2];
    double v_58_1 = x87_r5_1;
    double v_50 =
        (*(int32_t*)(uintptr_t)(a4 + 0x50)) * x87_r7_3 + (*(int32_t*)(uintptr_t)(a4 + 0x5c)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a4 + 0x68)) * x87_r5_1;
    double v_48 =
        (*(int32_t*)(uintptr_t)(a4 + 0x60)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a4 + 0x6c)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a4 + 0x54)) * x87_r7_3;
    double v_40 =
        (*(int32_t*)(uintptr_t)(a4 + 0x64)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a4 + 0x70)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a4 + 0x58)) * x87_r7_3;
    char v_8c;
    memcpy(&v_8c, &v_50, 0x18);
    WeaponType_InitType();
    float v_28;
    Sys_CloseFileStream_12(&v_28, a1);
    float v_1c;
    float v_10;
    v_50 = v_28 * (*(int32_t*)(uintptr_t)(a4 + 0x50)) + v_10 * (*(int32_t*)(uintptr_t)(a4 + 0x58)) + v_1c * (*(int32_t*)(uintptr_t)(a4 + 0x54));
    int32_t valA1 = (*(int32_t*)(uintptr_t)(a4 + 0x74));
    float v_24;
    float v_18;
    float v_c;
    *(&v_50 + 4) = v_24 * (*(int32_t*)(uintptr_t)(a4 + 0x50)) + v_c * (*(int32_t*)(uintptr_t)(a4 + 0x58)) + v_18 * (*(int32_t*)(uintptr_t)(a4 + 0x54));
    int32_t v_4;
    int32_t v_2c = valA1 + v_4 + 1;
    float v_20;
    float v_14;
    float v_8;
    v_48 = v_20 * (*(int32_t*)(uintptr_t)(a4 + 0x50)) + v_8 * (*(int32_t*)(uintptr_t)(a4 + 0x58)) + v_14 * (*(int32_t*)(uintptr_t)(a4 + 0x54));
    *(&v_48 + 4) = v_10 * (*(int32_t*)(uintptr_t)(a4 + 0x64)) + v_1c * (*(int32_t*)(uintptr_t)(a4 + 0x60)) + v_28 * (*(int32_t*)(uintptr_t)(a4 + 0x5c));
    v_40 = v_c * (*(int32_t*)(uintptr_t)(a4 + 0x64)) + v_18 * (*(int32_t*)(uintptr_t)(a4 + 0x60)) + v_24 * (*(int32_t*)(uintptr_t)(a4 + 0x5c));
    *(&v_40 + 4) = v_8 * (*(int32_t*)(uintptr_t)(a4 + 0x64)) + v_14 * (*(int32_t*)(uintptr_t)(a4 + 0x60)) + v_20 * (*(int32_t*)(uintptr_t)(a4 + 0x5c));
    float v_38 = v_10 * (*(int32_t*)(uintptr_t)(a4 + 0x70)) + v_1c * (*(int32_t*)(uintptr_t)(a4 + 0x6c)) + v_28 * (*(int32_t*)(uintptr_t)(a4 + 0x68));
    float v_34 = v_c * (*(int32_t*)(uintptr_t)(a4 + 0x70)) + v_18 * (*(int32_t*)(uintptr_t)(a4 + 0x6c)) + v_24 * (*(int32_t*)(uintptr_t)(a4 + 0x68));
    float v_30 = v_8 * (*(int32_t*)(uintptr_t)(a4 + 0x70)) + v_14 * (*(int32_t*)(uintptr_t)(a4 + 0x6c)) + v_20 * (*(int32_t*)(uintptr_t)(a4 + 0x68));
    memcpy(a2, &v_50, 0x28);
    double v_60_2 = v_60_1 * 1.1000000000000001;
    double v_58_2 = v_58_1 * 1.1000000000000001;
    *a3 = v_68 * 1.1000000000000001 / a6;
    a3[1] = v_60_2 / a6;
    a3[2] = v_58_2 / a6 + a6 * 22.300444444444445;
    return a3;
}
