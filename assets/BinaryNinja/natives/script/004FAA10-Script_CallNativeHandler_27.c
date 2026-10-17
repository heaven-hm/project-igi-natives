// Original IGI.EXE function: Script_CallNativeHandler_27 (VA 0x004FAA10; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_27.h"
uint32_t Script_CallNativeHandler_27(void* a1)

{
    void* srcS = a1;
    Sys_ResolveSymbol_4(*(srcS + 4));
    Resource_Unpack(*(srcS + 4), &a1, 1);
    Sys_ResolveSymbol_4(*(srcS + 4));
    Sys_ExecuteBytecode_4(*(srcS + 4), 0xffffffff, 1);
    return a1;
}
