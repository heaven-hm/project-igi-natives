// IGI native provenance: VehicleChild_Dispatch - 0x004F4660 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F4660-VehicleChild_Dispatch.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehicleChild_Dispatch.h"
void* VehicleChild_Dispatch(void* context)

{
    void* result = *(context + 0xe8);

    if (result)
    {
        int32_t entity_1 = 0;
        entity_1 = *(result + 0x1c);
        result = (*((entity_1 << 2) + &g_a970e0))(result);
    }

    return result;
}
