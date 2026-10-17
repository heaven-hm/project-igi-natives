// Original IGI.EXE function: StandFire (VA 0x0048D8B0; static CFG gate PASS, CFG score 1.000).
#include "StandFire.h"
bool StandFire(void* context)

{
    char* item_8 = "Stand - Fire";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_UpdatePatrol_3(context + 0x3e88, context);
    return Combat_RunFire(context);
}
