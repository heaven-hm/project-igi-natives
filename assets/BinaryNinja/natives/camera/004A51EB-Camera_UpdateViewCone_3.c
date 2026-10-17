// IGI native provenance: Camera_UpdateViewCone_3 - 0x004A51EB - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A51EB-Camera_UpdateViewCone_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_3.h"
int32_t Camera_UpdateViewCone_3(int32_t context)

{
    if (g_936054 == 1)
        Camera_ResetMatrix_8();

    Camera_ProgramNameUnknown(context);
    return g_543e7c(0xff);
}
