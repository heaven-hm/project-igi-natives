// IGI native provenance: Sound_GetContext_4EB460 - 0x004EB460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EB460-Sound_GetContext_4EB460.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_GetContext_4EB460.h"

void* Sound_GetContext_4EB460(void* arg1)

{
    *(arg1 + 0x21) = 1;
    return arg1;
}
