// IGI native provenance: AI_UpdatePatrol_21 - 0x004636A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004636A0-AI_UpdatePatrol_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_21.h"
int32_t* AI_UpdatePatrol_21(void* context, int32_t* param_2)

{
    int32_t* data_val = *(context + 0x7b4);

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        *(context + 0x7b4) = 0;
    }

    int32_t* result = param_2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        *(context + 0x7b4) = result;
    }

    return result;
}
