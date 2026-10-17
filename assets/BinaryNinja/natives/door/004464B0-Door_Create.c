// Original IGI.EXE function: Door_Create (VA 0x004464B0; static CFG gate PASS, CFG score 1.000).
#include "Door_Create.h"

bool* Door_Create(bool* pThis )

{
    *pThis = !pThis[8];
    return pThis;
}
