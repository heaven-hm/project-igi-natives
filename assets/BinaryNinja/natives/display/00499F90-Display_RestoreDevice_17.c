// IGI native provenance: Display_RestoreDevice_17 - 0x00499F90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00499F90-Display_RestoreDevice_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_RestoreDevice_17.h"
int32_t Display_RestoreDevice_17(void* context, char param_2)

{
    *(context + 0x56ac) = param_2;
    return param_2;
}
