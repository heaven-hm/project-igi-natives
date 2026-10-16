#include "Script_ParseEnumString_24.h"
char* Script_ParseEnumString_24(int32_t* a1, double* a2, int32_t a3)

{
    Script_CallNativeHandler_27(*a1);
    int32_t result = a1[4];

    if (result > 0xa)
        return result;

    switch (result)
    {
        case 0:
        {
            return Script_CallNativeHandler_26(*a1, a2);
            break;
        }
        case 1:
        {
            return Script_CallNativeHandler_26(*a1, a2);
            break;
        }
        case 2:
        {
            return Script_EvaluateCondition_26(*a1, a2);
            break;
        }
        case 3:
        {
            return Script_EvaluateCondition_26(*a1, a2);
            break;
        }
        case 4:
        {
            return Script_FormatString_26(*a1, a2);
            break;
        }
        case 5:
        {
            return Script_FormatString_26(*a1, a2);
            break;
        }
        case 6:
        {
            return Script_SpawnNewTask_27(*a1, a2);
            break;
        }
        case 7:
        {
            return Script_ParseEnumInt32_27(*a1, a2);
            break;
        }
        case 8:
        {
            return Script_ParseEnumReal32_27(*a1, a2);
            break;
        }
        case 9:
        {
            int32_t v_8_10 = a3;
            return Script_ParseEnumString_27(*a1, a2);
            break;
        }
        case 0xa:
        {
            return Script_ExecuteLevelScript_27(*a1, a2, a3);
            break;
        }
    }
}
