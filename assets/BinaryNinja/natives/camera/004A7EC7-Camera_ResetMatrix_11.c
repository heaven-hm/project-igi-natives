// Original IGI.EXE function: Camera_ResetMatrix_11 (VA 0x004A7EC7; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_11.h"
int32_t* Camera_ResetMatrix_11(char* context, int32_t* param_2, int32_t* param_3, int32_t* param_4)

{
    int32_t* i = param_2;
    int32_t* i_1 = param_2 - 1;

    if (i > 0)
    {
        char* source_1 = context;

        do
        {
            int32_t data_val = *source_1;
            source_1 = &source_1[1];
            i = Camera_ApplyPostProcess_11(data_val, param_3, param_4);

            if (*param_4 == 0xffffffff)
                break;

            i = i_1;
            i_1 -= 1;
        } while (i > 0);
    }

    return i;
}
