// Original IGI.EXE function: Camera_SetFieldOfView_6 (VA 0x004A5A0C; static CFG gate FAIL, CFG score 0.667).
#include "Camera_SetFieldOfView_6.h"
void* Camera_SetFieldOfView_6(char* context, char* param_2)

{
    int32_t context_val;
    int32_t item_28 = context_val;
    char* source_val = param_2;
    char item_24[0x20];
    memset(&item_24, 0, 0x20);
    char i;

    do
    {
        i = *source_val;
        uint32_t i_1 = i;
        int32_t saved_frame;
        *(&saved_frame + (i_1 >> 3) - 0x20) |= 1 << (i_1 & 7);
        source_val = &source_val[1];
    } while (i);
    char* temp_1 = context;

    if (!temp_1)
        temp_1 = g_936060;

    char data_4;

    while (true)
    {
        data_4 = *temp_1;
        uint32_t source_1 = data_4;

        if (!(item_24[source_1 >> 3] & 1 << (source_1 & 7)))
            break;

        if (!data_4)
            break;

        temp_1 = &temp_1[1];
    }

    char* context_3 = temp_1;

    while (true)
    {
        data_4 = *temp_1;

        if (!data_4)
            goto label_4a5a96;

        uint32_t source_3 = data_4;

        if (item_24[source_3 >> 3] & 1 << (source_3 & 7))
        {
            *temp_1 = 0;
            temp_1 = &temp_1[1];
        label_4a5a96:
            int32_t data_7 = context_3 - temp_1;
            int32_t data_8 = -(data_7);
            g_936060 = temp_1;
            return (data_8 - data_8) & context_3;
        }

        temp_1 = &temp_1[1];
    }
}
