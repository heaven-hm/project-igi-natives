#include "gi_platform.h"
#include "004ED5E0-InputPort_Action.h"
int32_t InputPort_Action(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8 , int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15)

{
    int32_t valA1 = a1 * 0xb0;
    *(valA1 + 0xbc20a4) = a2;
    *(valA1 + 0xbc20a8) = a3;
    *(valA1 + 0xbc20ac) = a4;
    *(valA1 + 0xbc20b0) = 0;
    *(valA1 + 0xbc20b4) = 0;
    *(valA1 + 0xbc20b8) = 0;
    *(valA1 + 0xbc20c0) = a5;
    *(valA1 + 0xbc20c4) = a5;
    *(valA1 + 0xbc20c8) = a10;
    *(valA1 + 0xbc20cc) = a13;
    *(valA1 + 0xbc20d0) = a6;
    *(valA1 + 0xbc20d4) = a8;
    *(valA1 + 0xbc20d8) = a11;
    *(valA1 + 0xbc20dc) = a14;
    *(valA1 + 0xbc20e0) = a7;
    *(valA1 + 0xbc20e4) = a9;
    *(valA1 + 0xbc20e8) = a12;
    *(valA1 + 0xbc20ec) = a15;
    Physics_ApplyImpulse_6(valA1 + &g_bc20f0, SoundSys_StopSoundSample_17);
    return 0;
}
