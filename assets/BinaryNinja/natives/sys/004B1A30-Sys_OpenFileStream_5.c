// Original IGI.EXE function: Sys_OpenFileStream_5 (VA 0x004B1A30; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_5.h"
int32_t Sys_OpenFileStream_5(void* a1)

{
    int32_t* valA = Sys_NoFilesLoadedAtAddre(a1);
    int32_t objC = valA[3];
    int32_t valA4 = *(objC * 0x8c + &g_943700);

    if (!valA4)
    {
        Sys_ExecuteBytecode_2(a1);
        return Sys_CheckHeap_25(valA);
    }

    valA4(objC, valA);
    return Sys_CheckHeap_25(valA);
}
