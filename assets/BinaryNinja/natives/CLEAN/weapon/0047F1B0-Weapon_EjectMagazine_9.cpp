// IGI native provenance: Weapon_EjectMagazine_9 - 0x0047F1B0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047F1B0-Weapon_EjectMagazine_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_EjectMagazine_9.h"
struct status_msg* Weapon_EjectMagazine_9(int32_t context, uint32_t param_2, uint32_t param_3)

{
    int32_t kind;
    kind = g_5c115c;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    memcpy(&result->head[0xa], context, 0x18);
    result->head[8] = param_3;
    result->head[9] = param_3;
    result->head[0x11] = 0;
    result->head[0x10] = param_2;
    return result;
}
