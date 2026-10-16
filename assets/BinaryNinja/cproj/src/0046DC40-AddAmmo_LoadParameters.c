#include "gi_platform.h"
#include "0046DC40-AddAmmo_LoadParameters.h"
int32_t AddAmmo_LoadParameters(int32_t* a1)

{
    void* dstD = a1[5];
    int32_t valA = AI_UpdateOrders_17();
    int16_t v_c = valA;
    valA = (*(int32_t*)(uintptr_t)(dstD + 0x1c));

    if (TaskType_IsDerivedFrom(valA, v_c) && Weapon_CycleFireMode_7(a1[8]))
        Weapon_EjectShell_8(dstD + 0x340, a1[8], a1[0x11]);

    return QTask_FindType(a1);
}
