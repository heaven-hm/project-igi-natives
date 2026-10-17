// IGI native provenance: Sys_ResolveSymbol_21 - 0x004B7DB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7DB0-Sys_ResolveSymbol_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_21.h"
int32_t Sys_ResolveSymbol_21(int32_t* context)

{
    return Sys_OpenFileStream_21(*context, context[1], context[2], context[5], context[6], context[7], context[4], context[3],
        context[9], context[8]);
}
