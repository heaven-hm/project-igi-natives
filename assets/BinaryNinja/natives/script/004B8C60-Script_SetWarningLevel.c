// Original IGI.EXE function: Script_SetWarningLevel (VA 0x004B8C60; static CFG gate PASS, CFG score 0.889).
#include "Script_SetWarningLevel.h"
int32_t Script_SetWarningLevel(int32_t context, float param_2 )

// Sig: void Script_SetWarningLevel(int level)
// Note: Sets how loudly the script system reports warnings while
// parsing/running (igi.exe embeds its name WITH leading underscore:
// '_Script_SetWarningLevel'). Param: level = warning verbosity threshold. Use
// at the idx of scripts you want silenced or extra-chatty.
{
    Sys_ExecuteBytecode_23(Script_GetArg(param_2, 0));
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
