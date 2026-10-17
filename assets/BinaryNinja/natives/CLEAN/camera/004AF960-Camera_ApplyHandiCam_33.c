// IGI native provenance: Camera_ApplyHandiCam_33 - 0x004AF960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AF960-Camera_ApplyHandiCam_33.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_33.h"
int32_t* Camera_ApplyHandiCam_33(int32_t* context)

{
    *context[1] = *context;
    *(*context + 4) = context[1];
    context[1] = 0;
    *context = 0;
    return context;
}
