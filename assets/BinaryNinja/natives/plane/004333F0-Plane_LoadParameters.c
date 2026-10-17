// Original IGI.EXE function: Plane_LoadParameters (VA 0x004333F0; static CFG gate PASS, CFG score 1.000).
#include "Plane_LoadParameters.h"
int32_t* Plane_LoadParameters(float a1)

{
    Vehicle_InitPlane_3(a1);
    return Script_ExecuteLevelScript_6(a1 + 0x838);
}
