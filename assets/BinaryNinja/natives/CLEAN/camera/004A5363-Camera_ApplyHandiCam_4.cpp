// IGI native provenance: Camera_ApplyHandiCam_4 - 0x004A5363 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5363-Camera_ApplyHandiCam_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_4.h"
int32_t Camera_ApplyHandiCam_4()

{
    Camera_ApplyPostProcess_4();
    g_93605c = Camera_Kernel32();
    int32_t result = Camera_ApplyBandFilter_10();
    __fnclex();
    return result;
}
