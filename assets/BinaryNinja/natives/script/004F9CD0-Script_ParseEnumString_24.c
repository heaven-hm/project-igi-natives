// Original IGI.EXE function: Script_ParseEnumString_24 (VA 0x004F9CD0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_24.h"
char* Script_ParseEnumString_24(int32_t* context, double* param_2, int32_t param_3)

{
    Script_CallNativeHandler_27(*context);
    int32_t result = context[4];

    if (result > 0xa)
        return result;

    switch (result)
    {
        case 0:
        {
            return Script_CallNativeHandler_26(*context, param_2);
            break;
        }
        case 1:
        {
            return Script_CallNativeHandler_26(*context, param_2);
            break;
        }
        case 2:
        {
            return Script_EvaluateCondition_26(*context, param_2);
            break;
        }
        case 3:
        {
            return Script_EvaluateCondition_26(*context, param_2);
            break;
        }
        case 4:
        {
            return Script_FormatString_26(*context, param_2);
            break;
        }
        case 5:
        {
            return Script_FormatString_26(*context, param_2);
            break;
        }
        case 6:
        {
            return Script_SpawnNewTask_27(*context, param_2);
            break;
        }
        case 7:
        {
            return Script_ParseEnumInt32_27(*context, param_2);
            break;
        }
        case 8:
        {
            return Script_ParseEnumReal32_27(*context, param_2);
            break;
        }
        case 9:
        {
            int32_t item_8_10 = param_3;
            return Script_ParseEnumString_27(*context, param_2);
            break;
        }
        case 0xa:
        {
            return Script_ExecuteLevelScript_27(*context, param_2, param_3);
            break;
        }
    }
}
