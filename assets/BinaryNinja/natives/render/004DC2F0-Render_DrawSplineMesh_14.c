// Original IGI.EXE function: Render_DrawSplineMesh_14 (VA 0x004DC2F0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawSplineMesh_14.h"
void Render_DrawSplineMesh_14(int32_t* context)

{
    int32_t* i = context;

    while (i)
    {
        int32_t data_1 = MagicObj_GetTypeId();
        int16_t item_8_1 = data_1;
        data_1 = i[7];

        if (TaskType_IsDerivedFrom(data_1, item_8_1))
        {
            i[0x37] = 0;
            int32_t* entity_1 = i[2];
            int32_t data_2 = *entity_1;
            int32_t data_3 = -(data_2);
            Render_DrawSplineMesh_14((data_3 - data_3) & entity_1);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
