// Original IGI.EXE function: TransparencyList_LoadParameters (VA 0x00531F60; static CFG gate PASS, CFG score 1.000).
#include "TransparencyList_LoadParameters.h"
int32_t TransparencyList_LoadParameters(void* context)

{
    DynObj_RemoveSymbol_7(*(context + 0x68), context, 0xffffffff);
    Sys_ExecuteBytecode_2(*(context + 0x74));
    void* temp_val = *(context + 0x78);
    *(context + 0x74) = 0;
    int32_t result = Sys_ExecuteBytecode_2(temp_val);
    *(context + 0x78) = 0;
    return result;
}
