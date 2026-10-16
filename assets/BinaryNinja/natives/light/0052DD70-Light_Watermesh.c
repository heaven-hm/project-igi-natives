#include "Light_Watermesh.h"
int32_t Light_Watermesh()

{
    int32_t valA = Display_RestoreDevice_14("WaterMesh");
    g_a84578 = valA;
    return Display_SetGammaRamp_14(valA, Light_ComputeDirectionalLight_12);
}
