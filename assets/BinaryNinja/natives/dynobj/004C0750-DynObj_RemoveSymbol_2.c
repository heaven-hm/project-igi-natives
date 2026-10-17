// Original IGI.EXE function: DynObj_RemoveSymbol_2 (VA 0x004C0750; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RemoveSymbol_2.h"
void* DynObj_RemoveSymbol_2(void* context)

{
    void* result = context;
    int32_t* i_1 = *(result + 8);

    for (int32_t* i = *i_1; i; i = *i)
    {
        Camera_ApplyHandiCam_33(i_1);
        result = Sys_ExecuteBytecode_2(i_1);
        i_1 = i;
    }

    return result;
}
