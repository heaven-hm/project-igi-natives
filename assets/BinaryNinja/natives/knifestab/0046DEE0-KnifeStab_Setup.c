// Original IGI.EXE function: KnifeStab_Setup (VA 0x0046DEE0; static CFG gate PASS, CFG score 1.000).
#include "KnifeStab_Setup.h"

int32_t KnifeStab_Setup(void* pThis)

{
    return QTask_FindType(*(pThis + 0xe8));
}
