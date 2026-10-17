// IGI native provenance: Display_SetDisplayMode_12 - 0x00496E40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00496E40-Display_SetDisplayMode_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_12.h"
int32_t Display_SetDisplayMode_12(void* context)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* data_1 = *(context + 0x10);
    return (*(*data_1 + 0x48))(data_1);
}
