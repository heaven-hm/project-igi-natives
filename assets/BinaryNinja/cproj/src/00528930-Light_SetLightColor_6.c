#include "gi_platform.h"
#include "00528930-Light_SetLightColor_6.h"
void* Light_SetLightColor_6(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x108));
    float v_118 = 1.0f;
    float v_114 = 0.0f;
    float v_110 = 0.0f;
    float v_10c = 0.0f;
    float v_108 = 1.0f;
    float v_104 = 0.0f;
    float v_100 = 0.0f;
    float v_fc = 0.0f;
    float v_f8 = 1.0f;
    int32_t v_f4 = 0;
    float v_b0 = 1.0f;
    float v_ac = 0.0f;
    float v_a8 = 0.0f;
    float v_a4 = 0.0f;
    float v_a0 = 1.0f;
    float v_9c = 0.0f;
    float v_98 = 0.0f;
    float v_94 = 0.0f;
    float v_90 = 1.0f;
    int32_t v_c8;
    __builtin_memset(&v_c8, 0, 0x18);
    double v_e0;

    if (result >= 0)
    {
        result = Script_ExecuteLevelScript_4(result);

        if (result)
        {
            int32_t objC1 = 0;
            int32_t v_10_1 = 0;
            objC1 = *(result + 0x1c);
            int32_t objC2 = *((objC1 << 2) + &g_a994e0);

            if (objC2)
            {
                char v_60;
                objC2(result, &v_60);
                memcpy(&v_c8, &v_60, 0x18);
                float v_134_1 = -1.57079637.0f;
                char v_3c;
                memcpy(&v_b0, &v_3c, 0x28);
                float v_f0;
                int32_t* v_138_1 = &v_f0;
                memcpy(&v_118, &v_3c, 0x28);
                Sys_CloseFileStream_12(v_138_1, v_134_1);
                int64_t v_e8;
                float v_d8;
                float v_88 = v_d8 * v_110 + *(&v_e8 + 4) * v_114 + v_f0 * v_118;
                float v_ec;
                float v_d4;
                float v_84_1 = v_d4 * v_110 + v_e0 * v_114 + v_ec * v_118;
                float v_d0;
                float v_80_1 = v_d0 * v_110 + *(&v_e0 + 4) * v_114 + v_e8 * v_118;
                float v_7c_1 = v_d8 * v_104 + *(&v_e8 + 4) * v_108 + v_f0 * v_10c;
                float v_78 = v_d4 * v_104 + v_e0 * v_108 + v_ec * v_10c;
                float v_74_1 = v_d0 * v_104 + *(&v_e0 + 4) * v_108 + v_e8 * v_10c;
                long double x87_r7_27 = v_d8 * v_f8 + *(&v_e8 + 4) * v_fc;
                long double x87_r6_28 = v_f0 * v_100;
                int32_t v_cc;
                result = v_cc + v_f4 + 1;
                void* result_1 = result;
                float v_70_1 = x87_r7_27 + x87_r6_28;
                float v_6c_1 = v_d4 * v_f8 + v_e0 * v_fc + v_ec * v_100;
                float v_68_1 = v_d0 * v_f8 + *(&v_e0 + 4) * v_fc + v_e8 * v_100;
                memcpy(&v_118, &v_88, 0x28);
            }
        }
    }

    long double x87_r7_38 = v_ac * (*(int32_t*)(uintptr_t)(a1 + 0x150));
    long double x87_r6_38 = v_b0 * (*(int32_t*)(uintptr_t)(a1 + 0x148));
    (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = 0x3f800000;
    long double x87_r6_40 = v_a8 * (*(int32_t*)(uintptr_t)(a1 + 0x158));
    memcpy(a1 + 0x8c, &v_118, 0x28);
    double v_e8_1 =
        v_a0 * (*(int32_t*)(uintptr_t)(a1 + 0x150)) + v_a4 * (*(int32_t*)(uintptr_t)(a1 + 0x148)) + v_9c * (*(int32_t*)(uintptr_t)(a1 + 0x158));
    v_e0 = v_94 * (*(int32_t*)(uintptr_t)(a1 + 0x150)) + v_98 * (*(int32_t*)(uintptr_t)(a1 + 0x148)) + v_90 * (*(int32_t*)(uintptr_t)(a1 + 0x158));
    v_c8 = x87_r7_38 + x87_r6_38 + x87_r6_40 + v_c8;
    int32_t v_c0;
    v_c0 = v_e8_1 + v_c0;
    int32_t v_b8;
    v_b8 = v_e0 + v_b8;
    long double x87_r7_47 = (*(int32_t*)(uintptr_t)(a1 + 0x160)) + (*(int32_t*)(uintptr_t)(a1 + 0x148));
    memcpy(a1 + 0xb8, &v_c8, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = x87_r7_47;
    (*(int32_t*)(uintptr_t)(a1 + 0x150)) = (*(int32_t*)(uintptr_t)(a1 + 0x168)) + (*(int32_t*)(uintptr_t)(a1 + 0x150));
    (*(int32_t*)(uintptr_t)(a1 + 0x158)) = (*(int32_t*)(uintptr_t)(a1 + 0x170)) + (*(int32_t*)(uintptr_t)(a1 + 0x158));
    return result;
}
