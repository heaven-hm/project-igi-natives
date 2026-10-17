// Original IGI.EXE function: Radio_StopSound (VA 0x0043AD40; static CFG gate PASS, CFG score 1.000).
#include "Radio_StopSound.h"

int32_t Radio_StopSound(void* pThis)

{
    Script_Isexists(pThis + 0x38, pThis);
    return 0;
}
