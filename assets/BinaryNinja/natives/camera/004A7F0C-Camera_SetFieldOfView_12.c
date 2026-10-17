// IGI native provenance: Camera_SetFieldOfView_12 - 0x004A7F0C - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7F0C-Camera_SetFieldOfView_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_12.h"
int32_t Camera_SetFieldOfView_12(int32_t* context)

{
    *context += 8;
    void* entity_val = *context;
    *(entity_val - 4);
    return *(entity_val - 8);
}
