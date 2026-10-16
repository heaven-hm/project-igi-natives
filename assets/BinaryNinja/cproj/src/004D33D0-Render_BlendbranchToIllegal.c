#include "gi_platform.h"
#include "004D33D0-Render_BlendbranchToIllegal.h"
int32_t Render_BlendbranchToIllegal(int32_t a1, int32_t a2, void* a3, int32_t* a4)

{
    int32_t objC = *a4;

    if (objC == 1)
    {
        void* valA = a4[1];
        int32_t objC1 = (*(int32_t*)(uintptr_t)(valA + 8));

        if (!objC1)
            return a2;

        return objC1(a1, a2, a3, (*(int32_t*)(uintptr_t)(valA + 0x10)));
    }

    if (!objC)
        return Render_DrawRigidMesh_6(a1, a2, a3, a4[1]);

    Error_Show("BlendBranch to illegal target");

    while (true)
        /* nop */
}
