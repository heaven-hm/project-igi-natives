// IGI native provenance: Vehicle_DeployGear_5 - 0x004360B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004360B0-Vehicle_DeployGear_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_DeployGear_5.h"
uint32_t Vehicle_DeployGear_5()

{
    int32_t data_val;
    data_val = g_57bd6c;
    return QTask_CloseEvent_2(data_val);
}
