#include "gi_platform.h"
#include "0048AB10-FX_DebrisSpawn_17.h"
int32_t* FX_DebrisSpawn_17(void* a1)

{
    int32_t v_1c = 5;
    int32_t v_14 = 0x26;
    int32_t v_10 = 0x46e00000;
    void* srcS = (*(int32_t*)(uintptr_t)(a1 + 0x14));
    int32_t v_18 = AI_CombatTarget_19(srcS);
    int32_t v_c = DynObj_UpdateDynTree_4(srcS);
    void* v_8 = srcS;
    int32_t v_4 = *(*(int32_t*)(uintptr_t)(*(a1 + 0x3de4) + 8));
    return AI_EventBroadcast(&v_1c);
}
