// Original IGI.EXE function: HumanPlayer_CheckCollision_4 (VA 0x0040C150; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckCollision_4.h"
void* HumanPlayer_CheckCollision_4(void* context)

{
    *(context + 0xd68) = 1;
    return context;
}
