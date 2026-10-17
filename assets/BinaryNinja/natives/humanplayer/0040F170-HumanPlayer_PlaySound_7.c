// Original IGI.EXE function: HumanPlayer_PlaySound_7 (VA 0x0040F170; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlaySound_7.h"
void* HumanPlayer_PlaySound_7(void* context)

{
    *(context + 0x14) = HumanPlayer_TakeDamage_7;
    return context;
}
