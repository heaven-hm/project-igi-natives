// Original IGI.EXE function: Render_DrawRigidMesh_14 (VA 0x004DC050; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawRigidMesh_14.h"
void Render_DrawRigidMesh_14(int32_t* context, int32_t param_2, int32_t* param_3, int32_t param_4)

{
    int32_t* i = param_3;

    while (i)
    {
        int32_t* flagP1 = i[0x1b];
        int32_t data_1 = MagicObj_GetTypeId();
        int16_t item_14_1 = data_1;
        data_1 = i[7];

        if (TaskType_IsDerivedFrom(data_1, item_14_1))
        {
            int32_t data_val = i[0x1b];

            if (data_val && *(*(*(*data_val + 0xc) + 0xc) + 0x20) == 3)
            {
                int32_t j = 0;
                i[0x37] = param_2 + *context * 0x24 + 0x18;

                if (flagP1[0xf] > 0)
                {
                    param_3 = flagP1;

                    do
                    {
                        *(param_2 + *context * 0x24 + 0x18) = 0;
                        *(param_2 + *context * 0x24 + 0x20) = i;
                        *(param_2 + (*context + 1) * 0x24) = &i[0x1c];
                        *(param_2 + *context * 0x24 + 0x28) = &i[8];
                        *(param_2 + *context * 0x24 + 0x2c) = i[0x36];
                        *(param_2 + *context * 0x24 + 0x30) = j;
                        *(param_2 + *context * 0x24 + 0x34) = flagP1[0xf];
                        *(param_2 + *context * 0x24 + 0x1c) = *param_3;
                        *(param_2 + *context * 0x24 + 0x38) = 0;
                        j += 1;
                        *context += 1;
                        param_3 = &param_3[1];
                    } while (j < flagP1[0xf]);
                }

                int32_t* entity_3 = i[2];
                int32_t data_26 = *entity_3;
                int32_t data_27 = -(data_26);
                Render_DrawRigidMesh_14(context, param_2, (data_27 - data_27) & entity_3, param_4);
            }
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
