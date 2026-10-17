// Original IGI.EXE function: AIEVENT_CREATE_2 (VA 0x00450B20; static CFG gate PASS, CFG score 1.000).
#include "AIEVENT_CREATE_2.h"
int32_t AIEVENT_CREATE_2()

{
    Sys_CloseFileStream_23("AIEVENT_CREATE");
    Sys_CloseFileStream_23("AIEVENT_DELETE");
    Sys_CloseFileStream_23("AIEVENT_DEAD");
    Sys_CloseFileStream_23("AIEVENT_ANIMATION");
    Sys_CloseFileStream_23("AIEVENT_IDLE");
    Sys_CloseFileStream_23("AIEVENT_ALERT");
    Sys_CloseFileStream_23("AIEVENT_ALERT_RESPONSE");
    Sys_CloseFileStream_23("AIEVENT_COMBAT");
    Sys_CloseFileStream_23("AIEVENT_ALARMON");
    Sys_CloseFileStream_23("AIEVENT_ALARMOFF");
    Sys_CloseFileStream_23("AIEVENT_WALK");
    Sys_CloseFileStream_23("AIEVENT_GROUNDIMPACT");
    Sys_CloseFileStream_23("AIEVENT_DOOR");
    Sys_CloseFileStream_23("AIEVENT_FENCE");
    Sys_CloseFileStream_23("AIEVENT_LADDER");
    Sys_CloseFileStream_23("AIEVENT_TAKINGDAMAGE");
    Sys_CloseFileStream_23("AIEVENT_GUNSHOT");
    Sys_CloseFileStream_23("AIEVENT_GRENADETHROWN");
    Sys_CloseFileStream_23("AIEVENT_GRENADELAND");
    Sys_CloseFileStream_23("AIEVENT_FLASHBANG");
    Sys_CloseFileStream_23("AIEVENT_GUNSHOTMISS");
    Sys_CloseFileStream_23("AIEVENT_EXPLOSION");
    Sys_CloseFileStream_23("AIEVENT_ENEMYDETECTION");
    Sys_CloseFileStream_23("AIEVENT_FRIENDLYDETECTION");
    Sys_CloseFileStream_23("AIACTIONFLAG_NONE");
    Sys_CloseFileStream_23("AIACTIONFLAG_PUSHABLE");
    Sys_CloseFileStream_23("HUMANAI_DETECTIONEVENT_GUNSHOT_RANGE");
    Sys_CloseFileStream_23("HUMANAI_DETECTIONEVENT_GUNSHOT_SILENCED_RANGE");

    for (char (** i)[0xb] = &g_53c9c0; i < &g_53ca34; i = &i[1])
        Sys_CloseFileStream_23(*i);

    Sys_CloseFileStream_23("AIALARMACCESS_BEFORECOMBAT");
    return Sys_CloseFileStream_23("AIALARMACCESS_AFTERCOMBAT");
}
