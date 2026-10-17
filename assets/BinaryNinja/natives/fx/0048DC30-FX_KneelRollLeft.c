// Original IGI.EXE function: FX_KneelRollLeft (VA 0x0048DC30; static CFG gate PASS, CFG score 1.000).
#include "FX_KneelRollLeft.h"
bool FX_KneelRollLeft(void* context)

{
    char* item_8 = "Kneel - Roll left";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 1, 1.0f);
    *(context + 0x3c7c) = 0x3f800000;
    *(context + 0x3df4) = 1;
    return Locomotion_GetState(context, 1);
}
