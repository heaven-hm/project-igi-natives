// IGI native provenance: Display_CheckCapabilities_17 - 0x00499FA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00499FA0-Display_CheckCapabilities_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CheckCapabilities_17.h"
int32_t Display_CheckCapabilities_17(void* context, float param_2)

{
    int32_t result = (param_2 * -255.0f) << 0x18;
    *(context + 0x56c8) = 0xffffff - result;
    return result;
}
