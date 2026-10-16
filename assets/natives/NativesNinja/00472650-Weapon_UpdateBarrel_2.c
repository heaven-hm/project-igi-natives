#include "00472650-Weapon_UpdateBarrel_2.h"
/* 0x00472650 Weapon_UpdateBarrel_2 full linked: callers=1 callees=0 */
int32_t* sub_472650(void* a1, int32_t* a2)

{
    *(a1 + 0x7c) = *a2;
    *(a1 + 0x80) = a2[1];
    *(a1 + 0x84) = a2[2];
    return a1 + 0x7c;
}
