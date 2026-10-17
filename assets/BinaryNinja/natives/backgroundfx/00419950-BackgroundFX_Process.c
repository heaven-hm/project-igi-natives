// Original IGI.EXE function: BackgroundFX_Process (VA 0x00419950; static CFG gate PASS, CFG score 1.000).
#include "BackgroundFX_Process.h"
int32_t BackgroundFX_Process(int32_t* context, float* param_2)

{
    int32_t* data_val = *context;

    if (data_val)
        Menu_HandleInput_5(data_val, param_2);

    int32_t result = context[1];
    int32_t dest_val = 0;

    if (result > 0)
    {
        void* context_1 = nullptr;

        do
        {
            Menu_RequestScreen_6(context_1 + context[2], param_2);
            result = context[1];
            dest_val += 1;
            context_1 += 0xc;
        } while (dest_val < result);
    }

    int32_t* source_1 = context[3];

    if (!source_1)
        return result;

    return Menu_DrawWidget_5(source_1, param_2);
}
