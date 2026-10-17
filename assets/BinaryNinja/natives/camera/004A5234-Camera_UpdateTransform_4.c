// Original IGI.EXE function: Camera_UpdateTransform_4 (VA 0x004A5234; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_4.h"
int32_t Camera_UpdateTransform_4(int32_t* context)

{
    int32_t result_1 = 0xffffffff;
    char data_val = context[3];
    int32_t result;

    if (!(data_val & 0x40))
    {
        if (data_val & 0x83)
        {
            result_1 = Camera_ApplyHandiCam_9(context);
            Camera_ApplyLineFilter_9(context);
            int32_t data_2;
            void** entity_1;
            data_2 = Camera_SetFieldOfView_9(context[4]);

            if (data_2 >= 0)
            {
                int32_t data_3 = context[7];

                if (data_3)
                {
                    int32_t item_c_2 = data_3;
                    Camera_UpdateTransform_9(entity_1);
                    context[7] = 0;
                }
            }
            else
                result_1 = 0xffffffff;
        }

        result = result_1;
    }
    else
        result = 0xffffffff;

    context[3] = 0;
    return result;
}
