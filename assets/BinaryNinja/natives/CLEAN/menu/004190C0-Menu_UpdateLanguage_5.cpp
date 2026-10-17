// IGI native provenance: Menu_UpdateLanguage_5 - 0x004190C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004190C0-Menu_UpdateLanguage_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_5.h"
void* Menu_UpdateLanguage_5(void* context)

{
    *(context + 0x26c2) = 1;
    return context;
}
