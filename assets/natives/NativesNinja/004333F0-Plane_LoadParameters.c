#include "004333F0-Plane_LoadParameters.h"
/* 0x004333f0 Plane_LoadParameters full linked: callers=0 callees=2 */
int32_t* Plane_LoadParameters(float a1)

{
    Vehicle_InitPlane_3(a1);
    return sub_4f1320(a1 + 0x838);
}
