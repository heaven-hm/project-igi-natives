// Original IGI.EXE function: PatrolPath_Create (VA 0x00453470; static CFG gate PASS, CFG score 1.000).
#include "PatrolPath_Create.h"

void* PatrolPath_Create(void* pThis)

{
    *(pThis + 0x20) = 0xffffffff;
    *(pThis + 0x24) = 0xffffffff;
    return pThis;
}
