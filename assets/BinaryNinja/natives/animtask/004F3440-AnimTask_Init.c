// IGI native provenance: AnimTask_Init - 0x004F3440 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3440-AnimTask_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimTask_Init.h"
int32_t AnimTask_Init()

{
    int32_t item_4 = 0;
    g_54e1d8 = TaskType_Register("AnimTask", 0x20160, EditorRigidObj_OnEvent(), 0);
    g_54e1da = QTask_UnableToAllocateEvent(0);
    g_54e1db = QTask_UnableToAllocateEvent(0);
    g_54e1dc = QTask_UnableToAllocateEvent(0);
    g_54e1dd = QTask_UnableToAllocateEvent(0);
    g_54e1de = QTask_UnableToAllocateEvent(0);
    g_54e1df = QTask_UnableToAllocateEvent(0);
    g_54e1e0 = QTask_UnableToAllocateEvent(0);
    g_54e1e4 = Script_UnableToAllocatePara("AnimData", 0xffffffff);
    int32_t data_10 = Script_CallNativeHandler_8();
    Script_ParseEnumString_9(g_54e1e4, data_10, AnimTask_LoadParameters);
    int32_t data_12 = Script_FormatString_8();
    Script_ParseEnumString_9(g_54e1e4, data_12, AIGraph_LoadParameters);
    int32_t data_13 = Script_ParseEnumInt32_9();
    Script_ParseEnumString_9(g_54e1e4, data_13, sub_4f3630);
    int32_t data_14 = Script_ParseEnumReal32_9();
    Script_ParseEnumString_9(g_54e1e4, data_14, sub_4f3670);
    int32_t data_16 = Script_SpawnNewTask_9();
    Script_ParseEnumString_9(g_54e1e4, data_16, sub_4f36b0);
    int32_t data_17 = Script_EvaluateCondition_8();
    return Script_ParseEnumString_9(g_54e1e4, data_17, AnimTask_Process);
}
