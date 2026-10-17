// IGI native provenance: Weapon_UpdateBarrel_2 - 0x00472650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472650-Weapon_UpdateBarrel_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateBarrel_2.h"
int32_t* Weapon_UpdateBarrel_2(void* context, int32_t* param_2)

{
    *(context + 0x7c) = *param_2;
    *(context + 0x80) = param_2[1];
    *(context + 0x84) = param_2[2];
    return context + 0x7c;
}
