// IGI native provenance: Vehicle_UpdateCockpit_9 - 0x0043E8C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043E8C0-Vehicle_UpdateCockpit_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateCockpit_9.h"
uint32_t Vehicle_UpdateCockpit_9()

{
    int32_t data_val;
    data_val = g_53c46c;
    return QTask_CloseEvent_2(data_val);
}
