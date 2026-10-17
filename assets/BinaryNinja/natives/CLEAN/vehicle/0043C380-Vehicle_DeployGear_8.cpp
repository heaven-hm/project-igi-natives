// IGI native provenance: Vehicle_DeployGear_8 - 0x0043C380 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043C380-Vehicle_DeployGear_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_DeployGear_8.h"
uint32_t Vehicle_DeployGear_8()

{
    int32_t data_val;
    data_val = g_57bf7c;
    return QTask_CloseEvent_2(data_val);
}
