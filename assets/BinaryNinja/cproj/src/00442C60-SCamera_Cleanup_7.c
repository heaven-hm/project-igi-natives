#include "gi_platform.h"
#include "00442C60-SCamera_Cleanup_7.h"
int32_t SCamera_Cleanup_7(int32_t a1, double** a2)

{
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x25d0));
    char result = *(objC + 0x170);

    if (result)
        return result;

    double* valA = *a2;
    float v_c = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - *valA;
    float v_8_1 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - valA[1];
    float v_4_1 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - valA[2];
    float* valA1 = a2[1];
    float v_18 = v_4_1 * valA1[6] + v_8_1 * valA1[3] + v_c * *valA1;
    float v_14_1 = v_4_1 * valA1[7] + v_8_1 * valA1[4] + v_c * valA1[1];
    long double x87_r7_17 = v_4_1 * valA1[8] + v_8_1 * valA1[5];
    long double x87_r6_12 = v_c * valA1[2];
    float v_8_2 = v_14_1;
    v_c = v_18;
    float v_4_2 = x87_r7_17 + x87_r6_12;
    int32_t* srcS1;
    int32_t dstD1;

    if (!*(objC + 0x168))
    {
        srcS1 = &g_5be230;
        dstD1 = 0;
    }
    else
    {
        dstD1 = (*(int32_t*)(uintptr_t)(a1 + 0x25e0));
        srcS1 = &g_5be248;
    }

    AI_UpdateSensors_24(&v_18, &v_c, a2);
    long double x87_r7_20 = Sys_CloseFileStream_17(srcS1) * 0.5.0f;
    v_18 = v_18 - x87_r7_20;
    int32_t valA6 = Sys_ExecuteBytecode_17(srcS1);
    return Sys_AllocateMemory_15(srcS1, v_18, v_14_1 - valA6 * 0.5.0f, 128.0f, 128.0f, 128.0f, 0x3f800000,
        0x44051eb8, dstD1, 0x400c0000, 0xffffffff);
}
