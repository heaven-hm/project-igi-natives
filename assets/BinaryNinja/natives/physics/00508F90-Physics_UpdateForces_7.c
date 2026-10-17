// Original IGI.EXE function: Physics_UpdateForces_7 (VA 0x00508F90; static CFG gate FAIL, CFG score 0.380).
#include "Physics_UpdateForces_7.h"
int32_t Physics_UpdateForces_7()

{
    Physics_EvaluateAreaCriteria_8();
    /* tailcall */
    return Terrain_BuildMipMaps_8();
}
