#include "AnimTask_Init.h"
int32_t AnimTask_Init()

{
    int32_t v_4 = 0;
    g_54e1d8 = TaskType_Register("AnimTask", 0x20160, EditorRigidObj_OnEvent(), 0);
    g_54e1da = QTask_UnableToAllocateEvent(0);
    g_54e1db = QTask_UnableToAllocateEvent(0);
    g_54e1dc = QTask_UnableToAllocateEvent(0);
    g_54e1dd = QTask_UnableToAllocateEvent(0);
    g_54e1de = QTask_UnableToAllocateEvent(0);
    g_54e1df = QTask_UnableToAllocateEvent(0);
    g_54e1e0 = QTask_UnableToAllocateEvent(0);
    g_54e1e4 = Script_UnableToAllocatePara("AnimData", 0xffffffff);
    int32_t valA10 = Script_CallNativeHandler_8();
    Script_ParseEnumString_9(g_54e1e4, valA10, AnimTask_LoadParameters);
    int32_t valA12 = Script_FormatString_8();
    Script_ParseEnumString_9(g_54e1e4, valA12, AIGraph_LoadParameters);
    int32_t valA13 = Script_ParseEnumInt32_9();
    Script_ParseEnumString_9(g_54e1e4, valA13, sub_4f3630);
    int32_t valA14 = Script_ParseEnumReal32_9();
    Script_ParseEnumString_9(g_54e1e4, valA14, sub_4f3670);
    int32_t valA16 = Script_SpawnNewTask_9();
    Script_ParseEnumString_9(g_54e1e4, valA16, sub_4f36b0);
    int32_t valA17 = Script_EvaluateCondition_8();
    return Script_ParseEnumString_9(g_54e1e4, valA17, AnimTask_Process);
}
