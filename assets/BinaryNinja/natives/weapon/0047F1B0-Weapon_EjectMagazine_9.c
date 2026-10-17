// Original IGI.EXE function: Weapon_EjectMagazine_9 (VA 0x0047F1B0; static CFG gate PASS, CFG score 0.889).
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
