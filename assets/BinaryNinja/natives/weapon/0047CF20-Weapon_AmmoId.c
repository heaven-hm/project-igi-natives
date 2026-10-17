// IGI native provenance: Weapon_AmmoId - 0x0047CF20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047CF20-Weapon_AmmoId.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_AmmoId.h"
int32_t Weapon_AmmoId()

{
    Script_FormatString_9(0x5c10f0);
    Script_ParseEnumReal32_10(0x5c10f0, "AMMO_ID_.*");
    char result = QTask_UnableToAllocateEvent(0);
    g_5c10e8 = result;
    return result;
}
