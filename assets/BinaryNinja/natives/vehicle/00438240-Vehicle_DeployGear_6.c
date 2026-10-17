// Original IGI.EXE function: Vehicle_DeployGear_6 (VA 0x00438240; static CFG gate FAIL, CFG score 0.833).
#include "Vehicle_DeployGear_6.h"
void* Vehicle_DeployGear_6(void* context)

{
    void* result = QTask_FindType_2(context, DynObj_LookupHashItem_5());

    if (result)
    {
        *(context + 0x130) = *(context + 0x28) - *(result + 0x20);
        *(context + 0x138) = *(context + 0x30) - *(result + 0x28);
        long double fpu_val_7_5 = *(context + 0x38) - *(result + 0x30);
        *(context + 0x140) = fpu_val_7_5;
        double item_20 = *(result + 0x88) * fpu_val_7_5 + *(result + 0x7c) * *(context + 0x138)
            + *(result + 0x70) * *(context + 0x130);
        double item_18 = *(result + 0x8c) * fpu_val_7_5 + *(result + 0x80) * *(context + 0x138)
            + *(result + 0x74) * *(context + 0x130);
        double item_10 = *(result + 0x90) * fpu_val_7_5 + *(result + 0x84) * *(context + 0x138)
            + *(result + 0x78) * *(context + 0x130);
        memcpy(context + 0x130, &item_20, 0x18);
        return result;
    }

    memset(context + 0x130, 0, 0x18);
    *(context + 0x148) = 0x3f800000;
    *(context + 0x14c) = 0;
    *(context + 0x150) = 0;
    *(context + 0x154) = 0;
    *(context + 0x158) = 0x3f800000;
    *(context + 0x15c) = 0;
    *(context + 0x160) = 0;
    *(context + 0x164) = 0;
    *(context + 0x168) = 0x3f800000;
    *(context + 0x16c) = 0;
    return 0x3f800000;
}
