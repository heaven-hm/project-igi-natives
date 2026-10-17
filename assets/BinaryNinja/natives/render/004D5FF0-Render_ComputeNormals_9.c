// Original IGI.EXE function: Render_ComputeNormals_9 (VA 0x004D5FF0; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_9.h"
int32_t Render_ComputeNormals_9(int32_t* a1, int32_t a2, float a3, int32_t a4)

{
    void** srcS = a1[0x20];

    if (srcS || a1[0x1d])
    {
        long double x87_r7_1 = a3;
        long double f0_1 = 1f;
        x87_r7_1 - f0_1;

        if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            int32_t* ctxB = Render_SkinBones_9();
            Render_TransformVertices_9(ctxB, a3, a4);

            if (!srcS)
            {
                srcS = Render_DrawLightmapMesh_6();
                srcS[7] = 1;
                srcS[9] = 0;
                srcS[0xa] = a2;
                int32_t* valA10 = Render_ClipMesh_7();
                Render_DrawRigidMesh_8(valA10, 0, sub_4d4780, 0, 0, a1);
                srcS[8] = valA10;
            }
            else
            {
                void** v_14_1 = srcS;

                if (srcS[9] != 0xffffffff)
                {
                    int32_t* valA7 = Render_DrawLightmapMesh_6();
                    *srcS = valA7;
                    valA7[8] = srcS;
                    valA7[7] = 0;
                    srcS = valA7;
                }

                srcS[9] = 0;
                srcS[0xa] = a2;
            }

            srcS[1] = 0;
            srcS[2] = 0;
            srcS[3] = sub_4d63a0;
            srcS[4] = sub_4d63f0;
            srcS[5] = sub_4d63b0;
            srcS[6] = ctxB;
            int32_t valA11 = a1[1];
            a1[0x20] = srcS;
            int32_t valA12 = valA11 | 0x10000;
            a1[1] = valA12;
            return valA12;
        }

        if (srcS)
            Render_DrawBoneMesh_6(srcS);
    }

    int32_t objC1 = a1[1] & 0xfffafeff;
    a1[0x20] = a2;
    a1[1] = objC1;
    int32_t valA4 = objC1 | 0x10000;
    a1[1] = valA4;
    return valA4;
}
