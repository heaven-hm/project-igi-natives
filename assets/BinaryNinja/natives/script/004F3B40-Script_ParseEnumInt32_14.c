// Original IGI.EXE function: Script_ParseEnumInt32_14 (VA 0x004F3B40; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_14.h"
char Script_ParseEnumInt32_14(long double context , int32_t param_2)

{
    if (Script_FormatString_6(param_2 + 0x200f8))
    {
        Script_SpawnNewTask_7(param_2 + 0x200f8, param_2);
        *(param_2 + 0x200f4) = context;
    }

    char result = *(param_2 + 0x200f4);

    if (!result)
        return result;

    return Script_FormatString_14(param_2, *(param_2 + 0x20154) + 1);
}
