// IGI native provenance: Computer_Init - 0x0046BA60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046BA60-Computer_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Computer_Init.h"
int32_t Computer_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Computer", 0x198, DynObj_LookupHashItem_5(), 0);
    g_5be2c4 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Computer_LoadParameters);
    QTask_TriggerEvent(g_5be2c4, 1, Computer_Setup);
    QTask_TriggerEvent(g_5be2c4, 2, Computer_Process);
    int32_t data_3 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5be2c4, data_3, sub_45f920);
    int32_t data_4 = Level_LoadObjects_4();
    int32_t item_8_1 = data_4;
    data_4 = g_5be2c4;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_45f920);
    int32_t data_5 = Level_CheckQTaskID_3();
    return QTask_RemoveEventCallback(g_5be2c4, data_5, sub_45f920);
}
