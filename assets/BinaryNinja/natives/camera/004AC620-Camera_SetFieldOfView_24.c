// IGI native provenance: Camera_SetFieldOfView_24 - 0x004AC620 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AC620-Camera_SetFieldOfView_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_24.h"
int32_t Camera_SetFieldOfView_24(int16_t context , int32_t param_2, int32_t param_3)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(context);
    item_8 = f0;
    int32_t result = (Camera_ApplyBandFilter_24(item_8) & ~param_3) | (param_2 & param_3);
    int16_t fpu_control;
    int16_t x87status_1;
    fpu_control = __fldcw_memmem16(Camera_ApplyWideScreen_24(result));
    return result;
}
