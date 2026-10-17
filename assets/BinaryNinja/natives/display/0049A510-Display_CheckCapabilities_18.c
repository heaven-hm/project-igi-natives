// IGI native provenance: Display_CheckCapabilities_18 - 0x0049A510 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049A510-Display_CheckCapabilities_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CheckCapabilities_18.h"
int32_t Display_CheckCapabilities_18(void* context, int32_t param_2)

{
    *(context + 0x98) = param_2;
    return param_2;
}
