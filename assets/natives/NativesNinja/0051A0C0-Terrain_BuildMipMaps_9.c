#include "0051A0C0-Terrain_BuildMipMaps_9.h"
/* 0x0051a0c0 Terrain_BuildMipMaps_9 full linked: callers=1 callees=0 */
long double sub_51a0c0(int32_t a1, float a2)

{
    int32_t eax = a2 * 10f;

    if (eax < 0)
        eax = 0;
    else if (eax > 9)
        eax = 9;

    return 1f / (*(a1 + (eax << 2) + 0x9c) * 10f);
}
