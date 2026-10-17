// IGI native provenance: Menu_CaraiErrorInGraphDNo - 0x00425B80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00425B80-Menu_CaraiErrorInGraphDNo.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_CaraiErrorInGraphDNo.h"
double* Menu_CaraiErrorInGraphDNo(double* context, void* param_2, int32_t* param_3, int32_t param_4, void* param_5)

{
    double* result = Physics_ApplyImpulse_8(&param_3, param_2, param_3);
    int32_t* entity_val = param_3;

    if (!entity_val)
        return result;

    int32_t data_val = *entity_val;

    if (data_val == param_4)
        return Script_CallNativeHandler_23(context, entity_val);

    int32_t* data_1 = Physics_CheckHullCollision_8(param_2, data_val, param_4);

    if (data_1)
        return Script_CallNativeHandler_23(context, Script_ExecuteLevelScript_23(param_2, *data_1));

    int32_t item_c_3 = param_4;
    int32_t item_10_3 = *param_3;
    int32_t item_14_3 = *(param_5 + 0x20);
    return Warning_Show("CarAI: Error in graph %d. No link between nodes %d and %d.");
}
