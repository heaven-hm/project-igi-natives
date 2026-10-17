// Original IGI.EXE function: FX_KneelRollRight (VA 0x0048DC80; static CFG gate PASS, CFG score 1.000).
#include "FX_KneelRollRight.h"
bool FX_KneelRollRight(void* context)

{
    char* item_8 = "Kneel - Roll right";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 1, 1.0f);
    *(context + 0x3c80) = 0x3f800000;
    *(context + 0x3df4) = 0xffffffff;
    return Locomotion_GetState(context, 1);
}
