// IGI native provenance: Sound_Invoke15_4E9D90 - 0x004E9D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E9D90-Sound_Invoke15_4E9D90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke15_4E9D90.h"

char* Sound_Invoke15_4E9D90(void* arg1, char** arg2)

{
    if (*(arg1 + 0xe3))
        *arg2 = arg1 + 0xe3;

    return arg1 + 0xe3;
}
