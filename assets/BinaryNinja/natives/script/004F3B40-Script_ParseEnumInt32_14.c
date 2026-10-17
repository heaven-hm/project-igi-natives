// Original IGI.EXE function: Script_ParseEnumInt32_14 (VA 0x004F3B40; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_14.h"
char Script_ParseEnumInt32_14(int80_t a1 @ fp0, int32_t a2)

{
    if (Script_FormatString_6(a2 + 0x200f8))
    {
        Script_SpawnNewTask_7(a2 + 0x200f8, a2);
        *(a2 + 0x200f4) = a1;
    }

    char result = *(a2 + 0x200f4);

    if (!result)
        return result;

    return Script_FormatString_14(a2, *(a2 + 0x20154) + 1);
}
