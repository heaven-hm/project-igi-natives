// IGI native provenance: HumanAI_EventQueued - 0x00450520 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450520-HumanAI_EventQueued.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_EventQueued.h"
int32_t* HumanAI_EventQueued(void* context, int32_t* param_2)

{
    int32_t* result = *(context + 0x810);

    if (!*result || !result)
        return 0;

    Camera_ApplyHandiCam_33(result);
    result[1] = 0;
    *result = 0;
    result[2] = *param_2;
    result[3] = param_2[1];
    int32_t source_val = param_2[4];

    if (source_val)
        memcpy(&result[4], source_val, 0x18);

    void* data_1 = param_2[6];

    if (!data_1)
        result[0xb] = 0;
    else
        result[0xb] = QTask_LinkEventHandler_2(data_1);

    void* flagP1 = param_2[5];

    if (!flagP1)
        result[0xa] = 0;
    else
        result[0xa] = QTask_LinkEventHandler_2(flagP1);

    *(context + 0x8e0) += 1;
    return result;
}
