// Original IGI.EXE function: WeaponType_InitType_2 (VA 0x00414F40; static CFG gate PASS, CFG score 0.958).
#include "WeaponType_InitType_2.h"
int32_t WeaponType_InitType_2(int32_t a1, void* a2, int32_t a3, char* a4)

{
    int32_t valA = DynObj_LookupHashItem_5();
    int16_t v_10 = valA;
    valA = *(a2 + 0x1c);
    char valA1;
    int32_t objC;
    valA1 = TaskType_IsDerivedFrom(valA, v_10);

    if (!valA1)
    {
        int16_t valA2 = Render_DrawRigidMesh_12();
        objC = *(a2 + 0x1c);

        if (TaskType_IsDerivedFrom(objC, valA2))
        {
            int32_t* valA4 = DynObj_Missing(a4);

            if (valA4 && Render_DrawLightmapMesh_2(*valA4) > a3)
            {
                char* v_10_4 = a4;
                int32_t v_14_2 = a3;
                void* v_18 = a2;
                return Render_TransformVertices(a1);
            }
        }
    }

    __builtin_memset(a1, 0, 0x18);
    return a1;
}
