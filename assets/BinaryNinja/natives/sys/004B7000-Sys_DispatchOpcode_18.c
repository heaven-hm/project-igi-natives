// Original IGI.EXE function: Sys_DispatchOpcode_18 (VA 0x004B7000; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_18.h"
int32_t* Sys_DispatchOpcode_18(int32_t* a1)

{
    int32_t* result = Mem_Alloc(0x18, 4);

    if (Sys_IlfFileCorruptS(result, a1))
        return result;

    Sys_ExecuteBytecode_2(result);
    return 0;
}
