// IGI native provenance: Display_SetDisplayMode_11 - 0x004966B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004966B0-Display_SetDisplayMode_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_11.h"
int32_t* Display_SetDisplayMode_11(int32_t* context, int32_t** param_2)

{
    int32_t* result = context;
    void* entity_val = *result;

    if (entity_val)
        *(entity_val + 4) = result[1];

    int32_t* entity_1 = result[1];

    if (entity_1)
        *entity_1 = *result;

    if (*param_2 == result)
    {
        result = *result;
        *param_2 = result;
    }

    return result;
}
