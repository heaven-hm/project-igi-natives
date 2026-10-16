#include "Render_DrawSplineMesh_14.h"
void Render_DrawSplineMesh_14(int32_t* a1)

{
    int32_t* i = a1;

    while (i)
    {
        int32_t valA1 = MagicObj_GetTypeId();
        int16_t v_8_1 = valA1;
        valA1 = i[7];

        if (TaskType_IsDerivedFrom(valA1, v_8_1))
        {
            i[0x37] = 0;
            int32_t* objC1 = i[2];
            int32_t valA2 = *objC1;
            int32_t valA3 = -(valA2);
            Render_DrawSplineMesh_14((valA3 - valA3) & objC1);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
