#include "005125A0-Terrain_BuildMipMaps.h"
/* 0x005125a0 Terrain_BuildMipMaps full linked: callers=1 callees=4 */
int32_t sub_5125a0()

{
    sub_4d7550();
    int32_t eax = sub_4d14d0();
    return QTask_RemoveEventCallback(sub_4d9610(), eax, sub_5125c0);
}
