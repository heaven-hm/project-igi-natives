#include "gi_platform.h"
#include "00439EC0-AlarmLight_Cleanup_3.h"
void* AlarmLight_Cleanup_3(float a1, int32_t a2)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x130));

    if (*(result + 0x1a1))
        return result;

    if (*(result + 0x1a0))
        Vehicle_DeployGear_7(a1, 0.0f);

    return ((int(*)())(uintptr_t)(*((DynObj_LookupHashItem_5() << 2) + &g_a982e0)))(a1, a2);
}
