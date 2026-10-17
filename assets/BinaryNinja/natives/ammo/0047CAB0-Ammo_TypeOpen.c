// IGI native provenance: Ammo_TypeOpen - 0x0047CAB0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0047CAB0-Ammo_TypeOpen.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Ammo_TypeOpen.h"
int32_t Ammo_TypeOpen()

// Sig: void Ammo_TypeOpen(void)
// Note: Open ammo qvm file to memory for all weapons loaded.
{
    Game_DefineOptions("DefineAmmoType", Define_AmmoType, 0, 0xffffffff);
    /* tailcall */
    return Weapon_LocalAmmo();
}
