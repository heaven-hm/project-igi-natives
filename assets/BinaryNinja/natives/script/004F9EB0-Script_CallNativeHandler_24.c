// IGI native provenance: Script_CallNativeHandler_24 - 0x004F9EB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F9EB0-Script_CallNativeHandler_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_24.h"
int32_t Script_CallNativeHandler_24(void* context, char* param_2, int32_t param_3, int32_t* param_4, int32_t param_5)

{
    int32_t data_1;
    int32_t entity_val;
    int32_t temp_val;
    data_1 = Script_EvaluateCondition_25(context, Script_ExecuteLevelScript_24(param_2));
    int32_t result;
    int32_t entity_1;
    int32_t temp_1;
    result = Script_ParseEnumReal32_25(data_1, temp_val, entity_val, context, param_3);

    if (param_3 > 0xa)
        return result;

    switch (param_3)
    {
        case 0:
        {
            temp_1 = *param_4;
            return Script_ParseEnumReal32_25(result, temp_1, param_4, context, temp_1);
            break;
        }
        case 1:
        {
            entity_1 = *param_4;
            return Script_ParseEnumString_25(param_4, temp_1, entity_1, context, entity_1);
            break;
        }
        case 2:
        {
            result = *param_4;
            return Script_ExecuteLevelScript_25(result, param_4, entity_1, context, result);
            break;
        }
        case 3:
        {
            temp_1 = *param_4;
            return Script_CallNativeHandler_25(result, temp_1, param_4, context, temp_1);
            break;
        }
        case 4:
        {
            return Script_EvaluateCondition_25(context, *param_4);
            break;
        }
        case 5:
        {
            return Script_FormatString_25(context, *param_4);
            break;
        }
        case 6:
        {
            return Script_SpawnNewTask_26(context, *param_4);
            break;
        }
        case 7:
        {
            return Script_ParseEnumInt32_26(context, *param_4, param_4[1]);
            break;
        }
        case 8:
        {
            return Script_ParseEnumReal32_26(context, param_4);
            break;
        }
        case 9:
        {
            return Script_ParseEnumString_26(context, param_4);
            break;
        }
        case 0xa:
        {
            return Script_ExecuteLevelScript_26(context, param_4, param_5);
            break;
        }
    }
}
