#include "gi_platform.h"
#include "0051A0C0-Terrain_BuildMipMaps_9.h"
long double Terrain_BuildMipMaps_9(int32_t a1, float a2)

{
    int32_t valA = a2 * 10.0f;

    if (valA < 0)
        valA = 0;
    else if (valA > 9)
        valA = 9;

    return 1.0f / ((*(int32_t*)(uintptr_t)(a1 + (valA << 2) + 0x9c)) * 10.0f);
}
