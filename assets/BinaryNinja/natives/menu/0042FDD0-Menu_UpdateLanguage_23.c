// Original IGI.EXE function: Menu_UpdateLanguage_23 (VA 0x0042FDD0; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_23.h"
int32_t* Menu_UpdateLanguage_23(void* a1)

{
    return QTask_DeleteTask_2(*(a1 + 0xe8), Weapon_CheckAmmo_3());
}
