// IGI native provenance: Display_CloseDevice_6 - 0x00491EF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491EF0-Display_CloseDevice_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_6.h"
HRESULT Display_CloseDevice_6(int32_t context)

{
    return DirectDrawEnumerateExA(Display_SetDisplayMode_6, context, 7);
}
