// IGI native provenance: AIFunction_RemoveAlarmActions - 0x0044DBC0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044DBC0-AIFunction_RemoveAlarmActions.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_RemoveAlarmActions.h"
int32_t AIFunction_RemoveAlarmActions(int32_t context)

// Sig: void AIFunction_RemoveAlarmActions()
// Note: Removes all queued ALARM-related actions from this AI (calms it down).
// Takes no args. Use to de-escalate an NPC you control.
{
    void* entity_val = g_5bda58;
    int32_t* i_1 = *(entity_val + 0x8fc);
    int32_t dest_val = *(entity_val + 0x83c);

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == dest_val)
        {
            AI_CombatTarget_2(entity_val, i_1);
            entity_val = g_5bda58;
        }

        i_1 = i;
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
