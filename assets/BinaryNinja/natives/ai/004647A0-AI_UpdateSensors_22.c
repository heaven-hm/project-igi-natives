// Original IGI.EXE function: AI_UpdateSensors_22 (VA 0x004647A0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateSensors_22.h"
void* AI_UpdateSensors_22(void* a1, float a2, int32_t a3)

{
    *(a1 + 0x1d0) = a2;
    *(a1 + 0x1dc) = a3;
    *(a1 + 0x1cc) = a2;
    *(a1 + 0x1d8) = a3;
    return a1;
}
