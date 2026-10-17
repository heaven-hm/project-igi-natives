// Original IGI.EXE function: LevelFlow_Setup (VA 0x00489400; static CFG gate PASS, CFG score 1.000).
#include "LevelFlow_Setup.h"
int32_t LevelFlow_Setup(void* context)

{
    Script_Isexists(context + 0x7c, context);
    Script_Isexists(context + 0xcc, context);
    return 0;
}
