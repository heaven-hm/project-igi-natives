// IGI native provenance: Camera_ResetMatrix_12 - 0x004A8589 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8589-Camera_ResetMatrix_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_12.h"
long double Camera_ResetMatrix_12(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, double param_7, int32_t param_8)

{
    int32_t data_val = Camera_SetFieldOfView_13(param_2);
    int32_t item_20 = data_val;
    int16_t fpu_control;

    if (!data_val)
    {
        Camera_UpdateTransform_14(fpu_control, param_8, 0xffff);
        Camera_UpdateTransform_13(context);
        return param_7;
    }

    int32_t item_1c = param_3;
    int32_t item_18 = param_4;
    int32_t item_14 = param_5;
    int32_t item_10 = param_6;
    int32_t item_24 = context;
    int32_t item_8 = *(&param_7 + 4);
    Camera_UpdateTransform_14(fpu_control, param_8, 0xffff);
    int32_t* item_34 = &item_24;
    Camera_UpdateTransform_13(context);
    return param_7;
}
