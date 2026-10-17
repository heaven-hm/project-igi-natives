// Original IGI.EXE function: Env_CheckAmbientArea_6 (VA 0x00444BC0; static CFG gate PASS, CFG score 1.000).
#include "Env_CheckAmbientArea_6.h"
void* Env_CheckAmbientArea_6(void* context)

{
    char entity_val = *(context + 0x1c4);
    *(context + 0x1c4) = 1;
    *(context + 0x1c5) = entity_val;
    *(context + 0x1c8) = *(g_bc2360 + 0x68);
    return context;
}
