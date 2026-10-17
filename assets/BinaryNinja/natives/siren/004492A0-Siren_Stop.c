// Original IGI.EXE function: Siren_Stop (VA 0x004492A0; static CFG gate PASS, CFG score 1.000).
#include "Siren_Stop.h"

int32_t* Siren_Stop(void* pThis, int32_t param)

{
    (*((FX_TrailUpdate() << 2) + &g_a96ae0))(pThis, param);
    FX_FireBallUpdate_2(pThis, 1.0f, 0x3f000000, 0x3f000000, 0x3f800000, 0, 5, 4, "explosion_1");
    *(pThis + 0x2d0) = 0;
    *(pThis + 0x2d1) = 0;
    *(pThis + 0x2d2) = 0;
    *(pThis + 0x238) = 0;
    *(pThis + 0x258) = 0;
    *(pThis + 0x2c8) = 0;
    *(pThis + 0x2cc) = 0;
    return Script_ExecuteLevelScript_6(pThis + 0x278);
}
