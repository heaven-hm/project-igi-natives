// IGI native provenance: ExplosionObj_GetContext_43AB50 - 0x0043AB50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043AB50-ExplosionObj_GetContext_43AB50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_GetContext_43AB50.h"

int32_t* ExplosionObj_GetContext_43AB50(void* arg1)

{
    *(arg1 + 0x88) = 0x40400000;
    *(arg1 + 0x90) = 0x40400000;
    *(arg1 + 0x8c) = 0x3fc00000;
    *(arg1 + 0x94) = 0;
    *(arg1 + 0x98) = 3;
    *(arg1 + 0x9c) = 3;
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0xc4) = 0x40a00000;
    *(arg1 + 0xcc) = 0;
    *(arg1 + 0xc8) = 1;
    *(arg1 + 0xc0) = 0;
    return Script_ExecuteLevelScript_6(arg1 + 0x38);
}
