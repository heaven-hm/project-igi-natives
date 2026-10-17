// Original IGI.EXE function: Script_CallNativeHandler_27 (VA 0x004FAA10; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_27.h"
uint32_t Script_CallNativeHandler_27(void* context)

{
    void* source_val = context;
    Sys_ResolveSymbol_4(*(source_val + 4));
    Resource_Unpack(*(source_val + 4), &context, 1);
    Sys_ResolveSymbol_4(*(source_val + 4));
    Sys_ExecuteBytecode_4(*(source_val + 4), 0xffffffff, 1);
    return context;
}
