// Original IGI.EXE function: Sys_ReadFileBlock_27 (VA 0x004BC2A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_27.h"
int32_t Sys_ReadFileBlock_27(char* context, int32_t param_2, int32_t param_3)

{
    int32_t item_4 = param_3;
    int32_t item_8 = param_2;
    return Game_DataSymbolLoad(context, "%s%p");
}
