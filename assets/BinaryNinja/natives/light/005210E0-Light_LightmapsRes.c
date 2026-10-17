// Original IGI.EXE function: Light_LightmapsRes (VA 0x005210E0; static CFG gate PASS, CFG score 1.000).
#include "Light_LightmapsRes.h"
int32_t Light_LightmapsRes()

{
    char* v_4 = "lightmaps.res";
    char* v_8 = "lightmaps";
    Game_DataSymbolLoad(0xa83b54, "MISSION:%s/%s");
    return 0xa83b54;
}
