// IGI native provenance: HumanAI_Invoke12 - 0x00460070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460070-HumanAI_Invoke12.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke12.h"

int32_t HumanAI_Invoke12(int32_t arg1)

{
    return Table_GetAt(arg1 + 0x4c4, 0);
}
