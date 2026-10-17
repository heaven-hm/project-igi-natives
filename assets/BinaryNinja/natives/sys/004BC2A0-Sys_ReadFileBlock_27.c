// Original IGI.EXE function: Sys_ReadFileBlock_27 (VA 0x004BC2A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_27.h"
int32_t Sys_ReadFileBlock_27(char* a1, int32_t a2, int32_t a3)

{
    int32_t v_4 = a3;
    int32_t v_8 = a2;
    return Game_DataSymbolLoad(a1, "%s%p");
}
