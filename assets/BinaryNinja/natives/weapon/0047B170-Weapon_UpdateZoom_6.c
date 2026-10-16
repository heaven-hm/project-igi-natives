#include "Weapon_UpdateZoom_6.h"
int32_t* Weapon_UpdateZoom_6(int32_t* a1, int32_t a2)

{
    if (!a1[0x25])
        return QTask_FindType(a1);

    a1[0x1a] = a2;
    return a1;
}
