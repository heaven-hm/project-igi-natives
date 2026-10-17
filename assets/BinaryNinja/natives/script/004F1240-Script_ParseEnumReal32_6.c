// Original IGI.EXE function: Script_ParseEnumReal32_6 (VA 0x004F1240; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32_6.h"
int32_t Script_ParseEnumReal32_6()

{
    int32_t result = 0;

    if (Script_ExecuteLevelScript_4(0))
    {
        int32_t i;

        do
        {
            result += 1;
            i = Script_ExecuteLevelScript_4(result);
        } while (i);
    }

    return result;
}
