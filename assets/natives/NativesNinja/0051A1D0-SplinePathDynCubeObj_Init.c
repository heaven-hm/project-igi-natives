#include "0051A1D0-SplinePathDynCubeObj_Init.h"
/* 0x0051a1d0 SplinePathDynCubeObj_Init full linked: callers=1 callees=5 */
int32_t sub_51a1d0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("SplinePathDynCubeObj", 0x200, g_54875c, 0);
    g_54ed4e = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_51a240);
    QTask_TriggerEvent(g_54ed4e, 2, sub_4d3710);
    int32_t eax_2 = sub_4f1a60();
    return QTask_RemoveEventCallback(g_54ed4e, eax_2, sub_51a230);
}
