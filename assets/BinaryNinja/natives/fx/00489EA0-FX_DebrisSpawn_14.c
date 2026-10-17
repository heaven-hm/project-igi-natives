// Original IGI.EXE function: FX_DebrisSpawn_14 (VA 0x00489EA0; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_14.h"
int32_t FX_DebrisSpawn_14(int32_t context, int32_t param_2, int32_t param_3, float param_4)

{
    return Bones_PlayAnimation(context + 0x68, 0, param_2, param_3, param_4);
}
