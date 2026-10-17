// IGI native provenance: Vehicle_UpdateCockpit_3 - 0x00433760 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00433760-Vehicle_UpdateCockpit_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateCockpit_3.h"
int32_t* Vehicle_UpdateCockpit_3(void* context)

{
    int32_t* result = *(context + 0x834);

    if (!result)
        return result;

    void* data_val = *result;

    if (data_val)
        SoundSys_SetFrequency_7(data_val);

    return Qtask_UpdateList(*(context + 0x834));
}
