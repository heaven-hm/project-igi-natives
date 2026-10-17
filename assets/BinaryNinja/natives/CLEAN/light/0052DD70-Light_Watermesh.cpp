// IGI native provenance: Light_Watermesh - 0x0052DD70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052DD70-Light_Watermesh.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_Watermesh.h"
int32_t Light_Watermesh()

{
    int32_t data_val = Display_RestoreDevice_14("WaterMesh");
    g_a84578 = data_val;
    return Display_SetGammaRamp_14(data_val, Light_ComputeDirectionalLight_12);
}
