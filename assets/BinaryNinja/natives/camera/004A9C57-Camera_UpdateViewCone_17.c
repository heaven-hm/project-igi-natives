// IGI native provenance: Camera_UpdateViewCone_17 - 0x004A9C57 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9C57-Camera_UpdateViewCone_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_17.h"
long double __startOneArgErrorHandling(int32_t context, int32_t param_2, long double param_3 , int32_t param_4 , int32_t param_5 )

{
    int32_t item_24 = context;
    double item_c = param_3;
    int32_t entity_val;
    int32_t item_20 = entity_val;
    int32_t item_1c = param_4;
    int32_t item_18 = param_5;
    int16_t arg_4;
    Camera_ApplyWideScreen_27(param_2, &item_24, &arg_4);
    int16_t x87control_1;
    int16_t x87status_1;

    if (arg_4 != 0x27f)
        x87control_1 = __fldcw_memmem16(arg_4);
    return item_c;
}
