// Original IGI.EXE function: Camera_UpdateViewCone_29 (VA 0x004AE5F3; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_29.h"
void Camera_UpdateViewCone_29(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t context_val = 0x546a98;

    if (!param_2)
        return;

    if (param_2 < 0)
    {
        param_2 = -(param_2);
        context_val = 0x546bf8;
    }

    if (!param_3)
        *context = 0;

    while (param_2)
    {
        int32_t data_2 = param_2;
        context_val += 0x54;
        param_2 s>>= 3;
        int32_t data_val = data_2 & 7;

        if (data_val)
        {
            int32_t data_3 = data_val * 3;
            int32_t* source_1 = context_val + (data_3 << 2);

            if (*(context_val + (data_3 << 2)) >= 0x8000)
            {
                int32_t item_10 = *source_1;
                void item_c;
                int32_t* dest_1 = &item_c;
                int32_t* source_2 = &source_1[1];
                *dest_1 = *source_2;
                dest_1[1] = source_2[1];
                *(&item_10 + 2) -= 1;
                source_1 = &item_10;
            }

            Camera_ApplyPostProcess_29(context, source_1);
        }
    }
}
