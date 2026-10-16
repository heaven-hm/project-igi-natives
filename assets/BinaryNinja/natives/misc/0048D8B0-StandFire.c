#include "StandFire.h"
bool StandFire(void* a1)

{
    char* v_8 = "Stand - Fire";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    AI_UpdatePatrol_3(a1 + 0x3e88, a1);
    return Combat_RunFire(a1);
}
