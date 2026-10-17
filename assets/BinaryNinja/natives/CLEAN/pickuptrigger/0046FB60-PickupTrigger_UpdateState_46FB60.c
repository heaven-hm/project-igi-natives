// IGI native provenance: PickupTrigger_UpdateState_46FB60 - 0x0046FB60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046FB60-PickupTrigger_UpdateState_46FB60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_UpdateState_46FB60.h"

void* PickupTrigger_UpdateState_46FB60(void* arg1, char* arg2)

{
    int32_t context_val = *(arg2 + 8);

    if (context_val != arg1)
    {
        int32_t esi_1 = *(arg1 + 0x14);

        if (context_val != esi_1)
        {
            int32_t edx_1 = *(arg2 + 0xc);

            if (edx_1 != arg1 && edx_1 != esi_1 && context_val != *(arg1 + 0x130))
            {
                *arg2 = 1;
                return arg1;
            }
        }
    }

    *arg2 = 0;
    return arg1;
}
