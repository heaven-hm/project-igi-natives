// IGI native provenance: DoorCabinet_Invoke3_447FF0 - 0x00447FF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00447FF0-DoorCabinet_Invoke3_447FF0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke3_447FF0.h"

int32_t* DoorCabinet_Invoke3_447FF0(void* arg1, int32_t arg2)

{
    DynObj_QtasklistIsFull(Level_StartMission_3(), arg1);
    (*((FX_TrailUpdate() << 2) + &g_a96ae0))(arg1, arg2);
    FX_FireBallUpdate_2(arg1, 1f, 0x3f000000, 0x3f000000, 0x3f800000, 0, 5, 4, "explo_02_m");
    *(arg1 + 0x238) = 0;
    *(arg1 + 0x24c) = 0x40800000;
    *(arg1 + 0x24a) = 0xffff;
    *(arg1 + 0x250) = 0;
    *(arg1 + 0x239) = 0;
    *(arg1 + 0x23a) = 0;
    *(arg1 + 0x23c) = 0;
    *(arg1 + 0x240) = 1;
    *(arg1 + 0x241) = 0;
    *(arg1 + 0x242) = 0;
    *(arg1 + 0x244) = 0;
    *(arg1 + 0x248) = 0;
    return Script_ExecuteLevelScript_6(arg1 + 0x258);
}
