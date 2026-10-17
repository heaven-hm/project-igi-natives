// Original IGI.EXE function: Light_Watermesh (VA 0x0052DD70; static CFG gate PASS, CFG score 1.000).
#include "Light_Watermesh.h"
int32_t Light_Watermesh()

{
    int32_t valA = Display_RestoreDevice_14("WaterMesh");
    g_a84578 = valA;
    return Display_SetGammaRamp_14(valA, Light_ComputeDirectionalLight_12);
}
