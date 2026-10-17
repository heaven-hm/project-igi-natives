// IGI native provenance: Vehicle_DeployGear_6 - 0x00438240 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00438240-Vehicle_DeployGear_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
