// Original IGI.EXE function: AIFunction_GetCurrentEventType (VA 0x0044DFA0; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_GetCurrentEventType.h"
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
    int32_t* valA = **&g_5bda60;

    if (*valA)
    {
        int32_t valA1 = valA[2];
        int32_t v_18 = valA1;
        double v_10 = valA1;
        char* v_8 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    Error_Show("EventStack empty");

    while (true)
        /* nop */
}
