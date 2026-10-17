// IGI native provenance: AI_FireAtTask - 0x0048EDE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EDE0-AI_FireAtTask.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireAtTask.h"

void* AI_FireAtTask(void* pThis )

{
    void* result = *(pThis + 0x28);
    *(pThis + 0x18) = FX_FragmentSimulate_21;
    *(result + 0x19) = 0;
    *(result + 0x14) = 0xffffffff;
    return result;
}
