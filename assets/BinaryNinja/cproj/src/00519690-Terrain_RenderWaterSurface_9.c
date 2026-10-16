#include "gi_platform.h"
#include "00519690-Terrain_RenderWaterSurface_9.h"
void* Terrain_RenderWaterSurface_9(int32_t a1)

{
    int32_t i_2 = g_a8101c;
    void* result = nullptr;

    if (i_2 > 0)
    {
        int32_t* tmpD1 = &g_a80200;
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            void* objC = *tmpD1;

            if (*(objC + 0x4c20) == a1)
                result = objC + 0xf8;

            tmpD1 = &tmpD1[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
