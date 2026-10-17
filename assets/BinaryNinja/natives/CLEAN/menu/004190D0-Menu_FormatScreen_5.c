// IGI native provenance: Menu_FormatScreen_5 - 0x004190D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004190D0-Menu_FormatScreen_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_FormatScreen_5.h"
void* Menu_FormatScreen_5(void* context)

{
    *(context + 0x26c4) = 1;
    return context;
}
