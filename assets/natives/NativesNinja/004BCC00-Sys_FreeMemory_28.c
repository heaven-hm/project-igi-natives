#include "004BCC00-Sys_FreeMemory_28.h"
/* 0x004bcc00 Sys_FreeMemory_28 full linked: callers=5 callees=2 */
int32_t sub_4bcc00(char* a1, int32_t* a2, int32_t* a3, int32_t* a4)

{
    char* esi = a1;

    if (*(*(esi + 0x28) + (*(esi + 0x1c) << 2)) == a4)
    {
        sub_4bccc0(esi, a2, &a1, nullptr);
        int32_t edi_2 = *a2;
        int32_t i = 0xffffffff;
        a1 = *(*(esi + 0x24) + (*(esi + 0x18) << 2));

        while (i)
        {
            bool cond:0_1 = 0 != *edi_2;
            edi_2 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        *a3 = ~i;
        return 1;
    }

    if (sub_4bcd90(esi, &a4))
    {
        int32_t* ecx_3 = a4;
        int32_t eax_5 = *ecx_3;

        if (!eax_5 || eax_5 == 2)
        {
            if (ecx_3[1] == 3)
            {
                int32_t edi_3 = ecx_3[6];
                *a2 = edi_3;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond:1_1 = 0 != *edi_3;
                    edi_3 += 1;
                    i_1 -= 1;

                    if (!cond:1_1)
                        break;
                }

                *a3 = ~i_1;
            }

            return 1;
        }
    }

    *a2 = 0;
    *a3 = 0;
    return 0;
}
