// Original IGI.EXE function: AIAction_KickGrenade (VA 0x0044D960; static CFG gate PASS, CFG score 0.905).
#include "AIAction_KickGrenade.h"
int32_t AIAction_KickGrenade(int32_t context, int32_t param_2 )

// Sig: void AIAction_KickGrenade(int param)
// Note: Kicks a nearby live grenade away (retail soldier behaviour). Param:
// param = grenade/context reference from the event. Use in grenade-event
// handlers.
{
    void* data_val = Env_CheckAmbientArea_12();
    int32_t data_2 = Script_GetArg(param_2, 0);

    if (**(data_val + 0x28))
    {
        int32_t* data_3 = AI_CheckVisibility_2(g_5bda58);
        memcpy(&data_3[2], data_val + 0x10, 0x18);
        void* item_30 = **(data_val + 0x28);
        data_3[0xa] = QTask_LinkEventHandler_2(item_30);
        AI_SelectTarget(sub_48e1e0, data_3, data_2);
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
