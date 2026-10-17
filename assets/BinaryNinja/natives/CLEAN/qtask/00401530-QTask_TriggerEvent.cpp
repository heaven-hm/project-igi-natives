// IGI native provenance: QTask_TriggerEvent - 0x00401530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401530-QTask_TriggerEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_TriggerEvent.h"
int32_t QTask_TriggerEvent(int16_t context, int32_t param_2, int32_t param_3)

{
    int32_t entity_val = g_567c70 + 1;
    g_536148 += 1;
    g_567c70 = entity_val;
    int32_t source_1 = param_2 * 0x180;
    int32_t data_2 = context + source_1;
    *((data_2 << 2) + &g_a96ae0) = param_3;
    *(data_2 + 0x54ff34) = entity_val == 1;
    int32_t context_val = 0;

    for (int16_t* i = &g_af5ee8; i < 0xafa6e8; )
    {
        if (*(i + 0x1d) && *i == context && !*(source_1 + context_val + 0x54ff34))
            QTask_TriggerEvent(context_val, param_2, param_3);

        i = &i[0x18];
        context_val += 1;
    }

    QTask_DeleteTask();
    int32_t result = g_567c70 - 1;
    g_567c70 = result;
    return result;
}
