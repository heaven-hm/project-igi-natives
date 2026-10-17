// IGI native provenance: Display_RestoreDevice_12 - 0x00497410 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497410-Display_RestoreDevice_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_RestoreDevice_12.h"
int32_t Display_RestoreDevice_12(char* context)

{
    char* temp_val = context;
    int32_t result = 0;
    uint32_t source_val = 1;
    char i = *temp_val;

    while (i)
    {
        if (i >= 0x61 && i <= 0x7a)
            *temp_val = i - 0x20;

        result += *temp_val * source_val;
        i = temp_val[1];
        temp_val = &temp_val[1];
        source_val = source_val + 0x13d;
    }

    return result;
}
