// IGI native provenance: AIEVENT_CREATE - 0x0044EEB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044EEB0-AIEVENT_CREATE.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIEVENT_CREATE.h"
void* AIEVENT_CREATE()

{
    TaskType_Set("AIEVENT_CREATE", 0);
    TaskType_Set("AIEVENT_DELETE", 1);
    TaskType_Set("AIEVENT_DEAD", 2);
    TaskType_Set("AIEVENT_ANIMATION", 3);
    TaskType_Set("AIEVENT_IDLE", 4);
    TaskType_Set("AIEVENT_ALERT", 5);
    TaskType_Set("AIEVENT_ALERT_RESPONSE", 6);
    TaskType_Set("AIEVENT_COMBAT", 7);
    TaskType_Set("AIEVENT_ALARMON", 8);
    TaskType_Set("AIEVENT_ALARMOFF", 9);
    TaskType_Set("AIEVENT_WALK", 0xa);
    TaskType_Set("AIEVENT_GROUNDIMPACT", 0xb);
    TaskType_Set("AIEVENT_DOOR", 0xc);
    TaskType_Set("AIEVENT_FENCE", 0xd);
    TaskType_Set("AIEVENT_LADDER", 0xe);
    TaskType_Set("AIEVENT_TAKINGDAMAGE", 0xf);
    TaskType_Set("AIEVENT_GUNSHOT", 0x10);
    TaskType_Set("AIEVENT_GRENADETHROWN", 0x11);
    TaskType_Set("AIEVENT_GRENADELAND", 0x12);
    TaskType_Set("AIEVENT_FLASHBANG", 0x13);
    TaskType_Set("AIEVENT_GUNSHOTMISS", 0x14);
    TaskType_Set("AIEVENT_EXPLOSION", 0x15);
    TaskType_Set("AIEVENT_ENEMYDETECTION", 0x16);
    TaskType_Set("AIEVENT_FRIENDLYDETECTION", 0x17);
    TaskType_Set("AIACTIONFLAG_NONE", 0);
    TaskType_Set("AIACTIONFLAG_PUSHABLE", 1);
    TaskType_Set("HUMANAI_DETECTIONEVENT_GUNSHOT_RANGE", 0x1e000);
    TaskType_Set("HUMANAI_DETECTIONEVENT_GUNSHOT_SILENCED_RANGE", 0x1000);
    int32_t dest_val = 0;

    for (char (** i)[0xb] = &g_53c9c0; i < &g_53ca34; )
    {
        TaskType_Set(*i, dest_val);
        i = &i[1];
        dest_val += 1;
    }

    TaskType_Set("AIALARMACCESS_BEFORECOMBAT", 0);
    return TaskType_Set("AIALARMACCESS_AFTERCOMBAT", 1);
}
