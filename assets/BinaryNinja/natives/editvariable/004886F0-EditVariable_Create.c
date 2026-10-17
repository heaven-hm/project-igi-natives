// IGI native provenance: EditVariable_Create - 0x004886F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004886F0-EditVariable_Create.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditVariable_Create.h"

void* EditVariable_Create(void* pThis)

{
    *(pThis + 0x20) = 0;
    return pThis;
}
