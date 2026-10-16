#include "00468E20-ComputerObjectives_Init.h"
/* 0x00468e20 ComputerObjectives_Init full linked: callers=1 callees=7 */
int32_t sub_468e20()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ComputerObjectives", 0x38, QTask_OpenEvent_2(), 0);
    g_5bdd70 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_468e90);
    QTask_TriggerEvent(g_5bdd70, 1, sub_488700);
    QTask_TriggerEvent(g_5bdd70, 2, sub_4d3710);
    int32_t eax_3 = sub_4e7530();
    return QTask_TriggerEvent(g_5bdd70, eax_3, sub_469110);
}
