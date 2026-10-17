// IGI native provenance: Camera_ApplyWideScreen_25 - 0x004ACAEC - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ACAEC-Camera_ApplyWideScreen_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_25.h"
int32_t Camera_ApplyWideScreen_25(int16_t* context, int32_t* param_2)

{
    return Camera_ApplyHandiCam_25(context, param_2, 0x546ac0);
}
