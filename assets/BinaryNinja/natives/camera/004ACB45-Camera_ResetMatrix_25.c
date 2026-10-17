// IGI native provenance: Camera_ResetMatrix_25 - 0x004ACB45 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ACB45-Camera_ResetMatrix_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_25.h"
int32_t Camera_ResetMatrix_25(int32_t* context, int32_t param_2)

{
    void item_10;
    Camera_ApplyHandiCam_29(&item_10, &param_2, param_2, 0, 0, 0, 0);
    return Camera_ApplyPostProcess_25(&item_10, context);
}
