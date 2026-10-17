// IGI native provenance: Sound_GetContext_4E8B60 - 0x004E8B60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8B60-Sound_GetContext_4E8B60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_GetContext_4E8B60.h"

int32_t* Sound_GetContext_4E8B60(void* arg1, int32_t* arg2)

{
    *(arg1 + 0xcc) = *arg2;
    return arg2;
}
