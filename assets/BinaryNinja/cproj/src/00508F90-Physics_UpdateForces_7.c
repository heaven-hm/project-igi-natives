#include "gi_platform.h"
#include "00508F90-Physics_UpdateForces_7.h"
int32_t Physics_UpdateForces_7()

{
    Physics_EvaluateAreaCriteria_8();
    /* tailcall */
    return Terrain_BuildMipMaps_8();
}
