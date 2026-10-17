// IGI native provenance: Weapon_EjectMagazine_6 - 0x0047B110 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047B110-Weapon_EjectMagazine_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_EjectMagazine_6.h"
struct status_msg* Weapon_EjectMagazine_6(void* context, void* param_2, void* param_3)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5be3ce;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);

    if (param_2)
        result->head[0x1b] = QTask_LinkEventHandler_2(param_2);

    if (param_3)
        result->head[0x1c] = QTask_LinkEventHandler_2(param_3);

    Qhash_Reset();
    return result;
}
