// Original IGI.EXE function: Sys_OpenFileStream_31 (VA 0x004BF850; static CFG gate PASS, CFG score 0.952).
#include "Sys_OpenFileStream_31.h"
int32_t Sys_OpenFileStream_31(int32_t* a1, int32_t** a2)

{
    Sys_While(a1);
    int32_t* valA = Mem_Alloc(0x14, 4);
    __builtin_memset(valA, 0, 0x14);
    valA[1] = 0;
    *valA = 0;
    valA[2] = 4;
    *a2 = valA;

    if (Sys_CloseFileStream_31(a1, &a1[2]) && *a1[7] == 0x28)
    {
        int32_t v_10_1 = 0;

        if (Sys_PopStack_24(a1, &valA[3]) && Sys_CloseFileStream_31(a1, &a1[2]) && Sys_UnexpectedEndOfFile(a1, &valA[4]))
            return 1;
    }

    return 0;
}
