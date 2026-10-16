#include "004712E0-Weapon_UpdateZoom.h"
/* 0x004712e0 Weapon_UpdateZoom full linked: callers=1 callees=1 */
void* sub_4712e0(void* a1, int32_t a2, int32_t a3)

{
    __builtin_memset(a1, 0, 0x14);
    *(a1 + 0x10) = a2;
    *(a1 + 8) = a3;
    return a1;
}
