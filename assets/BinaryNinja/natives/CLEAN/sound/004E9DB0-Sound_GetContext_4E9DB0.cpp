// IGI native provenance: Sound_GetContext_4E9DB0 - 0x004E9DB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E9DB0-Sound_GetContext_4E9DB0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_GetContext_4E9DB0.h"

int32_t* Sound_GetContext_4E9DB0(void* arg1, int32_t* arg2)

{
    *(arg1 + 0xc0) = *arg2;
    return arg2;
}
