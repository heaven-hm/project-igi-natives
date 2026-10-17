// IGI native provenance: FlashBang_Init - 0x0047E700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047E700-FlashBang_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlashBang_Init.h"
char* FlashBang_Init()

{
    g_540914 = QTask_UnableToAllocateEvent(0);
    int32_t item_4 = 0;
    int16_t data_2 = TaskType_Register("FlashBang", 0x48, QTask_OpenEvent_2(), 4);
    g_5c1144 = data_2;
    QTask_RemoveEventCallback(data_2, 0, FlashBang_LoadParameters);
    QTask_TriggerEvent(g_5c1144, 1, FlashBang_Setup);
    QTask_TriggerEvent(g_5c1144, 2, AIGraph_LoadParameters);
    g_5c1148 = Level_LoadLevel_5("burn1.tex");
    char* result = Level_LoadObjects_6("smoke1.spr");
    g_5c114c = result;
    return result;
}
