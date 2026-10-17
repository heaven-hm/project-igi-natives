// IGI native provenance: HumanAI_GetContext_453630 - 0x00453630 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453630-HumanAI_GetContext_453630.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_GetContext_453630.h"

void* HumanAI_GetContext_453630(void* arg1)

{
    *(arg1 + 0x28) = 0xffffffff;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x20) = 0;
    return arg1;
}
