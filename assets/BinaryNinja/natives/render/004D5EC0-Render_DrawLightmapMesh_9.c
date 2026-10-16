#include "Render_DrawLightmapMesh_9.h"
int32_t Render_DrawLightmapMesh_9(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t* srcS = *(a1 + 0x80);
    int32_t* valA = Render_SkinBones_9();
    Render_TransformVertices_9(valA, a3, a4);

    if (!srcS)
    {
        srcS = Render_DrawLightmapMesh_6();
        srcS[7] = 1;
        srcS[9] = 1;
        srcS[0xa] = a2;
        int32_t* valA6 = Render_ClipMesh_7();
        Render_DrawRigidMesh_8(valA6, 0, sub_4d4780, 0, 0, a1);
        srcS[8] = valA6;
    }
    else
    {
        int32_t* v_14_1 = srcS;

        if (srcS[9] != 0xffffffff)
        {
            int32_t* valA3 = Render_DrawLightmapMesh_6();
            *srcS = valA3;
            valA3[8] = srcS;
            valA3[7] = 0;
            srcS = valA3;
        }

        srcS[9] = 1;
        srcS[0xa] = a2;
    }

    srcS[1] = 0;
    srcS[2] = 0;
    srcS[3] = sub_4d63a0;
    srcS[4] = sub_4d63f0;
    srcS[5] = sub_4d63b0;
    srcS[6] = valA;
    int32_t valA7 = *(a1 + 4);
    *(a1 + 0x80) = srcS;
    int32_t result = valA7 | 0x10000;
    *(a1 + 4) = result;
    return result;
}
