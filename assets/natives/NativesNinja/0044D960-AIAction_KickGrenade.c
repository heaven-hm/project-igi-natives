#include "0044D960-AIAction_KickGrenade.h"
/* 0x0044d960 AIAction_KickGrenade full linked: callers=0 callees=7 */
int32_t AIAction_KickGrenade(int32_t a1, int32_t a2 @ 0xc)

// Sig: void AIAction_KickGrenade(int param)
// Note: Kicks a nearby live grenade away (retail soldier behaviour). Param:
// param = grenade/context reference from the event. Use in grenade-event
// handlers.
{
    void* eax = sub_44c8c0();
    int32_t eax_2 = sub_4b8a20(a2, 0);

    if (**(eax + 0x28))
    {
        int32_t* eax_3 = sub_451030(g_5bda58);
        memcpy(&eax_3[2], eax + 0x10, 0x18);
        void* var_30 = **(eax + 0x28);
        eax_3[0xa] = QTask_LinkEventHandler_2(var_30);
        sub_450e10(sub_48e1e0, eax_3, eax_2);
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
