// Original IGI.EXE function: AI_CheckSector_19 (VA 0x00463550; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_19.h"
void* AI_CheckSector_19(void* a1)

{
    *(a1 + 0x76c) = 0;
    return AI_UpdateSensors_21(a1);
}
