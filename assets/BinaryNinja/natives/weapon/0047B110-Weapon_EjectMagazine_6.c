// Original IGI.EXE function: Weapon_EjectMagazine_6 (VA 0x0047B110; static CFG gate PASS, CFG score 1.000).
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
