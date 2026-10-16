#include "gi_platform.h"
#include "0044DBC0-AIFunction_RemoveAlarmActions.h"
int32_t AIFunction_RemoveAlarmActions(int32_t a1)

// Sig: void AIFunction_RemoveAlarmActions()
// Note: Removes all queued ALARM-related actions from this AI (calms it down).
// Takes no args. Use to de-escalate an NPC you control.
{
    void* objC = g_5bda58;
    int32_t* i_1 = *(objC + 0x8fc);
    int32_t dstD = *(objC + 0x83c);

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == dstD)
        {
            AI_CombatTarget_2(objC, i_1);
            objC = g_5bda58;
        }

        i_1 = i;
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
