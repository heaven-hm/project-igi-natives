#include "gi_platform.h"
#include "00470760-Binocular_LoadParameters.h"
int32_t* Binocular_LoadParameters(void* a1, int32_t a2)

{
    ((int(*)())(uintptr_t)(*((Weapon_ComputeAccuracy_5() << 2) + &g_a96ae0)))(a1, a2);
    Game_DataSymbolLoad(a1 + 0x104, "WEAPON_ID_BINOCULARS");
    (*(int32_t*)(uintptr_t)(a1 + 0x1b0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1b4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1b8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1bc)) = 0;
    int32_t* result = QTask_LinkEventHandler_2(Weapon_UpdateRecoil_2(a1));
    (*(int32_t*)(uintptr_t)(a1 + 0x1c4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1c0)) = result;
    return result;
}
