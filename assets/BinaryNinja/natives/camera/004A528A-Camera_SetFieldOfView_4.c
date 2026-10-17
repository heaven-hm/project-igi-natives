// IGI native provenance: Camera_SetFieldOfView_4 - 0x004A528A - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A528A-Camera_SetFieldOfView_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_4.h"
uint32_t Camera_SetFieldOfView_4(int32_t* context)

{
    int32_t f0 = context[1];
    context[1] -= 1;

    if (f0 - 1 < 0)
        return Camera_UpdateViewCone_9(context);

    char* entity_val = *context;
    uint32_t result = *entity_val;
    *context = &entity_val[1];
    return result;
}
