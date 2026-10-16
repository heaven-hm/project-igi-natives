#include "FX_KneelRollLeft.h"
bool FX_KneelRollLeft(void* a1)

{
    char* v_8 = "Kneel - Roll left";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    AI_WriteChannel(a1, 1, 1f);
    *(a1 + 0x3c7c) = 0x3f800000;
    *(a1 + 0x3df4) = 1;
    return Locomotion_GetState(a1, 1);
}
