// IGI native provenance: Weapons_CountGet - 0x00413BB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00413BB0-Weapons_CountGet.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapons_CountGet.h"
int32_t Weapons_CountGet()

// Sig: int Weapons_CountGet()
// Note: RETURNS the number of weapons defined for the human player: reads
// global counter 0x57B18C (exactly `mov data_val,[0x57B18C]; ret`). That counter is
// written by the DefineHumanPlayerWeaponCycle definition parser - so this
// reflects the current weapon-cycle list length. Use to bounds-check weapon
// indexes before Weapon_GunPickup-style calls.
{
    return g_57b18c;
}
