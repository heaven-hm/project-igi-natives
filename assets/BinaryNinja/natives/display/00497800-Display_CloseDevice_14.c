// IGI native provenance: Display_CloseDevice_14 - 0x00497800 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497800-Display_CloseDevice_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_14.h"
int32_t Display_CloseDevice_14(int32_t context)

{
    int32_t result = g_6e5b98;
    int32_t entity_val = result + context;
    int32_t temp_1 = g_6e5ba0;
    g_6e5b98 = entity_val;

    if (entity_val - 0x684118 > temp_1)
        g_6e5ba0 = entity_val - 0x684118;

    return result;
}
