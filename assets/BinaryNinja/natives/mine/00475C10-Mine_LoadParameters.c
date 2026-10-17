// IGI native provenance: Mine_LoadParameters - 0x00475C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475C10-Mine_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Mine_LoadParameters.h"
int32_t Mine_LoadParameters(void* context, int32_t param_2)

{
    DynObj_QtasklistIsFull(Level_LoadLevel_4(), context);
    DynObj_QtasklistIsFull(Weapon_UpdateMuzzleFlash_4(), context);
    DynObj_QtasklistIsFull(Level_CheckQTaskID_4(), context);
    (*((FX_TrailUpdate() << 2) + &g_a96ae0))(context, param_2);
    FX_FireBallUpdate_2(context, 1.0f, 0x40000000, 0, 0x3f800000, 0, 5, 1, "explo_proxy");
    int32_t result = Game_DataSymbolLoad(context + 0x170, "136_01_1");
    *(context + 0x238) = 0;
    *(context + 0x23c) = 0;
    *(context + 0x240) = 0x3f400000;
    *(context + 0x244) = 0x40400000;
    *(context + 0x248) = 0;
    return result;
}
