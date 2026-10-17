// IGI native provenance: PickupTrigger_ProcessDeathZone - 0x00465B80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00465B80-PickupTrigger_ProcessDeathZone.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_ProcessDeathZone.h"

int32_t PickupTrigger_ProcessDeathZone(void* arg1, char* arg2)

{
    int32_t result = *(arg2 + 8);

    if (result != arg1)
    {
        int32_t edx_1 = *(arg1 + 0x14);

        if (result != edx_1)
        {
            result = *(arg2 + 0xc);

            if (result != arg1 && result != edx_1)
            {
                *arg2 = 1;
                return result;
            }
        }
    }

    *arg2 = 0;
    return result;
}
