// IGI native provenance: PickupTrigger_ProcessStep_466C60 - 0x00466C60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00466C60-PickupTrigger_ProcessStep_466C60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_ProcessStep_466C60.h"

void* PickupTrigger_ProcessStep_466C60(void* arg1)

{
    void* result = arg1;
    void* context_val = *(result + 0xc);

    if (*(context_val + 0x70) & 1)
    {
        result = *((g_5bdc54 << 2) + &g_a94e84);

        if (result)
            result = result(context_val);
    }

    return result;
}
