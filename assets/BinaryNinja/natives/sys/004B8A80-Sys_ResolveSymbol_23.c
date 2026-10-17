// IGI native provenance: Sys_ResolveSymbol_23 - 0x004B8A80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8A80-Sys_ResolveSymbol_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_23.h"
char* Sys_ResolveSymbol_23(float context, int32_t param_2, char* param_3, char* param_4)

{
    if (!*(context + 4))
        return Sys_SyntaxErrorInStringE(*(*(context + 8) + (param_2 << 2)), param_3, param_4);

    return Sys_PushStack_28(context, param_2, param_3, param_4);
}
