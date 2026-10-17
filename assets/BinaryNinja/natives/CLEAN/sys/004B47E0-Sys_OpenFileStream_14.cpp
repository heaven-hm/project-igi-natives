// IGI native provenance: Sys_OpenFileStream_14 - 0x004B47E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B47E0-Sys_OpenFileStream_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_14.h"
int32_t Sys_OpenFileStream_14(int32_t* context, int32_t param_2)

{
    Sys_ResolveSymbol_13(context);
    int32_t temp_val = context[1];
    *context ^= param_2;
    int32_t result = param_2 << 9;
    int32_t entity_5 = context[2] - result;
    context[1] = temp_val + (param_2 << 0xf);
    context[2] = entity_5;
    return result;
}
