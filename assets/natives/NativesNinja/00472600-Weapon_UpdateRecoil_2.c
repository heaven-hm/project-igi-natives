#include "00472600-Weapon_UpdateRecoil_2.h"
/* 0x00472600 Weapon_UpdateRecoil_2 full linked: callers=3 callees=3 */
struct status_msg* sub_472600(void* a1)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5401f8;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
