#include "0047B170-Weapon_UpdateZoom_6.h"
/* 0x0047b170 Weapon_UpdateZoom_6 full linked: callers=1 callees=1 */
int32_t* sub_47b170(int32_t* a1, int32_t a2)

{
    if (!a1[0x25])
        return QTask_FindType(a1);

    a1[0x1a] = a2;
    return a1;
}
