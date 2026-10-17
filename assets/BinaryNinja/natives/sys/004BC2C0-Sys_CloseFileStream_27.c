// Original IGI.EXE function: Sys_CloseFileStream_27 (VA 0x004BC2C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_27.h"
int32_t Sys_CloseFileStream_27(int32_t* context, int32_t param_2)

{
    int32_t dest_val = param_2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    return Sys_CloseFileStream_4(context, param_2, ~i - 1);
}
