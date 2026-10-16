#include "gi_platform.h"
#include "00469D00-AI_AlertAllies_26.h"
double* AI_AlertAllies_26(void* a1, double* a2)

{
    float v_8_1 = (*(int32_t*)(uintptr_t)(a1 + 0x58)) * -921600.0f;
    float v_4_1 = (*(int32_t*)(uintptr_t)(a1 + 0x64)) * -921600.0f;
    g_5bdd78 = (*(int32_t*)(uintptr_t)(a1 + 0x4c)) * -921600.0f + *a2;
    g_5bdd80 = v_8_1 + a2[1];
    g_5bdd88 = v_4_1 + a2[2];
    return a2;
}
