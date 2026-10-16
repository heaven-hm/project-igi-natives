#include "gi_platform.h"
#include "004FBF90-Script_EvaluateCondition_28.h"
int32_t Script_EvaluateCondition_28(void* a1, float a2, float a3, float a4)

{
    int32_t v_c = 0;
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x1b4));
    int32_t v_8 = 0;
    int32_t v_4 = 0;
    float v_18 = 0.0f;
    int32_t v_14 = 0;
    long double x87_r7_2 = -((a2 * *(objC + 8)));
    long double x87_r6_3 = x87_r7_2 * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
    v_18 = x87_r7_2 * (*(int32_t*)(uintptr_t)(a1 + 0x88));
    float v_14_1 = x87_r6_3;
    float v_10 = x87_r7_2 * (*(int32_t*)(uintptr_t)(a1 + 0x90));
    ForceAccumulator_Add(a1 + 0xf0, &v_18);
    int32_t result = ForceAccumulator_Integrate(a1 + 0xf0, a1 + 0x70);
    float objC3 = (*(int32_t*)(uintptr_t)(a1 + 0x128));
    long double x87_r7_7 = (*(int32_t*)(uintptr_t)(a1 + 0x124)) * a4;
    (*(int32_t*)(uintptr_t)(a1 + 0x120)) = (*(int32_t*)(uintptr_t)(a1 + 0x120)) * a4;
    (*(int32_t*)(uintptr_t)(a1 + 0x124)) = x87_r7_7;
    (*(int32_t*)(uintptr_t)(a1 + 0x128)) = objC3 * a4;
    float objC6 = (*(int32_t*)(uintptr_t)(a1 + 0x110));
    long double x87_r7_13 = (*(int32_t*)(uintptr_t)(a1 + 0x10c)) * a3;
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = (*(int32_t*)(uintptr_t)(a1 + 0x108)) * a3;
    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = x87_r7_13;
    (*(int32_t*)(uintptr_t)(a1 + 0x110)) = objC6 * a3;
    SoundSys_InitSoundSys_17(a1 + 0xf0);
    return result;
}
