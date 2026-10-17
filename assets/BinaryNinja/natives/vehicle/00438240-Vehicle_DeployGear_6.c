// Original IGI.EXE function: Vehicle_DeployGear_6 (VA 0x00438240; static CFG gate FAIL, CFG score 0.833).
#include "Vehicle_DeployGear_6.h"
void* Vehicle_DeployGear_6(void* a1)

{
    void* result = QTask_FindType_2(a1, DynObj_LookupHashItem_5());

    if (result)
    {
        *(a1 + 0x130) = *(a1 + 0x28) - *(result + 0x20);
        *(a1 + 0x138) = *(a1 + 0x30) - *(result + 0x28);
        long double x87_r7_5 = *(a1 + 0x38) - *(result + 0x30);
        *(a1 + 0x140) = x87_r7_5;
        double v_20 = *(result + 0x88) * x87_r7_5 + *(result + 0x7c) * *(a1 + 0x138)
            + *(result + 0x70) * *(a1 + 0x130);
        double v_18 = *(result + 0x8c) * x87_r7_5 + *(result + 0x80) * *(a1 + 0x138)
            + *(result + 0x74) * *(a1 + 0x130);
        double v_10 = *(result + 0x90) * x87_r7_5 + *(result + 0x84) * *(a1 + 0x138)
            + *(result + 0x78) * *(a1 + 0x130);
        memcpy(a1 + 0x130, &v_20, 0x18);
        return result;
    }

    __builtin_memset(a1 + 0x130, 0, 0x18);
    *(a1 + 0x148) = 0x3f800000;
    *(a1 + 0x14c) = 0;
    *(a1 + 0x150) = 0;
    *(a1 + 0x154) = 0;
    *(a1 + 0x158) = 0x3f800000;
    *(a1 + 0x15c) = 0;
    *(a1 + 0x160) = 0;
    *(a1 + 0x164) = 0;
    *(a1 + 0x168) = 0x3f800000;
    *(a1 + 0x16c) = 0;
    return 0x3f800000;
}
