// Original IGI.EXE function: Display_SetDisplayMode_8 (VA 0x00495220; static CFG gate PASS, CFG score 1.000).
#include "Display_SetDisplayMode_8.h"
int32_t* Display_SetDisplayMode_8(int32_t context, int32_t* param_2)

{
    int32_t* i_1 = nullptr;
    int32_t* i;

    for (i = *param_2; i; i = *i)
    {
        if (i[1] == context)
        {
            if (!i_1)
            {
                *param_2 = *i;
                i = 1;
                return i;
            }

            int32_t data_val = *i;
            *i_1 = data_val;
            data_val = 1;
            return data_val;
        }

        i_1 = i;
    }

    i = 0;
    return i;
}
