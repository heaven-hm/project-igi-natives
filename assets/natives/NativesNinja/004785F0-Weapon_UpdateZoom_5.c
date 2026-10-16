#include "004785F0-Weapon_UpdateZoom_5.h"
/* 0x004785f0 Weapon_UpdateZoom_5 full linked: callers=2 callees=1 */
void* sub_4785f0(void* a1)

{
    *(a1 + 0xf0) = 0;
    *(a1 + 0x134) = 0;
    *(a1 + 0x13c) = 0;
    *(a1 + 0x140) = 0;
    *(a1 + 0x148) = 0;
    __builtin_memset(a1 + 0x198, 0, 0x18);
    return a1;
}
