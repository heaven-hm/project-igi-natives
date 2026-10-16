#include "00519690-Terrain_RenderWaterSurface_9.h"
/* 0x00519690 Terrain_RenderWaterSurface_9 full linked: callers=4 callees=0 */
void* sub_519690(int32_t a1)

{
    int32_t i_2 = g_a8101c;
    void* result = nullptr;

    if (i_2 > 0)
    {
        int32_t* edx_1 = &g_a80200;
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            void* ecx = *edx_1;

            if (*(ecx + 0x4c20) == a1)
                result = ecx + 0xf8;

            edx_1 = &edx_1[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
