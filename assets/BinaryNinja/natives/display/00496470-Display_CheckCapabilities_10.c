// IGI native provenance: Display_CheckCapabilities_10 - 0x00496470 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00496470-Display_CheckCapabilities_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CheckCapabilities_10.h"
int32_t* Display_CheckCapabilities_10(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t* result = *(context + param_2 * 0xc);

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[3] == param_3)
            return result;

        result = i;
    }

    return nullptr;
}
