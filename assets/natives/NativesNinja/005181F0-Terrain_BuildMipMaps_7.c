#include "005181F0-Terrain_BuildMipMaps_7.h"
/* 0x005181f0 Terrain_BuildMipMaps_7 full linked: callers=1 callees=0 */
void* sub_5181f0(void** a1)

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
