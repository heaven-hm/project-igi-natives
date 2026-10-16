#include "0047CF20-Weapon_AmmoId.h"
/* 0x0047cf20 Weapon_AmmoId full linked: callers=1 callees=3 */
int32_t sub_47cf20()

{
    sub_4f1cd0(0x5c10f0);
    sub_4f1db0(0x5c10f0, "AMMO_ID_.*");
    char result = QTask_UnableToAllocateEven(0);
    g_5c10e8 = result;
    return result;
}
