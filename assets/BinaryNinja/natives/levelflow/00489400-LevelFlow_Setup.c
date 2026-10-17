// Original IGI.EXE function: LevelFlow_Setup (VA 0x00489400; static CFG gate PASS, CFG score 1.000).
#include "LevelFlow_Setup.h"
int32_t LevelFlow_Setup(void* a1)

{
    Script_Isexists(a1 + 0x7c, a1);
    Script_Isexists(a1 + 0xcc, a1);
    return 0;
}
