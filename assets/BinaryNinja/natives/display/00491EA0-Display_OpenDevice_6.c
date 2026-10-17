// IGI native provenance: Display_OpenDevice_6 - 0x00491EA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491EA0-Display_OpenDevice_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_6.h"
int32_t Display_OpenDevice_6(int32_t context, int32_t param_2)

{
    int32_t item_c = context;
    int32_t result;
    int32_t* item_8 = &result;
    int32_t item_4 = param_2;
    int32_t entity_2 = *((g_542334 << 2) + &g_a94e84);
    result = 0;

    if (!entity_2)
        return 0;

    entity_2(&item_c);
    return result;
}
