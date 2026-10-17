// Original IGI.EXE function: AI_SelectTarget_22 (VA 0x00464770; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_22.h"
void* AI_SelectTarget_22(void* a1, float a2, int32_t a3, int32_t a4, int32_t a5)

{
    *(a1 + 0x1dc) = a3;
    *(a1 + 0x1d4) = a4;
    *(a1 + 0x1d0) = a2;
    *(a1 + 0x1e0) = a5;
    return a1;
}
