// Original IGI.EXE function: AI_CheckSector_11 (VA 0x00459250; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_11.h"
int32_t AI_CheckSector_11(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(param_2 + 0x664) = *(param_2 + 0x688);
    int32_t result = *(param_2 + 0x68c);
    *(param_2 + 0x668) = result;
    *(param_2 + 0x66c) = *(param_2 + 0x690);
    *(context + 0x14) = AI_SelectTarget_15;
    return result;
}
