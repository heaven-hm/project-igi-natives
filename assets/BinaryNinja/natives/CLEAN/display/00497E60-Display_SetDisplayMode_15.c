// IGI native provenance: Display_SetDisplayMode_15 - 0x00497E60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497E60-Display_SetDisplayMode_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_15.h"
void* Display_SetDisplayMode_15(void* context, float param_2)

{
    *(context + 0x5c) = param_2;
    return context;
}
