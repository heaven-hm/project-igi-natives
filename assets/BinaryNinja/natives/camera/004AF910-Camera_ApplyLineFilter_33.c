// IGI native provenance: Camera_ApplyLineFilter_33 - 0x004AF910 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AF910-Camera_ApplyLineFilter_33.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_33.h"
int32_t* Camera_ApplyLineFilter_33(int32_t* context, int32_t* param_2)

{
    int32_t temp_val = *context;
    param_2[1] = context;
    *param_2 = temp_val;
    *(*context + 4) = param_2;
    *context = param_2;
    return context;
}
