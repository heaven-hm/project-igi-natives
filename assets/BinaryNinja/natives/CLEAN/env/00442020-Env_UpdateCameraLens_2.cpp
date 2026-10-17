// IGI native provenance: Env_UpdateCameraLens_2 - 0x00442020 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00442020-Env_UpdateCameraLens_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_UpdateCameraLens_2.h"
int32_t Env_UpdateCameraLens_2(int32_t* context, void* param_2)

{
    int32_t data_val = AI_UpdateOrders_17();
    int16_t saved_target = data_val;
    data_val = *(param_2 + 0x1c);
    char result = TaskType_IsDerivedFrom(data_val, saved_target);

    if (result)
        return AI_MoveToNode_23(context, param_2);

    if (*(param_2 + 0x1c) == g_57c180)
        memcpy(context, param_2 + 0xf0, 0x18);

    return result;
}
