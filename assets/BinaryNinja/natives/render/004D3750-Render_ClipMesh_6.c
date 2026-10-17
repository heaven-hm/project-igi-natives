// Original IGI.EXE function: Render_ClipMesh_6 (VA 0x004D3750; static CFG gate PASS, CFG score 1.000).
#include "Render_ClipMesh_6.h"
int32_t* Render_ClipMesh_6(int32_t* a1)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t* flagP = a1;
    int32_t* v_4 = flagP;
    int32_t* ctxB = *flagP;

    if (!ctxB)
        a1 = nullptr;
    else
    {
        int32_t* valA1 = Render_SetupLighting_6(ctxB, 0);
        a1 = valA1;

        if (*valA1 || valA1[1] != flagP)
            a1 = Render_SetupLighting_6(ctxB, 1);
    }

    int32_t* valA3 = Render_SetupLighting_6(flagP, 0);
    int32_t* valA4 = Render_SetupLighting_6(flagP, 1);
    int32_t valA5 = *valA3;

    if (valA5 == 0xffffffff)
    {
        if (*valA4 != 0xffffffff)
        {
            *valA3 = *valA4;
            valA3[1] = valA4[1];
            *valA4 = 0xffffffff;
            return Render_ClipMesh_6(flagP);
        }

        Render_DrawBoneMesh_6(flagP);

        if (ctxB)
        {
            Render_ComputeNormals_6(ctxB);
            *a1 = 0xffffffff;
        }

        return ctxB;
    }

    if (*valA4 != 0xffffffff)
    {
        if (!valA5)
            Render_ClipMesh_6(valA3[1]);

        if (!*valA4)
            Render_ClipMesh_6(valA4[1]);

        if (*valA3 == 0xffffffff || *valA4 == 0xffffffff)
            return Render_ClipMesh_6(flagP);
    }
    else if (!valA5 || ctxB)
    {
        void** dstD1 = nullptr;

        if (ctxB)
        {
            v_4 = ctxB;
            *a1 = *valA3;
            a1[1] = valA3[1];
        }

        if (!*valA3)
        {
            dstD1 = valA3[1];
            *dstD1 = ctxB;
        }

        *valA3 = 0xffffffff;
        Render_DrawBoneMesh_6(flagP);

        if (dstD1)
            return Render_ClipMesh_6(dstD1);
    }

    return v_4;
}
