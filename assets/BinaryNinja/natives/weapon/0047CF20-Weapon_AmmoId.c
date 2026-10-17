// Original IGI.EXE function: Weapon_AmmoId (VA 0x0047CF20; static CFG gate PASS, CFG score 1.000).
#include "Weapon_AmmoId.h"
int32_t Weapon_AmmoId()

{
    Script_FormatString_9(0x5c10f0);
    Script_ParseEnumReal32_10(0x5c10f0, "AMMO_ID_.*");
    char result = QTask_UnableToAllocateEvent(0);
    g_5c10e8 = result;
    return result;
}
