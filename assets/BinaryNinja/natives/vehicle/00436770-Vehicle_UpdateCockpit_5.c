// IGI native provenance: Vehicle_UpdateCockpit_5 - 0x00436770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00436770-Vehicle_UpdateCockpit_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateCockpit_5.h"
uint32_t Vehicle_UpdateCockpit_5()

{
    int32_t data_val;
    data_val = g_57bd74;
    return QTask_CloseEvent_2(data_val);
}
