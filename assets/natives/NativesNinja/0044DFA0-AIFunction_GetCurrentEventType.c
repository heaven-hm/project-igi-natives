#include "0044DFA0-AIFunction_GetCurrentEventType.h"
/* 0x0044dfa0 AIFunction_GetCurrentEventType full linked: callers=0 callees=2 */
int32_t AIFunction_GetCurrentEventType(int32_t a1)

// Sig: int AIFunction_GetCurrentEventType()
// Note: RETURNS the AIEVENT_* value currently being handled - the backbone of
// every AI script's if/else chain. Enum: CREATE=0, DELETE=1, DEAD=2,
// ANIMATION=3, IDLE=4, ALERT=5, ALERT_RESPONSE=6, COMBAT=7, ALARMON=8,
// ALARMOFF=9, WALK=10, GROUNDIMPACT=11, DOOR=12, FENCE=13, LADDER=14,
// TAKINGDAMAGE=15, GUNSHOT=16, GRENADETHROWN=17, GRENADELAND=18, FLASHBANG=19,
// GUNSHOTMISS=20, EXPLOSION=21, ENEMYDETECTION=22, FRIENDLYDETECTION=23. Takes
// no args.
{
    int32_t* eax = **&g_5bda60;

    if (*eax)
    {
        int32_t eax_1 = eax[2];
        int32_t var_18 = eax_1;
        double var_10 = eax_1;
        char* var_8 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    Error_Show("EventStack empty");

    while (true)
        /* nop */
}
