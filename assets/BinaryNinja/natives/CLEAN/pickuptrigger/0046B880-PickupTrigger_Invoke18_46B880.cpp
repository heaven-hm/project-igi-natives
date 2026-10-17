// IGI native provenance: PickupTrigger_Invoke18_46B880 - 0x0046B880 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B880-PickupTrigger_Invoke18_46B880.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke18_46B880.h"

int32_t PickupTrigger_Invoke18_46B880(void* arg1)

{
    return Sys_ReadFileBlock_18(*(arg1 + 0x78));
}
