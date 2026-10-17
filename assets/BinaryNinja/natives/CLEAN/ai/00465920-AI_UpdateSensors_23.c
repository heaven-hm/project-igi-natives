// IGI native provenance: AI_UpdateSensors_23 - 0x00465920 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00465920-AI_UpdateSensors_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateSensors_23.h"
void* AI_UpdateSensors_23(void* context, int32_t param_2, char param_3)

{
    *(context + 0x198) = param_3;

    if (!param_2)
    {
        memset(context + 0x180, 0, 0x18);
        return context;
    }

    memcpy(context + 0x180, param_2, 0x18);
    return context;
}
