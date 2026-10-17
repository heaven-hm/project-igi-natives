// IGI native provenance: Script_ParseEnumInt32_27 - 0x004FA8D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA8D0-Script_ParseEnumInt32_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_27.h"
double* Script_ParseEnumInt32_27(void* context, double* param_2)

{
    Sys_ResolveSymbol_4(*(context + 4));
    void item_c;
    Resource_Unpack(*(context + 4), &item_c, 9);
    double* result = param_2;
    double item_b;
    *result = item_b;
    result = 1;
    return result;
}
