// Original IGI.EXE function: Script_CallNativeHandler_24 (VA 0x004F9EB0; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_24.h"
int32_t Script_CallNativeHandler_24(void* a1, char* a2, int32_t a3, int32_t* a4, int32_t a5)

{
    int32_t valA1;
    int32_t objC;
    int32_t tmpD;
    valA1 = Script_EvaluateCondition_25(a1, Script_ExecuteLevelScript_24(a2));
    int32_t result;
    int32_t objC1;
    int32_t tmpD1;
    result = Script_ParseEnumReal32_25(valA1, tmpD, objC, a1, a3);

    if (a3 > 0xa)
        return result;

    switch (a3)
    {
        case 0:
        {
            tmpD1 = *a4;
            return Script_ParseEnumReal32_25(result, tmpD1, a4, a1, tmpD1);
            break;
        }
        case 1:
        {
            objC1 = *a4;
            return Script_ParseEnumString_25(a4, tmpD1, objC1, a1, objC1);
            break;
        }
        case 2:
        {
            result = *a4;
            return Script_ExecuteLevelScript_25(result, a4, objC1, a1, result);
            break;
        }
        case 3:
        {
            tmpD1 = *a4;
            return Script_CallNativeHandler_25(result, tmpD1, a4, a1, tmpD1);
            break;
        }
        case 4:
        {
            return Script_EvaluateCondition_25(a1, *a4);
            break;
        }
        case 5:
        {
            return Script_FormatString_25(a1, *a4);
            break;
        }
        case 6:
        {
            return Script_SpawnNewTask_26(a1, *a4);
            break;
        }
        case 7:
        {
            return Script_ParseEnumInt32_26(a1, *a4, a4[1]);
            break;
        }
        case 8:
        {
            return Script_ParseEnumReal32_26(a1, a4);
            break;
        }
        case 9:
        {
            return Script_ParseEnumString_26(a1, a4);
            break;
        }
        case 0xa:
        {
            return Script_ExecuteLevelScript_26(a1, a4, a5);
            break;
        }
    }
}
