// Original IGI.EXE function: Weapon_UpdateRecoil_2 (VA 0x00472600; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateRecoil_2.h"
struct status_msg* Weapon_UpdateRecoil_2(void* a1)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5401f8;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
