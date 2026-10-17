// IGI native provenance: Sound_InvokeFindType_4EA880 - 0x004EA880 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EA880-Sound_InvokeFindType_4EA880.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_InvokeFindType_4EA880.h"

int32_t Sound_InvokeFindType_4EA880(int32_t* arg1)

{
    if (!*(arg1 + 0xd5))
        return SoundSys_EvaluateTrigger_14(arg1);

    return QTask_FindType(arg1);
}
