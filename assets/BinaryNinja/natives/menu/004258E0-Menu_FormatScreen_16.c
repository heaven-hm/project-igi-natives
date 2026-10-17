// IGI native provenance: Menu_FormatScreen_16 - 0x004258E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004258E0-Menu_FormatScreen_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_FormatScreen_16.h"
int32_t Menu_FormatScreen_16(int32_t context) {
    if (context != 7 && context != 6)
        return 0;

    return 1;
}
