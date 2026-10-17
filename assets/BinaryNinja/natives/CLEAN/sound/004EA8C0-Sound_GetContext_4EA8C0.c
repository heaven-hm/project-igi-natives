// IGI native provenance: Sound_GetContext_4EA8C0 - 0x004EA8C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EA8C0-Sound_GetContext_4EA8C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_GetContext_4EA8C0.h"

void* Sound_GetContext_4EA8C0(void* arg1)

{
    *(arg1 + 0xd5) = 1;
    return arg1;
}
