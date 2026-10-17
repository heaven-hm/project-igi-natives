// Original IGI.EXE function: Camera_ApplyBandFilter_28 (VA 0x004AD6F7; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_28.h"
void* Camera_ApplyBandFilter_28(char* context, int32_t param_2)

{
    char* data_val = context;
    int32_t entity_val = param_2 - 1;

    if (param_2)
    {
        while (*data_val)
        {
            data_val = &data_val[1];
            int32_t source_1 = entity_val;
            entity_val -= 1;

            if (!source_1)
                break;
        }
    }

    if (*data_val)
        return param_2;

    return data_val - context;
}
