// IGI native provenance: Sound_GetParam_4EB760 - 0x004EB760 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EB760-Sound_GetParam_4EB760.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_GetParam_4EB760.h"

int32_t Sound_GetParam_4EB760(int32_t arg1, int32_t arg2)

{
    __builtin_memcpy(arg1 + 0x48, arg2, 0x18);
    return arg1;
}
