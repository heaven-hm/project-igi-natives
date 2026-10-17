// IGI native provenance: Display_CheckCapabilities_12 - 0x00497450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497450-Display_CheckCapabilities_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CheckCapabilities_12.h"
uint32_t Display_CheckCapabilities_12(char* context)

{
    char* source_val = context;
    uint32_t result = 0;
    char i = *source_val;
    uint32_t dest_val = 1;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *source_val = i - 0x20;

        uint32_t result_1 = COMBINE(0, result + *source_val * dest_val) % 0x65;
        i = source_val[1];
        dest_val = dest_val + 0x13e;
        source_val = &source_val[1];
        result = result_1;
    }

    return result;
}
