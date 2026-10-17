// IGI native provenance: Menu_UpdateLanguage_4 - 0x00418FD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418FD0-Menu_UpdateLanguage_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_4.h"
void* Menu_UpdateLanguage_4(void* context)

{
    *(context + 0x28) = 2;
    return context;
}
