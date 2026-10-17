// IGI native provenance: Physics_CalculateSplineLength_4 - 0x005055D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005055D0-Physics_CalculateSplineLength_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CalculateSplineLength_4.h"
int32_t Physics_CalculateSplineLength_4(void* context, int32_t param_2)

{
    uint32_t data_val = EditRigidObjAttachedToBone_OnTick();
    int32_t temp_val = 0;
    temp_val = *(context + 0x1c);
    return (*(((data_val * 0x180 + temp_val) << 2) + &g_a96ae0))(context, param_2);
}
