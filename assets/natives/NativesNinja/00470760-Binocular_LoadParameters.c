#include "00470760-Binocular_LoadParameters.h"
/* 0x00470760 Binocular_LoadParameters full linked: callers=0 callees=4 */
int32_t* sub_470760(void* a1, int32_t a2)

{
    (*((sub_477bf0() << 2) + &g_a96ae0))(a1, a2);
    Game_DataSymbolLoad(a1 + 0x104, "WEAPON_ID_BINOCULARS");
    *(a1 + 0x1b0) = 0;
    *(a1 + 0x1b4) = 0;
    *(a1 + 0x1b8) = 0;
    *(a1 + 0x1bc) = 0;
    int32_t* result = QTask_LinkEventHandler_2(sub_472600(a1));
    *(a1 + 0x1c4) = 0;
    *(a1 + 0x1c0) = result;
    return result;
}
