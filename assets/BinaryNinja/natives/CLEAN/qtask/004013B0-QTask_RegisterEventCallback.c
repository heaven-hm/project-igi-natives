// IGI native provenance: QTask_RegisterEventCallback - 0x004013B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004013B0-QTask_RegisterEventCallback.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_RegisterEventCallback.h"
int32_t* QTask_RegisterEventCallback(void* context, int16_t param_2, int32_t param_3)

{
    int32_t* result = QTask_LinkEventHandler(context, param_2);

    if (context)
        Camera_ApplyLineFilter_33(context + 8, result);

    int32_t entity_val = 0;
    entity_val = result[7];
    int32_t data_val = *((entity_val << 2) + &g_a96ae0);

    if (data_val)
        data_val(result, param_3);

    return result;
}
