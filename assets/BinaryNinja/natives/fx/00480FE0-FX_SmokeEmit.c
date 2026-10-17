// Original IGI.EXE function: FX_SmokeEmit (VA 0x00480FE0; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit.h"
struct status_msg* FX_SmokeEmit(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, int32_t a7, uint32_t a8, uint32_t a9, int32_t* a10, int32_t a11, int32_t a12, int32_t* a13, int32_t a14, int32_t a15, uint32_t a16)

{
    float v_c = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
    float v_8 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
    float v_4 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.300000012f;
    return FX_DebrisSpawn(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12,
        a13, a14, a15, &v_c, 0x3fc90fdb, 0x43880000, 0x44aa0000, a16);
}
