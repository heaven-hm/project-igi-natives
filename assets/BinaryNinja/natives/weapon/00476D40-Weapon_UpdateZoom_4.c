// Original IGI.EXE function: Weapon_UpdateZoom_4 (VA 0x00476D40; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateZoom_4.h"
int32_t* Weapon_UpdateZoom_4(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t item_1c = param_2;
    int32_t item_10 = param_4;
    int32_t item_14 = param_3;
    int32_t item_18 = 0xffffffff;
    int32_t item_c = context + 0x20;
    int32_t item_8 = context;
    int32_t item_4 = 0;
    return AI_EventBroadcast(&item_1c);
}
