// IGI native provenance: Menu_FormatScreen_10 - 0x00420290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420290-Menu_FormatScreen_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_FormatScreen_10.h"
int32_t Menu_FormatScreen_10(int32_t context)

{
    int32_t data_val = *(context + 0x248);

    if (!data_val)
        return 0;

    return (data_val - 1) * *(context + 0xa0) + 0.5;
}
