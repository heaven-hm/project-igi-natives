// IGI native provenance: Camera_ApplyLineFilter_24 - 0x004AC655 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AC655-Camera_ApplyLineFilter_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_24.h"
int32_t Camera_ApplyLineFilter_24(int32_t context, int32_t param_2)

{
    int16_t fpu_control;
    return Camera_SetFieldOfView_24(fpu_control, context, param_2 & 0xfff7ffff);
}
