// IGI native provenance: Camera_ApplyHandiCam_21 - 0x004AAD90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AAD90-Camera_ApplyHandiCam_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_21.h"
void* Camera_ApplyHandiCam_21(int32_t context)

{
    void* result = g_c321f8;
    void* entity_1 = result + g_c321f4 * 0x14;

    while (true)
    {
        if (result >= entity_1)
            return nullptr;

        if (context - *(result + 0xc) < 0x100000)
            break;

        result += 0x14;
    }

    return result;
}
