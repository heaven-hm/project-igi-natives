// Original IGI.EXE function: Display_CloseDevice_11 (VA 0x00496650; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_11.h"
int32_t Display_CloseDevice_11(int32_t* context)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* data_val = context[4];
    (*(*data_val + 8))(data_val);

    if (context[2] & 4)
    {
        int32_t* data_1 = context[5];
        (*(*data_1 + 8))(data_1);
    }

    int32_t* data_2 = context[6];

    if (data_2)
    {
        Sys_ReadFileBlock_4(data_2);
        context[6] = 0;
    }

    Display_SetDisplayMode_11(context, &g_6840f4);
    return Display_SetGammaRamp_8(context, &g_6840f8);
}
