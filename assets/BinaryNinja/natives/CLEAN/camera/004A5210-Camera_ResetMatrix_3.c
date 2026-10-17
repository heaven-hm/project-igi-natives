// IGI native provenance: Camera_ResetMatrix_3 - 0x004A5210 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5210-Camera_ResetMatrix_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_3.h"
void Camera_ResetMatrix_3(int32_t context) {
    if (g_936054 == 1)
        Camera_ResetMatrix_8();

    Camera_ProgramNameUnknown(context);
    ExitProcess(0xff);
    /* no return */
}
