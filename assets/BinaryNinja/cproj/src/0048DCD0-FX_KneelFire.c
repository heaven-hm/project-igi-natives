#include "gi_platform.h"
#include "0048DCD0-FX_KneelFire.h"
bool FX_KneelFire(void* a1)

{
    char* v_8 = "Kneel - Fire";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    AI_WriteChannel(a1, 1, 1.0f);
    AI_UpdatePatrol_3(a1 + 0x3e88, a1);
    return Combat_RunFire(a1);
}
