// IGI native provenance: Display_CloseDevice_4 - 0x00491CA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491CA0-Display_CloseDevice_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_4.h"
void Display_CloseDevice_4(int32_t* context)

{
    for (int32_t* i = context; i; i = *i)
        i[1]();
}
