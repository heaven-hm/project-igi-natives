// Original IGI.EXE function: HumanCamera_CleanupList (VA 0x00484CE0; static CFG gate PASS, CFG score 1.000).
#include "HumanCamera_CleanupList.h"

void* HumanCamera_CleanupList(void* pThis)

{
    *(pThis + 0x68) = 0;
    return pThis;
}
