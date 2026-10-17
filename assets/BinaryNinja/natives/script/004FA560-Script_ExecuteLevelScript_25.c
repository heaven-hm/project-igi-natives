// Original IGI.EXE function: Script_ExecuteLevelScript_25 (VA 0x004FA560; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_25.h"
int32_t __convention("regparm") Script_ExecuteLevelScript_25(int32_t a1, int32_t a2, int32_t a3, void* a4, int16_t a5)

{
    int32_t v_4 = a3;
    v_4 = 2;
    *(&v_4 + 1) = a5;
    Sys_ResolveSymbol_4(*(a4 + 4));
    int32_t result = Sys_CloseFileStream_4(*(a4 + 4), &v_4, 3);
    result = 1;
    return result;
}
