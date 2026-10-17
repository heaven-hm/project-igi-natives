// IGI native provenance: Render_DrawLightmapMesh_14 - 0x004DC340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DC340-Render_DrawLightmapMesh_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawLightmapMesh_14.h"
void Render_DrawLightmapMesh_14(void** context)

{
    void** i = context;

    while (i)
    {
        int32_t data_1 = Render_ComputeNormals_15();
        int16_t item_8_1 = data_1;
        data_1 = i[7];
        char data_val;
        int32_t entity_1;
        data_val = TaskType_IsDerivedFrom(data_1, item_8_1);

        if (!data_val)
        {
            int16_t data_2 = DynObj_LookupHashItem_5();
            entity_1 = i[7];

            if (TaskType_IsDerivedFrom(entity_1, data_2))
            {
                void* data_4 = i[0x3a];
                i[0x37] = 0;

                if (data_4)
                {
                    int32_t* entity_2 = *(data_4 + 8);
                    int32_t data_5 = *entity_2;
                    int32_t data_6 = -(data_5);
                    Render_DrawLightmapMesh_14((data_6 - data_6) & entity_2);
                }
            }

            int32_t* entity_3 = i[2];
            int32_t data_9 = *entity_3;
            int32_t data_10 = -(data_9);
            Render_DrawLightmapMesh_14((data_10 - data_10) & entity_3);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
