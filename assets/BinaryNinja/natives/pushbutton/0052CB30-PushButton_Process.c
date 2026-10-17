// Original IGI.EXE function: PushButton_Process (VA 0x0052CB30; static CFG gate PASS, CFG score 1.000).
#include "PushButton_Process.h"
float* PushButton_Process()

{
    float* result = Mem_Alloc(0xedc, 4);
    int32_t objC = g_bcad74;
    int32_t objC1 = -(objC);
    int32_t v_10 = 0;
    int32_t v_c = 0;
    int32_t v_8 = 0;
    int32_t v_4 = 0;
    int32_t* valA = g_5ca110;
    int32_t v_c_1 = (((objC1 - objC1) & 0xfffff800) + 0x800) | 0x10000;
    v_10 = 0x10;
    int32_t v_4_1 = 0x141;
    int32_t v_8_1 = 0x42;
    (*(*valA + 0x14))(valA, &v_10, &result[0x14], 0);
    int32_t v_34 = 0x3f800000;
    int32_t v_30 = 0;
    int32_t v_2c = 0;
    int32_t v_28 = 0x3f800000;
    int32_t v_24 = 0x3f800000;
    int32_t v_20 = 0x3f800000;
    int32_t v_1c = 0;
    int32_t v_18 = 0;
    int32_t v_14 = 0x3f800000;
    Light_SampleLightmap_9(result, &v_1c, &v_28, &v_28, &v_34, &v_34);
    Light_ComputeDirectionalLight_10(result, 0.392699093f);
    Light_UpdateGlobalLight_9(result);
    Light_ComputeDirectional(result);
    g_a84568 = result;
    return result;
}
