#include "gi_platform.h"
#include "005181F0-Terrain_BuildMipMaps_7.h"
void* Terrain_BuildMipMaps_7(void** a1)

{
    void* result = nullptr;

    if (!g_a800c0)
    {
        g_a800c0 = 1;
        *a1 = nullptr;
        return 0;
    }

    char i;

    do
    {
        i = *(result + 0xa800c1);
        result += 1;
    } while (i);
    *(result + &g_a800c0) = 1;
    *a1 = result;
    return result;
}
