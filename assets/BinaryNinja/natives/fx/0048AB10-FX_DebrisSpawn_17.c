// Original IGI.EXE function: FX_DebrisSpawn_17 (VA 0x0048AB10; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_17.h"
int32_t* FX_DebrisSpawn_17(void* context)

{
    int32_t item_1c = 5;
    int32_t item_14 = 0x26;
    int32_t item_10 = 0x46e00000;
    void* source_val = *(context + 0x14);
    int32_t item_18 = AI_CombatTarget_19(source_val);
    int32_t item_c = DynObj_UpdateDynTree_4(source_val);
    void* item_8 = source_val;
    int32_t item_4 = **(*(context + 0x3de4) + 8);
    return AI_EventBroadcast(&item_1c);
}
