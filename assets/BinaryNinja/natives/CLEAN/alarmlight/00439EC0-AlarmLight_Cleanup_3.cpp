// IGI native provenance: AlarmLight_Cleanup_3 - 0x00439EC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00439EC0-AlarmLight_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmLight_Cleanup_3.h"
void* AlarmLight_Cleanup_3(float context, int32_t param_2)

{
    void* result = *(context + 0x130);

    if (*(result + 0x1a1))
        return result;

    if (*(result + 0x1a0))
        Vehicle_DeployGear_7(context, 0.0f);

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(context, param_2);
}
