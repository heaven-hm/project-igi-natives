// IGI native provenance: Camera_ApplyWideScreen_27 - 0x004AD371 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD371-Camera_ApplyWideScreen_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_27.h"
int32_t Camera_ApplyWideScreen_27(int32_t context, int32_t* param_2, uint32_t param_3)

{
    uint32_t entity_val = *param_3;
    int32_t data_1 = *param_2;
    param_3 = entity_val;
    int32_t item_6c_1;

    if (data_1 == 1)
    {
    label_4ad3b6:
        item_6c_1 = 8;
    label_4ad3bf:

        if (!Camera_UpdateViewCone_12(item_6c_1, &param_2[6], entity_val))
        {
            int32_t item_24;

            if (context == 0x10 || context == 0x16 || context == 0x1d)
            {
                double item_34_1 = *(param_2 + 0x10);
                int32_t item_24_2 = (item_24 & 0xffffffe3) | 3;
            }
            else
                int32_t item_24_1 = item_24 & 0xfffffffe;
            void item_5c;
            Camera_ApplyPostProcess_12(&item_5c, &param_3, item_6c_1, context, &param_2[2], &param_2[6]);
            /* no return */
        }
    }
    else
    {
        if (data_1 == 2)
        {
            item_6c_1 = 4;
            goto label_4ad3bf;
        }

        if (data_1 == 3)
        {
            item_6c_1 = 0x11;
            goto label_4ad3bf;
        }

        if (data_1 == 4)
        {
            item_6c_1 = 0x12;
            goto label_4ad3bf;
        }

        if (data_1 == 5)
            goto label_4ad3b6;

        if (data_1 == 7)
            *param_2 = 1;
        else if (data_1 == 8)
        {
            item_6c_1 = 0x10;
            goto label_4ad3bf;
        }
    }
    int16_t fpu_control;
    Camera_UpdateTransform_14(fpu_control, param_3, 0xffff);

    if (*param_2 != 8 && !g_546af0)
    {
        int32_t* item_6c_4 = param_2;
        Camera_ApplyHandiCam_27();
    }

    return Camera_UpdateTransform_13(*param_2);
}
