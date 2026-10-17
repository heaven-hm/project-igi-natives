// Original IGI.EXE function: VehicleChild_Dispatch (VA 0x004F4660; static CFG gate FAIL, CFG score 0.667).
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
