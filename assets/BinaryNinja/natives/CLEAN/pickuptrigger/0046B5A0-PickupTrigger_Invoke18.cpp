// IGI native provenance: PickupTrigger_Invoke18 - 0x0046B5A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B5A0-PickupTrigger_Invoke18.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke18.h"

int32_t* PickupTrigger_Invoke18(void* arg1)

{
    int32_t* result = *(arg1 + 0x84);

    if (result)
        result = Sys_ReadFileBlock_18(result);

    return result;
}
