#include "VehicleChild_Dispatch.h"
void* VehicleChild_Dispatch(void* a1)

{
    void* result = *(a1 + 0xe8);

    if (result)
    {
        int32_t objC1 = 0;
        objC1 = *(result + 0x1c);
        result = (*((objC1 << 2) + &g_a970e0))(result);
    }

    return result;
}
