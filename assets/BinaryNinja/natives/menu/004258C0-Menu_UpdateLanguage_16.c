// IGI native provenance: Menu_UpdateLanguage_16 - 0x004258C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004258C0-Menu_UpdateLanguage_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_16.h"
int32_t Menu_UpdateLanguage_16(int32_t context) {
    if (context != 2 && context != 3)
        return 0;

    return 1;
}
