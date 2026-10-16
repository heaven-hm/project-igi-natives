#include "gi_platform.h"
#include "0047B110-Weapon_EjectMagazine_6.h"
struct status_msg* Weapon_EjectMagazine_6(void* a1, void* a2, void* a3)

{
    Qhash_Init(1);
    int32_t kind = g_5be3ce;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);

    if (a2)
        result->head[0x1b] = QTask_LinkEventHandler_2(a2);

    if (a3)
        result->head[0x1c] = QTask_LinkEventHandler_2(a3);

    Qhash_Reset();
    return result;
}
