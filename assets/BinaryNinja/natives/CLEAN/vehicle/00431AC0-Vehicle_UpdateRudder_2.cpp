// IGI native provenance: Vehicle_UpdateRudder_2 - 0x00431AC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00431AC0-Vehicle_UpdateRudder_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateRudder_2.h"
int32_t* Vehicle_UpdateRudder_2(void* context)

{
    int16_t data_2 = Menu_FormatScreen_18();
    return QTask_DeleteTask_2(*(context + 0xe8), data_2);
}
