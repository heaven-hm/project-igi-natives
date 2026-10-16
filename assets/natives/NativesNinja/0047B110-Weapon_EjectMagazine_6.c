#include "0047B110-Weapon_EjectMagazine_6.h"
/* 0x0047b110 Weapon_EjectMagazine_6 full linked: callers=1 callees=5 */
struct status_msg* sub_47b110(void* a1, void* a2, void* a3)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5be3ce;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);

    if (a2)
        result->head[0x1b] = QTask_LinkEventHandler_2(a2);

    if (a3)
        result->head[0x1c] = QTask_LinkEventHandler_2(a3);

    Qhash_Reset();
    return result;
}
