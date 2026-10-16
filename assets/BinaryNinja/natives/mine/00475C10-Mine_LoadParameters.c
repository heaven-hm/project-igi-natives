#include "Mine_LoadParameters.h"
int32_t Mine_LoadParameters(void* a1, int32_t a2)

{
    DynObj_QtasklistIsFull(Level_LoadLevel_4(), a1);
    DynObj_QtasklistIsFull(Weapon_UpdateMuzzleFlash_4(), a1);
    DynObj_QtasklistIsFull(Level_CheckQTaskID_4(), a1);
    (*((FX_TrailUpdate() << 2) + &g_a96ae0))(a1, a2);
    FX_FireBallUpdate_2(a1, 1f, 0x40000000, 0, 0x3f800000, 0, 5, 1, "explo_proxy");
    int32_t result = Game_DataSymbolLoad(a1 + 0x170, "136_01_1");
    *(a1 + 0x238) = 0;
    *(a1 + 0x23c) = 0;
    *(a1 + 0x240) = 0x3f400000;
    *(a1 + 0x244) = 0x40400000;
    *(a1 + 0x248) = 0;
    return result;
}
