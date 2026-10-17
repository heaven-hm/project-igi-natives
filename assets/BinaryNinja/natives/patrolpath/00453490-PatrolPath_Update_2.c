// Original IGI.EXE function: PatrolPath_Update_2 (VA 0x00453490; static CFG gate PASS, CFG score 1.000).
#include "PatrolPath_Update_2.h"

int32_t PatrolPath_Update_2(void* pThis)

{
    int32_t result_val = *(pThis + 0x20);

    if (result_val < 0xffffffff || result_val >= 9)
        *(pThis + 0x20) = 0xffffffff;

    return PatrolPathCommand_Update(pThis);
}
