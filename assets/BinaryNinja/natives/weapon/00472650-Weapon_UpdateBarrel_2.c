#include "Weapon_UpdateBarrel_2.h"
int32_t* Weapon_UpdateBarrel_2(void* a1, int32_t* a2)

{
    *(a1 + 0x7c) = *a2;
    *(a1 + 0x80) = a2[1];
    *(a1 + 0x84) = a2[2];
    return a1 + 0x7c;
}
