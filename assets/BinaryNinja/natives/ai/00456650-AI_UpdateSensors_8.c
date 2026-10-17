// Original IGI.EXE function: AI_UpdateSensors_8 (VA 0x00456650; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateSensors_8.h"
int32_t AI_UpdateSensors_8(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a2 + 0x664) = *(a2 + 0x688);
    int32_t result = *(a2 + 0x68c);
    *(a2 + 0x668) = result;
    *(a2 + 0x66c) = *(a2 + 0x690);
    *(a1 + 0x14) = AI_CheckSector_8;
    return result;
}
