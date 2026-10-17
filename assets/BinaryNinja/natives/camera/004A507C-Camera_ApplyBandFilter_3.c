// Original IGI.EXE function: Camera_ApplyBandFilter_3 (VA 0x004A507C; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_3.h"
int32_t Camera_ApplyBandFilter_3(int32_t* context, int32_t param_2)

{
    void* flagP = *context;
    void* source_val = context[6];
    TEB* fsbase;

    if (source_val != fsbase->NtTib.ExceptionList)
        Camera_UpdateTransform_7(source_val);

    if (source_val)
    {
        void* item_4_2 = &context[8];
        Camera_ApplyBandFilter_7();

        if (context[8] != 0x56433230)
            Camera_SetFieldOfView_7(source_val, context[7]);
        else
        {
            int32_t data_3 = context[9];

            if (data_3)
                data_3(context);
        }
    }

    int32_t item_4_5 = 0;
    Camera_ApplyLineFilter_7(context[5], flagP);
    context[1];
    context[2];
    context[3];
    context[4];
❓    /* jump -> *(context + 0x14) */
}
