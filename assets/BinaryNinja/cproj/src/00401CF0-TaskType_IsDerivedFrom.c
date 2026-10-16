#include "gi_platform.h"
#include "00401CF0-TaskType_IsDerivedFrom.h"
int32_t TaskType_IsDerivedFrom(int32_t a1, int16_t a2)

// Sig: bool TaskType_IsDerivedFrom(uint16_t typeId, uint16_t baseTypeId)
// Note: Checks equality and walks the task-type parent chain until the sentinel
// type. Ghidra/r2 CFG agreement: 5 basic blocks and 6 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    int32_t result = a1;

    while (result != a2)
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
