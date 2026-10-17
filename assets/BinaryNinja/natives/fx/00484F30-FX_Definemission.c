// Original IGI.EXE function: FX_Definemission (VA 0x00484F30; static CFG gate FAIL, CFG score 0.833).
#include "FX_Definemission.h"
int32_t FX_Definemission()

{
    Game_DefineOptions("DefineMission", Define_Mission, 0, 0xffffffff);
    TaskType_Set("MISSION_NEXT_MISSION_UNDEFINED", 0xffffffff);
    /* tailcall */
    return FX_LocalMissions();
}
