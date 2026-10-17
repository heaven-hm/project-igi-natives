// Original IGI.EXE function: FX_LiedownFire (VA 0x0048DDC0; static CFG gate PASS, CFG score 1.000).
#include "FX_LiedownFire.h"
bool FX_LiedownFire(void* context)

{
    char* item_8 = "LieDown - Fire";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 2, 1.0f);
    AI_UpdatePatrol_3(context + 0x3e88, context);
    return Combat_RunFire(context);
}
