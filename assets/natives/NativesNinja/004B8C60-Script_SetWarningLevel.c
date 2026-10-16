#include "004B8C60-Script_SetWarningLevel.h"
/* 0x004b8c60 Script_SetWarningLevel full linked: callers=0 callees=3 */
int32_t Script_SetWarningLevel(int32_t a1, float a2 @ 0xc)

// Sig: void Script_SetWarningLevel(int level)
// Note: Sets how loudly the script system reports warnings while
// parsing/running (igi.exe embeds its name WITH leading underscore:
// '_Script_SetWarningLevel'). Param: level = warning verbosity threshold. Use
// at the top of scripts you want silenced or extra-chatty.
{
    sub_4b8970(sub_4b8a20(a2, 0));
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
