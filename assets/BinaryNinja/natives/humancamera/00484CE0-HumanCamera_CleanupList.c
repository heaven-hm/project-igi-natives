#include "HumanCamera_CleanupList.h"

void* HumanCamera_CleanupList(void* pThis)

{
    *(pThis + 0x68) = 0;
    return pThis;
}
