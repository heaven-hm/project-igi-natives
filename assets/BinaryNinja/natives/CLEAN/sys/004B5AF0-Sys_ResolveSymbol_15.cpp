// IGI native provenance: Sys_ResolveSymbol_15 - 0x004B5AF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5AF0-Sys_ResolveSymbol_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_15.h"
int32_t Sys_ResolveSymbol_15(char* context, char* param_2)

{
    char* dest_val = param_2;
    char i = *dest_val;

    if (!i)
    {
        *context = 0;
        return i;
    }

    char* source_val = context;

    do
    {
        int32_t i_1 = i;
        int32_t entity_val;
        i = Camera_ApplyWideScreen_28(entity_val);
        *source_val = i;
        i = dest_val[1];
        source_val = &source_val[1];
        dest_val = &dest_val[1];
    } while (i);

    *source_val = i;
    return i;
}
