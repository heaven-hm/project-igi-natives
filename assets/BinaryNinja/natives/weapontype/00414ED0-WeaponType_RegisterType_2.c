#include "WeaponType_RegisterType_2.h"
void** WeaponType_RegisterType_2(void** a1, void* a2, int32_t a3)

{
    int32_t valA = DynObj_LookupHashItem_5();
    int16_t v_8 = valA;
    valA = *(a2 + 0x1c);

    if (TaskType_IsDerivedFrom(valA, v_8))
    {
        int32_t* valA2 = *(a2 + 0x6c);

        if (valA2 && Render_DrawLightmapMesh_2(*valA2) > a3)
            return Render_SetupLighting(a1, a2, a3);
    }

    *a1 = nullptr;
    a1[1] = 0;
    a1[2] = 0;
    return a1;
}
