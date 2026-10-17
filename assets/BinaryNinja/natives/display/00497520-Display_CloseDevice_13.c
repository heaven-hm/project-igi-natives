// IGI native provenance: Display_CloseDevice_13 - 0x00497520 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497520-Display_CloseDevice_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_13.h"
int32_t Display_CloseDevice_13(void* context, int32_t* param_2, int32_t* param_3)

{
    *(context + 0x30) = *param_2;
    *(context + 0x34) = param_2[1];
    *(context + 0x38) = *param_3;
    *(context + 0x3c) = param_3[1];
    int32_t result = g_684110 + 1;
    g_684110 = result;
    return result;
}
