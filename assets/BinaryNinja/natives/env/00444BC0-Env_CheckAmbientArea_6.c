// Original IGI.EXE function: Env_CheckAmbientArea_6 (VA 0x00444BC0; static CFG gate PASS, CFG score 1.000).
#include "Env_CheckAmbientArea_6.h"
void* Env_CheckAmbientArea_6(void* a1)

{
    char objC = *(a1 + 0x1c4);
    *(a1 + 0x1c4) = 1;
    *(a1 + 0x1c5) = objC;
    *(a1 + 0x1c8) = *(g_bc2360 + 0x68);
    return a1;
}
