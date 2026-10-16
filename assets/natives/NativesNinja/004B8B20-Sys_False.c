#include "004B8B20-Sys_False.h"
/* 0x004b8b20 Sys_False full linked: callers=1 callees=18 */
int32_t sub_4b8b20()

{
    __builtin_memset(&g_a43e60, 0, 0x18);
    sub_4bacd0();
    sub_4b8970(1);
    TaskType_Set("TRUE", 1);
    TaskType_Set(0x5473c0, 1);
    TaskType_Set("FALSE", 0);
    TaskType_Set(0x5473bc, 0);
    TaskType_Set("SCRIPT_WARNINGLEVEL_NO_WARNINGS", 0);
    TaskType_Set("SCRIPT_WARNINGLEVEL_NORMAL", 1);
    TaskType_Set("SCRIPT_WARNINGLEVEL_HIGH", 2);
    Game_DefineOptions("_Script_SetWarningLevel", Script_SetWarningLevel, 0, 1);
    Game_DefineOptions("BreakScript", Break_Script, 0, 0);
    sub_4b8a00(0x800);
    sub_4b89f0(0x2000);
    g_a9659c = 0x100;
    sub_4bd430();
    sub_4bc920();
    sub_4bbc80();
    return j_sub_4c10e0();
}
