// Original IGI.EXE function: Script_ParseEnumInt32_26 (VA 0x004FA6A0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_26.h"
int32_t Script_ParseEnumInt32_26(void* a1, int32_t a2, int32_t a3)

{
    char v_c = 7;
    int32_t v_b = a2;
    int32_t v_7 = a3;
    Sys_ResolveSymbol_4(*(a1 + 4));
    int32_t result = Sys_CloseFileStream_4(*(a1 + 4), &v_c, 9);
    result = 1;
    return result;
}
