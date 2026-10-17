// Original IGI.EXE function: Terrain_BuildMipMaps_9 (VA 0x0051A0C0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_BuildMipMaps_9.h"
long double Terrain_BuildMipMaps_9(int32_t a1, float a2)

{
    int32_t valA = a2 * 10f;

    if (valA < 0)
        valA = 0;
    else if (valA > 9)
        valA = 9;

    return 1f / (*(a1 + (valA << 2) + 0x9c) * 10f);
}
