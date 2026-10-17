// IGI native provenance: Sound_GetContext_4EAC10 - 0x004EAC10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EAC10-Sound_GetContext_4EAC10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_GetContext_4EAC10.h"

int32_t* Sound_GetContext_4EAC10(void* arg1, int32_t* arg2)

{
    *(arg1 + 0x34) = *arg2;
    return arg2;
}
