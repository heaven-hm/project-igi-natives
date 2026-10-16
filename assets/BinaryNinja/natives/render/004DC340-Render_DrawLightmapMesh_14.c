#include "Render_DrawLightmapMesh_14.h"
void Render_DrawLightmapMesh_14(void** a1)

{
    void** i = a1;

    while (i)
    {
        int32_t valA1 = Render_ComputeNormals_15();
        int16_t v_8_1 = valA1;
        valA1 = i[7];
        char valA;
        int32_t objC1;
        valA = TaskType_IsDerivedFrom(valA1, v_8_1);

        if (!valA)
        {
            int16_t valA2 = DynObj_LookupHashItem_5();
            objC1 = i[7];

            if (TaskType_IsDerivedFrom(objC1, valA2))
            {
                void* valA4 = i[0x3a];
                i[0x37] = 0;

                if (valA4)
                {
                    int32_t* objC2 = *(valA4 + 8);
                    int32_t valA5 = *objC2;
                    int32_t valA6 = -(valA5);
                    Render_DrawLightmapMesh_14((valA6 - valA6) & objC2);
                }
            }

            int32_t* objC3 = i[2];
            int32_t valA9 = *objC3;
            int32_t valA10 = -(valA9);
            Render_DrawLightmapMesh_14((valA10 - valA10) & objC3);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
