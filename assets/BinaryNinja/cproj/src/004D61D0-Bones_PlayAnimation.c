#include "gi_platform.h"
#include "004D61D0-Bones_PlayAnimation.h"
int32_t Bones_PlayAnimation(float a1, int32_t a2, int32_t a3, int32_t a4, float a5)

{
    int32_t* objC = a1;
    void* srcS3 = objC[2] + a2 * 0x84;
    void* dstD = *(srcS3 + 0x80);
    a1 = a5 * 4800.0f / g_a54658;
    int32_t* ctxB = Render_DrawSplineMesh_8(*objC, a2, a3, a4);

    if (dstD || *(srcS3 + 0x74))
    {
        long double x87_r7_2 = a1;
        long double f0_1 = 1.0f;
        x87_r7_2 - f0_1;

        if (!(*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            Render_DrawLightmapMesh_9(srcS3, ctxB, a1, 0);
            int32_t valA7 = *(srcS3 + 4) | 0x20000;
            *(srcS3 + 4) = valA7;
            return valA7;
        }

        if (dstD)
            Render_DrawBoneMesh_6(dstD);
    }

    int32_t* valA3 = Render_DrawLightmapMesh_6();
    Render_SkinBones_6(valA3, 0, 1, ctxB, 0xffffffff, 0, 0, 0, 0, 0, 0, 0);
    int32_t objC5 = *(srcS3 + 4) & 0xfffafeff;
    *(srcS3 + 0x80) = valA3;
    *(srcS3 + 4) = objC5;
    int32_t valA5 = objC5 | 0x20000;
    *(srcS3 + 4) = valA5;
    return valA5;
}
