// IGI native provenance: AI_CheckVisibility_2 - 0x00451030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451030-AI_CheckVisibility_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckVisibility_2.h"
int32_t* AI_CheckVisibility_2(void* context)

{
    int32_t* result = *(context + 0x1508);

    if (!*result)
        return nullptr;

    Camera_ApplyHandiCam_33(result);
    return result;
}
