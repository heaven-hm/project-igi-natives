#include "gi_platform.h"
#include "00484F30-FX_Definemission.h"
int32_t FX_Definemission()

{
    Game_DefineOptions("DefineMission", Define_Mission, 0, 0xffffffff);
    TaskType_Set("MISSION_NEXT_MISSION_UNDEFINED", 0xffffffff);
    /* tailcall */
    return FX_LocalMissions();
}
