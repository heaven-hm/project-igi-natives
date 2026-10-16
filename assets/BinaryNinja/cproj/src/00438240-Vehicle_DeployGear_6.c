#include "gi_platform.h"
#include "00438240-Vehicle_DeployGear_6.h"
void* Vehicle_DeployGear_6(void* a1)

{
    void* result = QTask_FindType_2(a1, DynObj_LookupHashItem_5());

    if (result)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x130)) = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - *(result + 0x20);
        (*(int32_t*)(uintptr_t)(a1 + 0x138)) = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - *(result + 0x28);
        long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x38)) - *(result + 0x30);
        (*(int32_t*)(uintptr_t)(a1 + 0x140)) = x87_r7_5;
        double v_20 = *(result + 0x88) * x87_r7_5 + *(result + 0x7c) * (*(int32_t*)(uintptr_t)(a1 + 0x138))
            + *(result + 0x70) * (*(int32_t*)(uintptr_t)(a1 + 0x130));
        double v_18 = *(result + 0x8c) * x87_r7_5 + *(result + 0x80) * (*(int32_t*)(uintptr_t)(a1 + 0x138))
            + *(result + 0x74) * (*(int32_t*)(uintptr_t)(a1 + 0x130));
        double v_10 = *(result + 0x90) * x87_r7_5 + *(result + 0x84) * (*(int32_t*)(uintptr_t)(a1 + 0x138))
            + *(result + 0x78) * (*(int32_t*)(uintptr_t)(a1 + 0x130));
        memcpy(a1 + 0x130, &v_20, 0x18);
        return result;
    }

    __builtin_memset(a1 + 0x130, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x14c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x150)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x154)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x158)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x15c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x160)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x164)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x168)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x16c)) = 0;
    return 0x3f800000;
}
