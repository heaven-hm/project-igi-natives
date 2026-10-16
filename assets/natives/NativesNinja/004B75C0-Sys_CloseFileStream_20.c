#include "004B75C0-Sys_CloseFileStream_20.h"
/* 0x004b75c0 Sys_CloseFileStream_20 full linked: callers=1 callees=2 */
int32_t* sub_4b75c0(void* a1, void* a2)

{
    sub_4b6d60(a2, 1);
    int32_t* result = sub_4b7630(*(a1 + 0x10), *(a1 + 0x14), a2);
    int32_t i = 0;
    int32_t ecx_1 = 0;

    if (*(a1 + 0x14) <= 0)
        return result;

    int32_t ebx;
    int32_t var_10 = ebx;

    do
    {
        int32_t j = 0;

        if (*(a1 + 0x10) > 0)
        {
            char* edx_4 = (ecx_1 << 4) + a1 + 0x24;

            do
            {
                char ebx_1 = *edx_4;
                edx_4 = &edx_4[0x10];
                *(ecx_1 + result + 0x10) = ebx_1;
                ecx_1 += 1;
                j += 1;
            } while (j < *(a1 + 0x10));
        }

        i += 1;
    } while (i < *(a1 + 0x14));

    return result;
}
