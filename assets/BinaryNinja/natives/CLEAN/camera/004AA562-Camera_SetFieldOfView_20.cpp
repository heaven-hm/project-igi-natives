// IGI native provenance: Camera_SetFieldOfView_20 - 0x004AA562 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AA562-Camera_SetFieldOfView_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_20.h"
void Camera_SetFieldOfView_20()

{
    if (!g_c32548)
    {
        Camera_ApplyWideScreen_19(0xfffffffd);
        g_c32548 = 1;
    }
}
