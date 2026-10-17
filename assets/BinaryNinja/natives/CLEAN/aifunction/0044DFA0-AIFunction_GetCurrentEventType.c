// IGI native provenance: AIFunction_GetCurrentEventType - 0x0044DFA0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044DFA0-AIFunction_GetCurrentEventType.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_GetCurrentEventType.h"
int32_t AIFunction_GetCurrentEventType(int32_t context)

// Sig: int AIFunction_GetCurrentEventType()
// Note: RETURNS the AIEVENT_* value currently being handled - the backbone of
// every AI script's if/else chain. Enum: CREATE=0, DELETE=1, DEAD=2,
// ANIMATION=3, IDLE=4, ALERT=5, ALERT_RESPONSE=6, COMBAT=7, ALARMON=8,
// ALARMOFF=9, WALK=10, GROUNDIMPACT=11, DOOR=12, FENCE=13, LADDER=14,
// TAKINGDAMAGE=15, GUNSHOT=16, GRENADETHROWN=17, GRENADELAND=18, FLASHBANG=19,
// GUNSHOTMISS=20, EXPLOSION=21, ENEMYDETECTION=22, FRIENDLYDETECTION=23. Takes
// no args.
{
    int32_t* data_val = **&g_5bda60;

    if (*data_val)
    {
        int32_t data_1 = data_val[2];
        int32_t item_18 = data_1;
        double item_10 = data_1;
        char* item_8 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    Error_Show("EventStack empty");

    while (true)
        /* nop */
}
