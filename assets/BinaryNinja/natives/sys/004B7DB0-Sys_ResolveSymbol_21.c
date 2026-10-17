// Original IGI.EXE function: Sys_ResolveSymbol_21 (VA 0x004B7DB0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_21.h"
int32_t Sys_ResolveSymbol_21(int32_t* context)

{
    return Sys_OpenFileStream_21(*context, context[1], context[2], context[5], context[6], context[7], context[4], context[3],
        context[9], context[8]);
}
