// Original IGI.EXE function: Siren_Trigger (VA 0x00449260; static CFG gate PASS, CFG score 1.000).
#include "Siren_Trigger.h"

void* Siren_Trigger(void* pThis)

{
    *(pThis + 0x13c) = 0;
    return pThis;
}
