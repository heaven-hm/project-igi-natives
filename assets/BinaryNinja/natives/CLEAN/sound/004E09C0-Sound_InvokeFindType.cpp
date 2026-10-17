// IGI native provenance: Sound_InvokeFindType - 0x004E09C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E09C0-Sound_InvokeFindType.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_InvokeFindType.h"

int32_t Sound_InvokeFindType(void* arg1)

{
    return QTask_FindType(*(arg1 + 0x74));
}
