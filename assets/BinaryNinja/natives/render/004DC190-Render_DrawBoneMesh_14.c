// IGI native provenance: Render_DrawBoneMesh_14 - 0x004DC190 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DC190-Render_DrawBoneMesh_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh_14.h"
void Render_DrawBoneMesh_14(int32_t* context, int32_t param_2, int32_t* param_3)

{
    int32_t* i = param_3;

    while (i)
    {
        int32_t data_1 = Render_ComputeNormals_15();
        int16_t item_14_1 = data_1;
        data_1 = i[7];
        char data_val;
        int32_t entity_1;
        data_val = TaskType_IsDerivedFrom(data_1, item_14_1);

        if (!data_val)
        {
            int16_t data_2 = DynObj_LookupHashItem_5();
            entity_1 = i[7];

            if (TaskType_IsDerivedFrom(entity_1, data_2))
            {
                int32_t* temp_1 = i[0x1b];

                if (temp_1 && *(*(*(*temp_1 + 0xc) + 0xc) + 0x20) == 3)
                {
                    int32_t j = 0;
                    i[0x37] = param_2 + *context * 0x24 + 0x18;

                    if (temp_1[0xf] > 0)
                    {
                        param_3 = temp_1;

                        do
                        {
                            *(param_2 + *context * 0x24 + 0x18) = 0;
                            *(param_2 + *context * 0x24 + 0x20) = i;
                            *(param_2 + (*context + 1) * 0x24) = &i[0x1c];
                            *(param_2 + *context * 0x24 + 0x28) = &i[8];
                            *(param_2 + *context * 0x24 + 0x2c) = i[0x36];
                            *(param_2 + *context * 0x24 + 0x30) = j;
                            *(param_2 + *context * 0x24 + 0x34) = temp_1[0xf];
                            *(param_2 + *context * 0x24 + 0x1c) = *param_3;
                            *(param_2 + *context * 0x24 + 0x38) = 0;
                            j += 1;
                            *context += 1;
                            param_3 = &param_3[1];
                        } while (j < temp_1[0xf]);
                    }
                }

                void* data_32 = i[0x3a];

                if (data_32)
                {
                    int32_t* entity_4 = *(data_32 + 8);
                    int32_t data_33 = *entity_4;
                    int32_t data_34 = -(data_33);
                    Render_DrawBoneMesh_14(context, param_2, (data_34 - data_34) & entity_4);
                }
            }

            int32_t* entity_5 = i[2];
            int32_t data_37 = *entity_5;
            int32_t data_38 = -(data_37);
            Render_DrawBoneMesh_14(context, param_2, (data_38 - data_38) & entity_5);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
