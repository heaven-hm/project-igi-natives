// IGI native provenance: TaskType_IsDerivedFrom - 0x00401CF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401CF0-TaskType_IsDerivedFrom.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TaskType_IsDerivedFrom.h"
int32_t TaskType_IsDerivedFrom(int32_t context, int16_t param_2)

// Sig: bool TaskType_IsDerivedFrom(uint16_t typeId, uint16_t baseTypeId)
// Note: Checks equality and walks the task-type parent chain until the sentinel
// type. Ghidra/r2 CFG agreement: 5 basic blocks and 6 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    int32_t result = context;

    while (result != param_2)
    {
        result = (result & 0xffff) * 0x30;
        result = *(result + &g_af5ee8);

        if (result == 0x181)
        {
            result = 0;
            return result;
        }
    }

    result = 1;
    return result;
}
