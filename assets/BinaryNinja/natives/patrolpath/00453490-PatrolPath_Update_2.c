// Original IGI.EXE function: PatrolPath_Update_2 (VA 0x00453490; static CFG gate PASS, CFG score 1.000).
#include "PatrolPath_Update_2.h"

int32_t PatrolPath_Update_2(void* pThis)

{
    int32_t eax = *(pThis + 0x20);

    if (eax < 0xffffffff || eax >= 9)
        *(pThis + 0x20) = 0xffffffff;

    return PatrolPathCommand_Update(pThis);
}
