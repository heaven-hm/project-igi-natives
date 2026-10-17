// Original IGI.EXE function: Plane_LoadParameters (VA 0x004333F0; static CFG gate PASS, CFG score 1.000).
#include "Plane_LoadParameters.h"
int32_t* Plane_LoadParameters(float context)

{
    Vehicle_InitPlane_3(context);
    return Script_ExecuteLevelScript_6(context + 0x838);
}
