// Original IGI.EXE function: Camera_ApplyLineFilter_25 (VA 0x004AC8D8; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_25.h"
int32_t Camera_ApplyLineFilter_25(int32_t* context)

{
    int32_t* data_val = context;

    for (int32_t i = 0; i < 3; )
    {
        if (*data_val)
            return 0;

        i += 1;
        data_val = &data_val[1];
    }

    return 1;
}
