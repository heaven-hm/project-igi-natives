// IGI native provenance: Menu_UpdateLanguage_23 - 0x0042FDD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042FDD0-Menu_UpdateLanguage_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_23.h"
int32_t* Menu_UpdateLanguage_23(void* context)

{
    return QTask_DeleteTask_2(*(context + 0xe8), Weapon_CheckAmmo_3());
}
