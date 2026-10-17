// IGI native provenance: Camera_ApplyPostProcess_5 - 0x004A5760 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5760-Camera_ApplyPostProcess_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_5.h"
int32_t Camera_ApplyPostProcess_5(long double context , long double param_2 ) {
    double item_8 = context;
    int16_t fpu_control;
    int16_t x87tag;
    return Camera_UpdateViewCone_5(*(&item_8 + 4), fpu_control, x87tag, context, param_2, item_8);
}
