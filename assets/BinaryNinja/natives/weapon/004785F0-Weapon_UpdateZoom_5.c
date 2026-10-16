#include "Weapon_UpdateZoom_5.h"
void* Weapon_UpdateZoom_5(void* a1)

{
    *(a1 + 0xf0) = 0;
    *(a1 + 0x134) = 0;
    *(a1 + 0x13c) = 0;
    *(a1 + 0x140) = 0;
    *(a1 + 0x148) = 0;
    __builtin_memset(a1 + 0x198, 0, 0x18);
    return a1;
}
