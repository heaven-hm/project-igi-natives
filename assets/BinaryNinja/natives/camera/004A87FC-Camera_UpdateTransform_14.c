// IGI native provenance: Camera_UpdateTransform_14 - 0x004A87FC - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A87FC-Camera_UpdateTransform_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_14.h"
int32_t Camera_UpdateTransform_14(int16_t context , int32_t param_2, int32_t param_3)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(context);
    item_8 = f0;
    int16_t fpu_control;
    int16_t x87status_1;
    fpu_control = __fldcw_memmem16(((~param_3 & item_8) | (param_3 & param_2)));
    return item_8;
}
