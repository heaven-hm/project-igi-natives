// Original IGI.EXE function: WeaponType_UpdateAnim (VA 0x00414E20; static CFG gate PASS, CFG score 0.963).
#include "WeaponType_UpdateAnim.h"
double* WeaponType_UpdateAnim(double* a1, double* a2, int32_t a3)

{
    int32_t valA = DynObj_LookupHashItem_5();
    int16_t v_c = valA;
    valA = *(a2 + 0x1c);

    if (!TaskType_IsDerivedFrom(valA, v_c))
    {
        int32_t valA5 = Render_DrawRigidMesh_12();
        int16_t v_c_3 = valA5;
        valA5 = *(a2 + 0x1c);

        if (TaskType_IsDerivedFrom(valA5, v_c_3))
        {
            int32_t* valA7 = *(a2 + 0x74);

            if (valA7 && Render_DrawLightmapMesh_2(*valA7) > a3)
            {
                int32_t v_c_5 = a3;
                double* v_10_3 = a2;
                return Render_TransformVertices(a1);
            }
        }
    }
    else
    {
        int32_t* valA2 = *(a2 + 0x6c);

        if (valA2 && Render_DrawLightmapMesh_2(*valA2) > a3)
            return Render_ClipMesh(a1, a2, a3);
    }

    __builtin_memset(a1, 0, 0x18);
    return a1;
}
