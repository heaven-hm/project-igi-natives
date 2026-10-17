// IGI native provenance: Siren_Trigger - 0x00449260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449260-Siren_Trigger.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Siren_Trigger.h"

void* Siren_Trigger(void* pThis)

{
    *(pThis + 0x13c) = 0;
    return pThis;
}
