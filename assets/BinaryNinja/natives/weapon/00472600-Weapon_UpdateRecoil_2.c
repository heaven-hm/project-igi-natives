// IGI native provenance: Weapon_UpdateRecoil_2 - 0x00472600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472600-Weapon_UpdateRecoil_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateRecoil_2.h"
struct status_msg* Weapon_UpdateRecoil_2(void* context)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5401f8;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    Qhash_Reset();
    return result;
}
