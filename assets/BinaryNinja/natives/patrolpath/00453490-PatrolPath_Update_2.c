// IGI native provenance: PatrolPath_Update_2 - 0x00453490 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453490-PatrolPath_Update_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PatrolPath_Update_2.h"

int32_t PatrolPath_Update_2(void* pThis)

{
    int32_t result_val = *(pThis + 0x20);

    if (result_val < 0xffffffff || result_val >= 9)
        *(pThis + 0x20) = 0xffffffff;

    return PatrolPathCommand_Update(pThis);
}
