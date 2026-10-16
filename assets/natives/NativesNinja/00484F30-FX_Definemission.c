#include "00484F30-FX_Definemission.h"
/* 0x00484f30 FX_Definemission full linked: callers=1 callees=3 */
int32_t sub_484f30()

{
    Game_DefineOptions("DefineMission", Define_Mission, 0, 0xffffffff);
    TaskType_Set("MISSION_NEXT_MISSION_UNDEFINED", 0xffffffff);
    /* tailcall */
    return sub_485150();
}
