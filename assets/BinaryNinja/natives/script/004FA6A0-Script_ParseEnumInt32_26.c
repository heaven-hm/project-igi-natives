// Original IGI.EXE function: Script_ParseEnumInt32_26 (VA 0x004FA6A0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_26.h"
int32_t Script_ParseEnumInt32_26(void* context, int32_t param_2, int32_t param_3)

{
    char item_c = 7;
    int32_t item_b = param_2;
    int32_t item_7 = param_3;
    Sys_ResolveSymbol_4(*(context + 4));
    int32_t result = Sys_CloseFileStream_4(*(context + 4), &item_c, 9);
    result = 1;
    return result;
}
