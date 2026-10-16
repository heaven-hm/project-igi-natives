#include "gi_platform.h"
#include "004613D0-AI_AlertAllies_18.h"
int32_t AI_AlertAllies_18(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x538)) = 0xffffffff;
    Render_ClipMesh_5(a1 + 0x534, a1 + 0x68);
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x538));

    if (result == 0xffffffff)
        return result;

    long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x80)) * (*(int32_t*)(uintptr_t)(a1 + 0x54c)) + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * (*(int32_t*)(uintptr_t)(a1 + 0x548))
        + (*(int32_t*)(uintptr_t)(a1 + 0x78)) * (*(int32_t*)(uintptr_t)(a1 + 0x544));
    long double x87_r6_8 = (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * (*(int32_t*)(uintptr_t)(a1 + 0x54c)) + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * (*(int32_t*)(uintptr_t)(a1 + 0x548))
        + (*(int32_t*)(uintptr_t)(a1 + 0x84)) * (*(int32_t*)(uintptr_t)(a1 + 0x544));
    long double x87_r6_12 = (*(int32_t*)(uintptr_t)(a1 + 0x98)) * (*(int32_t*)(uintptr_t)(a1 + 0x54c)) + (*(int32_t*)(uintptr_t)(a1 + 0x94)) * (*(int32_t*)(uintptr_t)(a1 + 0x548))
        + (*(int32_t*)(uintptr_t)(a1 + 0x90)) * (*(int32_t*)(uintptr_t)(a1 + 0x544));
    double v_18 = x87_r7_4 + (*(int32_t*)(uintptr_t)(a1 + 0x20));
    double v_10_1 = x87_r6_8 + (*(int32_t*)(uintptr_t)(a1 + 0x28));
    double v_8_1 = x87_r6_12 + (*(int32_t*)(uintptr_t)(a1 + 0x30));
    return SoundSys_EvaluateTrigger_15(result, a1, &v_18);
}
