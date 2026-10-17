// IGI native provenance: Vehicle_UpdateCockpit - 0x00430940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00430940-Vehicle_UpdateCockpit.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateCockpit.h"
uint32_t Vehicle_UpdateCockpit()

{
    int32_t data_val;
    data_val = g_57bd30;
    return QTask_CloseEvent_2(data_val);
}
