#include "0044DBC0-AIFunction_RemoveAlarmActions.h"
/* 0x0044dbc0 AIFunction_RemoveAlarmActions full linked: callers=0 callees=2 */
int32_t AIFunction_RemoveAlarmActions(int32_t a1)

// Sig: void AIFunction_RemoveAlarmActions()
// Note: Removes all queued ALARM-related actions from this AI (calms it down).
// Takes no args. Use to de-escalate an NPC you control.
{
    struct ai_ctx* ecx = g_5bda58;
    int32_t* i_1;
    i_1 = ecx->pad[0x8fc];
    *(&i_1 + 1) = ecx->pad[0x8fd];
    *(&i_1 + 2) = ecx->pad[0x8fe];
    *(&i_1 + 3) = ecx->pad[0x8ff];
    int32_t edi;
    edi = ecx->pad[0x83c];
    *(&edi + 1) = ecx->pad[0x83d];
    *(&edi + 2) = ecx->pad[0x83e];
    *(&edi + 3) = ecx->pad[0x83f];

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == edi)
        {
            sub_450ff0(ecx, i_1);
            ecx = g_5bda58;
        }

        i_1 = i;
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
