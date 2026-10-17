// Original IGI.EXE function: Render_BindTexture_13 (VA 0x004DBF30; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_13.h"
void Render_BindTexture_13(int32_t* context, void** param_2)

{
    void** i = param_2;

    while (i)
    {
        int32_t data_1 = MagicObj_GetTypeId();
        int16_t item_c_1 = data_1;
        data_1 = i[7];

        if (TaskType_IsDerivedFrom(data_1, item_c_1))
        {
            int32_t* data_2 = i[0x1b];

            if (data_2 && *(*(*(*data_2 + 0xc) + 0xc) + 0x20) == 3)
                *context += data_2[0xf];

            int32_t* entity_3 = i[2];
            int32_t data_3 = *entity_3;
            int32_t data_4 = -(data_3);
            Render_BindTexture_13(context, (data_4 - data_4) & entity_3);
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    }
}
