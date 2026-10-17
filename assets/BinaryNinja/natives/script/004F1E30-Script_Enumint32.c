// Original IGI.EXE function: Script_Enumint32 (VA 0x004F1E30; static CFG gate PASS, CFG score 1.000).
#include "Script_Enumint32.h"
int32_t Script_Enumint32()

{
    g_54e160 = Script_UnableToAllocatePara("EnumInt32", Script_ParseEnumString_3());
    g_54e150 = Script_UnableToAllocatePara("EnumReal32", Script_EvaluateCondition_2());
    g_54e154 = Script_UnableToAllocatePara("EnumString16", Script_EvaluateCondition_3());
    g_54e158 = Script_UnableToAllocatePara("EnumString32", Script_FormatString_3());
    int32_t result = Script_UnableToAllocatePara("EnumString256", Script_SpawnNewTask_4());
    g_54e15c = result;
    return result;
}
