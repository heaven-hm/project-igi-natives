// IGI native provenance: Sound_ProcessStep_4EAB90 - 0x004EAB90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EAB90-Sound_ProcessStep_4EAB90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_ProcessStep_4EAB90.h"

char* Sound_ProcessStep_4EAB90(void* arg1, char** arg2)

{
    if (*(arg1 + 0x140))
        *arg2 = arg1 + 0x140;

    return arg1 + 0x140;
}
