#include "PatrolPath_Create.h"

void* PatrolPath_Create(void* pThis)

{
    *(pThis + 0x20) = 0xffffffff;
    *(pThis + 0x24) = 0xffffffff;
    return pThis;
}
