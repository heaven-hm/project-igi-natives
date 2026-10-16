#include "gi_platform.h"
#include "00472600-Weapon_UpdateRecoil_2.h"
struct status_msg* Weapon_UpdateRecoil_2(void* a1)

{
    Qhash_Init(1);
    int32_t kind = g_5401f8;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
