#include "Render_BoneobjDeleteblendno.h"
int32_t Render_BoneobjDeleteblendno(int32_t a1, int32_t a2)

{
    int32_t* valA = Render_SetupLighting_6(a1, a2);
    int32_t valA1 = *valA;

    if (valA1 != 0xffffffff)
    {
        if (!valA1)
            valA1 = Render_DrawBoneMesh_6(valA[1]);
        else
        {
            if (valA1 == 1)
            {
                int32_t valA2 = Render_TransformVertices_6(valA[1]);
                *valA = 0xffffffff;
                return valA2;
            }

            Error_Show("BoneObj_DeleteBlendNodeBranch: Illegal child type");

            while (true)
                /* nop */
        }
    }

    *valA = 0xffffffff;
    return valA1;
}
