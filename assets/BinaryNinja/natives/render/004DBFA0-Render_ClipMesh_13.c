#include "Render_ClipMesh_13.h"
void Render_ClipMesh_13(int32_t* a1, void** a2)

{
    void** i = a2;

    while (i)
    {
        int32_t valA1 = Render_ComputeNormals_15();
        int16_t v_c_1 = valA1;
        valA1 = i[7];
        char valA;
        int32_t objC1;
        valA = TaskType_IsDerivedFrom(valA1, v_c_1);

        if (!valA)
        {
            int16_t valA2 = DynObj_LookupHashItem_5();
            objC1 = i[7];

            if (TaskType_IsDerivedFrom(objC1, valA2))
            {
                int32_t* valA4 = i[0x1b];

                if (valA4 && *(*(*(*valA4 + 0xc) + 0xc) + 0x20) == 3)
                    *a1 += valA4[0xf];

                void* valA6 = i[0x3a];

                if (valA6)
                {
                    int32_t* objC3 = *(valA6 + 8);
                    int32_t valA7 = *objC3;
                    int32_t valA8 = -(valA7);
                    Render_ClipMesh_13(a1, (valA8 - valA8) & objC3);
                }
            }

            int32_t* objC4 = i[2];
            int32_t valA11 = *objC4;
            int32_t valA12 = -(valA11);
            Render_ClipMesh_13(a1, (valA12 - valA12) & objC4);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
