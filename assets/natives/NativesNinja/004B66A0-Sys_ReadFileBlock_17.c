#include "004B66A0-Sys_ReadFileBlock_17.h"
/* 0x004b66a0 Sys_ReadFileBlock_17 full linked: callers=67 callees=5 */
int32_t sub_4b66a0(int32_t* a1)

{
    int32_t* eax = *a1;

    if (eax)
    {
        sub_4b7d30(eax);
        sub_4b0d10(*a1);
        *a1 = 0;
    }

    void* eax_2 = a1[3];

    if (eax_2)
        sub_4b76d0(eax_2);

    int32_t eax_3 = a1[4];

    if (eax_3)
    {
        int32_t i = 0;

        if (eax_3 > 0)
        {
            int32_t ebx_1 = 0;

            do
            {
                Struct_Clear36(a1[1] + ebx_1);
                i += 1;
                ebx_1 += 0x24;
            } while (i < a1[4]);
        }
    }

    int32_t result = sub_4b0d10(a1[2]);
    a1[2] = 0;
    return result;
}
