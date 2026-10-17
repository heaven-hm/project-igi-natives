// IGI native provenance: Menu_FormatScreen_15 - 0x00424E40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424E40-Menu_FormatScreen_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_FormatScreen_15.h"
int32_t Menu_FormatScreen_15(void* context, int32_t param_2)

{
    *(context + 0x34) = param_2;
    return param_2;
}
