// Original IGI.EXE function: Display_OpenDevice_15 (VA 0x00497D40; static CFG gate FAIL, CFG score 0.722).
#include "Display_OpenDevice_15.h"
int32_t Display_OpenDevice_15()

{
    Sys_ResolveSymbol_2(g_6e5ba8);
    Sys_ResolveSymbol_2(g_6e5ba4);
    g_543a68 = 0xffffffff;
    /* tailcall */
    return Display_SwapBuffers_15();
}
