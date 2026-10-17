// IGI native provenance: Env_UpdateCameraLens_6 - 0x00444BA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00444BA0-Env_UpdateCameraLens_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_UpdateCameraLens_6.h"
void* Env_UpdateCameraLens_6(void* context)

{
    *(context + 0x11e) = 1;
    *(context + 0x130) = 1;
    return context;
}
