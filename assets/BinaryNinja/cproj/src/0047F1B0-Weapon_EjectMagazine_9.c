#include "gi_platform.h"
#include "0047F1B0-Weapon_EjectMagazine_9.h"
struct status_msg* Weapon_EjectMagazine_9(int32_t a1, uint32_t a2, uint32_t a3)

{
    int32_t kind;
    kind = g_5c115c;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    memcpy(&result->head[0xa], a1, 0x18);
    result->head[8] = a3;
    result->head[9] = a3;
    result->head[0x11] = 0;
    result->head[0x10] = a2;
    return result;
}
