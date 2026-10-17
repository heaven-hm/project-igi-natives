// Original IGI.EXE function: AI_TakeCover_24 (VA 0x004663B0; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_24.h"
void* AI_TakeCover_24(void* context)

{
    *(context + 0x70) = (*(context + 0x70) & 0xfffffffd) | 1;
    *(context + 0x20) = 0;
    *(context + 0x40) = 0;
    return context;
}
