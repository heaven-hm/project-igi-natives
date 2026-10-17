// IGI native provenance: Menu_DrawWidget_16 - 0x00425B70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00425B70-Menu_DrawWidget_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_DrawWidget_16.h"
int32_t Menu_DrawWidget_16(void* context)

{
    return *(context + 0x4c) + 0x20;
}
