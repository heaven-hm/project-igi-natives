#include "0052AAF0-AnimRigidDynCubeObj_Init.h"
/* 0x0052aaf0 AnimRigidDynCubeObj_Init full linked: callers=1 callees=15 */
int32_t sub_52aaf0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("AnimRigidDynCubeObj", 0x158, sub_4c48c0(), 0);
    g_54f498 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_4d3710);
    QTask_RemoveEventCallback(g_54f498, 0, sub_4d3710);
    QTask_TriggerEvent(g_54f498, 2, sub_4d3710);
    int32_t eax_3 = sub_4f40d0();
    QTask_RemoveEventCallback(g_54f498, eax_3, sub_52a230);
    int32_t eax_4 = sub_4f40e0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_54f498;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_52abd0);
    int32_t eax_5 = sub_4f4110();
    QTask_RemoveEventCallback(g_54f498, eax_5, sub_52ac00);
    int32_t eax_6 = sub_4f4120();
    QTask_RemoveEventCallback(g_54f498, eax_6, sub_52ac10);
    int32_t eax_7 = sub_4f4130();
    int32_t var_8_4 = eax_7;
    eax_7 = g_54f498;
    return QTask_RemoveEventCallback(eax_7, var_8_4, sub_52ac50);
}
