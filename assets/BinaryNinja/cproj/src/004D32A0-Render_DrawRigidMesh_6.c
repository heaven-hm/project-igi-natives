#include "gi_platform.h"
#include "004D32A0-Render_DrawRigidMesh_6.h"
int32_t Render_DrawRigidMesh_6(int32_t a1, int32_t a2, void* a3, void* a4)

{
    void* v_14 = a4;
    int32_t* valA = Render_SetupLighting_6(a4, 0);
    int32_t* valA1 = Render_SetupLighting_6(a4, 1);
    int32_t valA2 = (*(int32_t*)(uintptr_t)(a4 + 0x14));

    if (!valA2)
    {
        int32_t valA17;

        if (*valA == 0xffffffff)
            valA17 = a2;
        else
            valA17 = Render_BlendbranchToIllegal(a1, a2, a3, valA);

        if (*valA1 == 0xffffffff)
            return valA17;

        return Render_BlendbranchToIllegal(a1, valA17, a3, valA1);
    }

    int32_t valA3 = valA2((*(int32_t*)(uintptr_t)(a4 + 0x18)));

    if (valA3 != 0xffffffff)
        Render_ComputeNormals_6(a4);

    if (!valA3)
    {
        Render_BoneobjDeleteblendno(a4, 0);
        return Render_BlendbranchToIllegal(a1, a2, a3, valA1);
    }

    if (valA3 == 1)
    {
        Render_BoneobjDeleteblendno(a4, 1);
        return Render_BlendbranchToIllegal(a1, a2, a3, valA);
    }

    if (valA3 != 2)
    {
        (*(int32_t*)(uintptr_t)(a3 + 4)) |= 0x10000;
        return Render_BlendbranchToIllegal(a1, Render_BlendbranchToIllegal(a1, a2, a3, valA), a3, valA1);
    }

    Render_BoneobjDeleteblendno(a4, 0);
    Render_BoneobjDeleteblendno(a4, 1);
    return a2;
}
