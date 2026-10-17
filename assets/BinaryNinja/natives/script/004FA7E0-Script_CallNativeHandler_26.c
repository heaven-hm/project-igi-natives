// Original IGI.EXE function: Script_CallNativeHandler_26 (VA 0x004FA7E0; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_26.h"
char* Script_CallNativeHandler_26(void* a1, char* a2)

{
    void* srcS = a1;
    Sys_ResolveSymbol_4(*(srcS + 4));
    Resource_Unpack(*(srcS + 4), &a1, 2);
    char* result = a2;
    *result = *(&a1 + 1);
    result = 1;
    return result;
}
