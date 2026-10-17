// Original IGI.EXE function: FX_LiedownFire (VA 0x0048DDC0; static CFG gate PASS, CFG score 1.000).
#include "FX_LiedownFire.h"
bool FX_LiedownFire(void* a1)

{
    char* v_8 = "LieDown - Fire";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    AI_WriteChannel(a1, 2, 1f);
    AI_UpdatePatrol_3(a1 + 0x3e88, a1);
    return Combat_RunFire(a1);
}
