// IGI native provenance: ComputerMenu_Init - 0x0046AB60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046AB60-ComputerMenu_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerMenu_Init.h"
int32_t ComputerMenu_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ComputerMenu", 0x3c, QTask_OpenEvent_2(), 0);
    g_5bdda8 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_46abe0);
    QTask_TriggerEvent(g_5bdda8, 1, ComputerMenu_LoadParameters);
    QTask_TriggerEvent(g_5bdda8, 2, sub_46ae20);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_5bdda8, data_3, ComputerMenu_Setup);
    return Script_RegisterNamespace("COMPUTER:", "LOCAL:computer/");
}
