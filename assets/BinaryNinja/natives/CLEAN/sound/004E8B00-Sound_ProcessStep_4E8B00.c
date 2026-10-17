// IGI native provenance: Sound_ProcessStep_4E8B00 - 0x004E8B00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8B00-Sound_ProcessStep_4E8B00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_ProcessStep_4E8B00.h"

char* Sound_ProcessStep_4E8B00(void* arg1, char** arg2)

{
    if (*(arg1 + 0xdf))
        *arg2 = arg1 + 0xdf;

    return arg1 + 0xdf;
}
