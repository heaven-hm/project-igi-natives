// IGI native provenance: FX_FireBallUpdate_12 - 0x004894E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004894E0-FX_FireBallUpdate_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FireBallUpdate_12.h"
int32_t* FX_FireBallUpdate_12(int32_t* context)

{
    Qtask_UpdateList(context[2]);
    *(context + 0x2a) = 0;
    return Camera_ApplyHandiCam_33(context);
}
