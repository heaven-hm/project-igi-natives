// IGI native provenance: Menu_DrawWidget_4 - 0x00419050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419050-Menu_DrawWidget_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_DrawWidget_4.h"
void* Menu_DrawWidget_4(void* context)

{
    *(context + 0x20) = 0x384;
    *(context + 0x28) = 0;
    return context;
}
