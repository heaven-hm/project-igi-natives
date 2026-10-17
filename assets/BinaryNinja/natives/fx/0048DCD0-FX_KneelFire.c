// Original IGI.EXE function: FX_KneelFire (VA 0x0048DCD0; static CFG gate PASS, CFG score 1.000).
#include "FX_KneelFire.h"
bool FX_KneelFire(void* context)

{
    char* item_8 = "Kneel - Fire";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 1, 1.0f);
    AI_UpdatePatrol_3(context + 0x3e88, context);
    return Combat_RunFire(context);
}
