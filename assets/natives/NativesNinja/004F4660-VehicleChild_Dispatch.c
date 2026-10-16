#include "004F4660-VehicleChild_Dispatch.h"
/* 0x004f4660 VehicleChild_Dispatch full linked: callers=5 callees=0 */
void* sub_4f4660(void* a1)

{
    void* result = *(a1 + 0xe8);

    if (result)
    {
        int32_t ecx_1 = 0;
        ecx_1 = *(result + 0x1c);
        result = (*((ecx_1 << 2) + &g_a970e0))(result);
    }

    return result;
}
