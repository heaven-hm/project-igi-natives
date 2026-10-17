// IGI native provenance: HumanAI_GetContext_4645D0 - 0x004645D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004645D0-HumanAI_GetContext_4645D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_GetContext_4645D0.h"

int32_t* HumanAI_GetContext_4645D0(int32_t arg1, int32_t* arg2)

{
    *arg2 = arg1 + 0xe0;
    arg2[1] = arg1 + 0xf8;
    arg2[2] = 0;
    return arg2;
}
