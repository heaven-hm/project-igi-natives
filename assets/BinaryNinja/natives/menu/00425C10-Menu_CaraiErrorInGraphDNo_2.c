// IGI native provenance: Menu_CaraiErrorInGraphDNo_2 - 0x00425C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00425C10-Menu_CaraiErrorInGraphDNo_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_CaraiErrorInGraphDNo_2.h"
int32_t* Menu_CaraiErrorInGraphDNo_2(int32_t* context, void* param_2, int32_t param_3, void* param_4)

{
    Physics_ApplyImpulse_8(&context, param_2, context);
    int32_t* data_val = context;

    if (data_val)
    {
        int32_t entity_1 = *data_val;

        if (entity_1 != param_3)
        {
            int32_t* data_1 = Physics_CheckHullCollision_8(param_2, entity_1, param_3);

            if (data_1)
                return Script_ExecuteLevelScript_23(param_2, *data_1);

            int32_t item_c_3 = param_3;
            int32_t item_10_3 = *context;
            int32_t item_14_2 = *(param_4 + 0x20);
            Warning_Show("CarAI: Error in graph %d. No link between nodes %d and %d.");
            return context;
        }
    }

    return data_val;
}
