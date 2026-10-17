// Original IGI.EXE function: FX_DebrisSpawn_14 (VA 0x00489EA0; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_14.h"
int32_t FX_DebrisSpawn_14(int32_t a1, int32_t a2, int32_t a3, float a4)

{
    return Bones_PlayAnimation(a1 + 0x68, 0, a2, a3, a4);
}
