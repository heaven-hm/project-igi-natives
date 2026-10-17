// IGI native provenance: Camera_ApplyHandiCam_7 - 0x004A5E25 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5E25-Camera_ApplyHandiCam_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_7.h"
int32_t Camera_ApplyHandiCam_7(void* context )

{
    int32_t result = 0;
    result = ***(context - 0x14) == 0xc0000005;
    return result;
}
