// Original IGI.EXE function: Script_SetWarningLevel (VA 0x004B8C60; static CFG gate PASS, CFG score 0.889).
#include "Script_SetWarningLevel.h"
int32_t Script_SetWarningLevel(int32_t a1, float a2 @ 0xc)

// Sig: void Script_SetWarningLevel(int level)
// Note: Sets how loudly the script system reports warnings while
// parsing/running (igi.exe embeds its name WITH leading underscore:
// '_Script_SetWarningLevel'). Param: level = warning verbosity threshold. Use
// at the idx of scripts you want silenced or extra-chatty.
{
    Sys_ExecuteBytecode_23(Script_GetArg(a2, 0));
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
