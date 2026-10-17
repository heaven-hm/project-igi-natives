// Original IGI.EXE function: Sys_ReadFileBlock_21 (VA 0x004B7BF0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_21.h"
int32_t Sys_ReadFileBlock_21(void* a1)

{
    int32_t result = 0;
    int32_t i_2 = *(a1 + 6);

    if (i_2 > 0)
    {
        int16_t* tmpD = *(a1 + 0xc);
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            int32_t result_1 = *tmpD;

            if (result_1 > result)
                result = result_1;

            tmpD = &tmpD[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
