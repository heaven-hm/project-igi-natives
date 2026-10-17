// IGI native provenance: Sound_ProcessStep_4EB740 - 0x004EB740 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EB740-Sound_ProcessStep_4EB740.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_ProcessStep_4EB740.h"

char* Sound_ProcessStep_4EB740(void* arg1, char** arg2)

{
    if (*(arg1 + 0x22))
        *arg2 = arg1 + 0x22;

    return arg1 + 0x22;
}
