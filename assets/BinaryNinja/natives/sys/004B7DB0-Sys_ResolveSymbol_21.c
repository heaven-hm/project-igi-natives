// Original IGI.EXE function: Sys_ResolveSymbol_21 (VA 0x004B7DB0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_21.h"
int32_t Sys_ResolveSymbol_21(int32_t* a1)

{
    return Sys_OpenFileStream_21(*a1, a1[1], a1[2], a1[5], a1[6], a1[7], a1[4], a1[3],
        a1[9], a1[8]);
}
