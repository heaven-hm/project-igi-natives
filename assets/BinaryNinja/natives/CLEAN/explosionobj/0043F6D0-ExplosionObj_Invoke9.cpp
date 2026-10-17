// IGI native provenance: ExplosionObj_Invoke9 - 0x0043F6D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F6D0-ExplosionObj_Invoke9.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_Invoke9.h"

void* ExplosionObj_Invoke9(void* arg1)

{
    *(arg1 + 0x130) = 1;
    return arg1;
}
