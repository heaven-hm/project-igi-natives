// Original IGI.EXE function: AI_AlertAllies_20 (VA 0x00463610; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_20.h"
void* AI_AlertAllies_20(void* context)

{
    *(context + 0x7b8) = 1;
    return context;
}
