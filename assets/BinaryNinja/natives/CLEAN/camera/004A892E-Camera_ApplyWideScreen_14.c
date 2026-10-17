// IGI native provenance: Camera_ApplyWideScreen_14 - 0x004A892E - CFG score 68.2% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004A892E-Camera_ApplyWideScreen_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_14.h"
int32_t Camera_ApplyWideScreen_14()

{
    g_9361d8 = 0;
    void* flagP;
    long double fpu0;
    /* tailcall */
    return Camera_ApplyPostProcess_14(flagP, fpu0);
}
