#include "gi_platform.h"
#include "0044D960-AIAction_KickGrenade.h"
int32_t AIAction_KickGrenade(int32_t a1, int32_t a2 )

// Sig: void AIAction_KickGrenade(int param)
// Note: Kicks a nearby live grenade away (retail soldier behaviour). Param:
// param = grenade/context reference from the event. Use in grenade-event
// handlers.
{
    void* valA = Env_CheckAmbientArea_12();
    int32_t valA2 = Script_GetArg(a2, 0);

    if (*(*(int32_t*)(uintptr_t)(valA + 0x28)))
    {
        int32_t* valA3 = AI_CheckVisibility_2(g_5bda58);
        memcpy(&valA3[2], valA + 0x10, 0x18);
        void* v_30 = *(*(int32_t*)(uintptr_t)(valA + 0x28));
        valA3[0xa] = QTask_LinkEventHandler_2(v_30);
        AI_SelectTarget(sub_48e1e0, valA3, valA2);
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
