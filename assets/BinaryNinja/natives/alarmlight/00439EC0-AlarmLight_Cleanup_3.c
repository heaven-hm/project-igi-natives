#include "AlarmLight_Cleanup_3.h"
void* AlarmLight_Cleanup_3(float a1, int32_t a2)

{
    void* result = *(a1 + 0x130);

    if (*(result + 0x1a1))
        return result;

    if (*(result + 0x1a0))
        Vehicle_DeployGear_7(a1, 0f);

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(a1, a2);
}
