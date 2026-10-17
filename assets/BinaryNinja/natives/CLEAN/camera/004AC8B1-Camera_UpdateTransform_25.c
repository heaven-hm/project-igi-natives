// IGI native provenance: Camera_UpdateTransform_25 - 0x004AC8B1 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AC8B1-Camera_UpdateTransform_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_25.h"
int32_t* Camera_UpdateTransform_25(int32_t context, int32_t* param_2)

{
    int32_t* result = param_2;
    int32_t* entity_1 = context - result;
    int32_t i_1 = 3;
    int32_t i;

    do
    {
        *(entity_1 + result) = *result;
        result = &result[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
