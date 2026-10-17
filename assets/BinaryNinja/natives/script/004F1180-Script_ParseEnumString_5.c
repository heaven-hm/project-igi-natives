// Original IGI.EXE function: Script_ParseEnumString_5 (VA 0x004F1180; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_5.h"
void* Script_ParseEnumString_5(int32_t context)

{
    int32_t* data_val = Script_ExecuteLevelScript_5(context);

    if (!data_val)
        return &g_567c74;

    return &data_val[3];
}
