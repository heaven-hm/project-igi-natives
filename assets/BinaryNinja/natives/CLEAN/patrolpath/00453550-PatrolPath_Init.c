// IGI native provenance: PatrolPath_Init - 0x00453550 - CFG score 75.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00453550-PatrolPath_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PatrolPath_Init.h"
int32_t PatrolPath_Init()

{
    int32_t item_4 = 0;
    g_5bda70 = &g_5bda74;
    g_5bda78 = &g_5bda70;
    g_5bda74 = 0;
    int16_t data_1 = TaskType_Register("PatrolPath", 0x34, QTask_OpenEvent_2(), 0);
    g_53e29c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_453630);
    QTask_TriggerEvent(g_53e29c, 2, sub_453650);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53e29c, data_3, sub_453670);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53e29c, data_4, sub_453680);
    g_5bda7c = 0;
    /* tailcall */
    return PatrolPath_Update();
}
