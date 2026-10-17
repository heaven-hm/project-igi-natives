// Original IGI.EXE function: Script_CallNativeHandler_26 (VA 0x004FA7E0; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_26.h"
char* Script_CallNativeHandler_26(void* context, char* param_2)

{
    void* source_val = context;
    Sys_ResolveSymbol_4(*(source_val + 4));
    Resource_Unpack(*(source_val + 4), &context, 2);
    char* result = param_2;
    *result = *(&context + 1);
    result = 1;
    return result;
}
