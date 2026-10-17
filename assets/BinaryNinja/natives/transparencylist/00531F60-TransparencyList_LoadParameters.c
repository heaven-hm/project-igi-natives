// Original IGI.EXE function: TransparencyList_LoadParameters (VA 0x00531F60; static CFG gate PASS, CFG score 1.000).
#include "TransparencyList_LoadParameters.h"
int32_t TransparencyList_LoadParameters(void* a1)

{
    DynObj_RemoveSymbol_7(*(a1 + 0x68), a1, 0xffffffff);
    Sys_ExecuteBytecode_2(*(a1 + 0x74));
    void* tmpD = *(a1 + 0x78);
    *(a1 + 0x74) = 0;
    int32_t result = Sys_ExecuteBytecode_2(tmpD);
    *(a1 + 0x78) = 0;
    return result;
}
