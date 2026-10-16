#include "FX_KneelRollRight.h"
bool FX_KneelRollRight(void* a1)

{
    char* v_8 = "Kneel - Roll right";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    AI_WriteChannel(a1, 1, 1f);
    *(a1 + 0x3c80) = 0x3f800000;
    *(a1 + 0x3df4) = 0xffffffff;
    return Locomotion_GetState(a1, 1);
}
