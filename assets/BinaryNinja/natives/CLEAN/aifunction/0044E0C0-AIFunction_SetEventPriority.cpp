// IGI native provenance: AIFunction_SetEventPriority - 0x0044E0C0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E0C0-AIFunction_SetEventPriority.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_SetEventPriority.h"
int32_t AIFunction_SetEventPriority(int32_t context, float param_2 )

// Sig: void AIFunction_SetEventPriority(int priority)
// Note: Sets the priority of the CURRENT event being handled (decides which
// queued event wins). Param: priority = engine priority number. Use inside an
// event handler.
{
    int32_t data_val = Script_GetArg(param_2, 0);
    int32_t entity_val = g_5bda58;

    if (!*(entity_val + data_val + 0x8e4))
    {
        *(entity_val + data_val + 0x8e4) = 1;
        void* entity_1 = g_5bda58;
        *(entity_1 + (*(entity_1 + 0x8dc) << 2) + 0x81c) = data_val;
        void* data_1 = g_5bda58;
        *(data_1 + 0x8dc) += 1;
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
