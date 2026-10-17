// IGI native provenance: Camera_UpdateTransform_5 - 0x004A54A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A54A0-Camera_UpdateTransform_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_5.h"
void* const Camera_UpdateTransform_5(int32_t context)

{
    void arg_4;
    void* entity_val = &arg_4;

    while (context >= 0x1000)
    {
        entity_val -= 0x1000;
        context -= 0x1000;
        *entity_val;
    }

    void* entity_1 = entity_val - context;
    *entity_1;
    *(entity_1 - 4) = return_addr;
    return return_addr;
}
