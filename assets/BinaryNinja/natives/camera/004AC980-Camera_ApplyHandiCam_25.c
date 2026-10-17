// Original IGI.EXE function: Camera_ApplyHandiCam_25 (VA 0x004AC980; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_25.h"
int32_t Camera_ApplyHandiCam_25(int16_t* context, int32_t* param_2, int32_t* param_3)

{
    uint32_t entity_val = context[5];
    int16_t* entity_1 = entity_val & 0x8000;
    int32_t item_10 = *(context + 6);
    int32_t entity_3 = *(context + 2);
    int32_t context_2 = (entity_val & 0x7fff) - 0x3fff;
    uint32_t item_8 = *context << 0x10;
    int32_t result;
    int32_t source_1;

    if (context_2 != 0xffffc001)
    {
        void item_1c;
        Camera_UpdateTransform_25(&item_1c, &item_10);

        if (Camera_ResetMatrix_24(&item_10, param_3[2]))
            context_2 += 1;

        int32_t data_5 = param_3[1];

        if (context_2 >= data_5 - param_3[2])
        {
            if (context_2 <= data_5)
            {
                Camera_UpdateTransform_25(&item_10, &item_1c);
                Camera_ApplyBandFilter_25(&item_10, data_5 - context_2);
                Camera_ResetMatrix_24(&item_10, param_3[2]);
                Camera_ApplyBandFilter_25(&item_10, param_3[3] + 1);
                goto label_4aca62;
            }

            if (context_2 < *param_3)
            {
                int32_t item_2c_7 = param_3[3];
                int32_t source_4 = param_3[5];
                *(&item_10 + 3) &= 0x7f;
                source_1 = source_4 + context_2;
                Camera_ApplyBandFilter_25(&item_10, item_2c_7);
                result = 0;
            }
            else
            {
                Camera_SetFieldOfView_25(&item_10);
                int32_t item_30_3 = param_3[3];
                *(&item_10 + 3) |= 0x80;
                Camera_ApplyBandFilter_25(&item_10, item_30_3);
                source_1 = param_3[5] + *param_3;
                result = 1;
            }
        }
        else
        {
            Camera_SetFieldOfView_25(&item_10);
        label_4aca62:
            source_1 = 0;
            result = 2;
        }
    }
    else
    {
        source_1 = 0;

        if (Camera_ApplyLineFilter_25(&item_10))
            result = 0;
        else
        {
            Camera_SetFieldOfView_25(&item_10);
            result = 2;
        }
    }

    int32_t dest_1 = param_3[4];
    int32_t entity_12 = -(entity_1);
    int32_t source_7 = source_1 << ((0x1f - param_3[3]) & 0x1f) | ((entity_12 - entity_12) & 0x80000000) | item_10;

    if (dest_1 == 0x40)
    {
        param_2[1] = source_7;
        *param_2 = entity_3;
    }
    else if (dest_1 == 0x20)
        *param_2 = source_7;

    return result;
}
