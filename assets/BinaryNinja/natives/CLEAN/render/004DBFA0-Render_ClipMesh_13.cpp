// IGI native provenance: Render_ClipMesh_13 - 0x004DBFA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DBFA0-Render_ClipMesh_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ClipMesh_13.h"
void Render_ClipMesh_13(int32_t* context, void** param_2)

{
    void** i = param_2;

    while (i)
    {
        int32_t data_1 = Render_ComputeNormals_15();
        int16_t item_c_1 = data_1;
        data_1 = i[7];
        char data_val;
        int32_t entity_1;
        data_val = TaskType_IsDerivedFrom(data_1, item_c_1);

        if (!data_val)
        {
            int16_t data_2 = DynObj_LookupHashItem_5();
            entity_1 = i[7];

            if (TaskType_IsDerivedFrom(entity_1, data_2))
            {
                int32_t* data_4 = i[0x1b];

                if (data_4 && *(*(*(*data_4 + 0xc) + 0xc) + 0x20) == 3)
                    *context += data_4[0xf];

                void* data_6 = i[0x3a];

                if (data_6)
                {
                    int32_t* entity_3 = *(data_6 + 8);
                    int32_t data_7 = *entity_3;
                    int32_t data_8 = -(data_7);
                    Render_ClipMesh_13(context, (data_8 - data_8) & entity_3);
                }
            }

            int32_t* entity_4 = i[2];
            int32_t data_11 = *entity_4;
            int32_t data_12 = -(data_11);
            Render_ClipMesh_13(context, (data_12 - data_12) & entity_4);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
