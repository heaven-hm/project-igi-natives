#include "0049A520-PolyListDynCubeObj_Init.h"
/* 0x0049a520 PolyListDynCubeObj_Init full linked: callers=1 callees=10 */
int32_t sub_49a520()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("PolyListDynCubeObj", 0xb8, g_54875c, 0);
    g_543c64 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, sub_49a3c0);
    QTask_TriggerEvent(g_543c64, 2, sub_49a350);
    int32_t eax_2 = sub_4978d0("PolyListDynCubeObjPrimitive");
    g_c311bc = eax_2;
    sub_4b0ec0(sub_4950e0(), eax_2, sub_49a9b0);
    g_72057c = sub_4b7430(g_bcade8, sub_49a5e0);
    int32_t eax_6 = sub_4b7430(g_bcad7c, sub_4d3710);
    void* ecx_1 = g_bcadac;
    g_7205a4 = eax_6;
    int32_t eax_7 = sub_4b7430(ecx_1, sub_49a6e0);
    void* edx_1 = g_bcadc4;
    g_7205a8 = eax_7;
    int32_t result = sub_4b7430(edx_1, sub_4d3710);
    g_7205a0 = result;
    return result;
}
