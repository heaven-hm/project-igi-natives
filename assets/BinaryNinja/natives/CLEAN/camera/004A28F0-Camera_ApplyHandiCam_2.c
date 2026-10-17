// IGI native provenance: Camera_ApplyHandiCam_2 - 0x004A28F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A28F0-Camera_ApplyHandiCam_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_2.h"
int32_t Camera_ApplyHandiCam_2()

{
    int32_t result = g_543d54;

    if (result >= 9)
    {
        g_543d54 = 1;
        return result;
    }

    g_543d54 = result + 1;
    return result + 1;
}
