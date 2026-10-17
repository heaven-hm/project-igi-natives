// Original IGI.EXE function: Light_Lightmaps (VA 0x005210C0; static CFG gate PASS, CFG score 1.000).
#include "Light_Lightmaps.h"
int32_t Light_Lightmaps()

{
    char* v_4 = "lightmaps";
    Game_DataSymbolLoad(0xa83a20, "MISSION:%s");
    return 0xa83a20;
}
