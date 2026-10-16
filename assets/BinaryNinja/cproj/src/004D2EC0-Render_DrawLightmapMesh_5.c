#include "gi_platform.h"
#include "004D2EC0-Render_DrawLightmapMesh_5.h"
int32_t* Render_DrawLightmapMesh_5(void* a1, int32_t a2)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t* result = g_a54638;
    void* ctxB = nullptr;
    int32_t i = 0;

    if (*result > 0)
    {
        v_4 = 0;

        do
        {
            if (*(result[1] + (i << 2)) == a2)
            {
                int32_t* srcS1 = ctxB + g_a5467c;
                Render_SkinBones_5(srcS1, a1);
                *srcS1 = i;
                int32_t* objC6 = *(g_a54638 + 8) + v_4;
                srcS1[2] = *objC6;
                srcS1[3] = objC6[1];
                srcS1[4] = objC6[2];
                long double x87_r7_1 = srcS1[4];
                long double x87_r6_1 = srcS1[3];
                long double x87_r5_1 = srcS1[2];
                srcS1[5] = sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
                Render_DrawLightmapMesh_5(srcS1, i);
                result = g_a54638;
            }

            i += 1;
            ctxB += 0x84;
            v_4 += 0xc;
        } while (i < *result);
    }

    return result;
}
