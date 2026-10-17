// IGI native provenance: LevelScript_Init_2 - 0x0052C7A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052C7A0-LevelScript_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelScript_Init_2.h"

void* LevelScript_Init_2(void* pThis)

{
    int32_t status = *(pThis + 0x6c);
    int32_t result = *(pThis + 0x70);
    return pThis;
}
