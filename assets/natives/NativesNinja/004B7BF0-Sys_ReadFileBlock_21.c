#include "004B7BF0-Sys_ReadFileBlock_21.h"
/* 0x004b7bf0 Sys_ReadFileBlock_21 full linked: callers=1 callees=0 */
int32_t sub_4b7bf0(void* a1)

{
    int32_t result = 0;
    int32_t i_2 = *(a1 + 6);

    if (i_2 > 0)
    {
        int16_t* edx = *(a1 + 0xc);
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            int32_t result_1 = *edx;

            if (result_1 > result)
                result = result_1;

            edx = &edx[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
