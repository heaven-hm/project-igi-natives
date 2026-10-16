#include "gi_platform.h"
#include "004D62B0-Render_ClipMesh_9.h"
void** Render_ClipMesh_9(void* a1, int32_t a2, float a3)

{
    long double x87_r7_1 = a3 * 4800.0f / g_a54658;
    int32_t objC2 = a2 * 0x21;
    void** valA1 = (*(int32_t*)(uintptr_t)(a1 + 8));
    void** srcS = valA1[objC2 + 0x20];
    void* dstD = &valA1[objC2];
    long double f0 = 1.0f;
    x87_r7_1 - f0;
    valA1 = (x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 1))
    {
        if (srcS)
        {
            void** v_14_1 = srcS;
            int32_t* valA3 = Render_SkinBones_9();
            Render_TransformVertices_9(valA3, x87_r7_1, 2);
            (*(int32_t*)(uintptr_t)(dstD + 4)) |= 0x10000;
            int32_t* valA4 = Render_ClipMesh_7();
            Render_DrawRigidMesh_8(valA4, 0, sub_4d4780, 0, 0, dstD);
            valA1 = srcS[9];

            if (valA1 != 0xffffffff)
            {
                valA1 = Render_DrawLightmapMesh_6();
                *srcS = valA1;
                valA1[8] = srcS;
                valA1[7] = 0;
                srcS = valA1;
            }

            srcS[0xa] = valA4;
            srcS[9] = 1;
            srcS[3] = sub_4d63a0;
            srcS[4] = sub_4d63f0;
            srcS[5] = sub_4d63b0;
            srcS[6] = valA3;
            (*(int32_t*)(uintptr_t)(dstD + 0x80)) = srcS;
        }
    }
    else if (srcS)
    {
        int32_t valA2 = Render_DrawBoneMesh_6(srcS);
        (*(int32_t*)(uintptr_t)(dstD + 0x80)) = 0;
        return valA2;
    }

    return valA1;
}
