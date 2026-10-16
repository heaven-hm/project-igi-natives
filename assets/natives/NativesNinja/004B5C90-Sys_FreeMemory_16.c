#include "004B5C90-Sys_FreeMemory_16.h"
/* 0x004b5c90 Sys_FreeMemory_16 full linked: callers=5 callees=7 */
int32_t sub_4b5c90(int32_t* a1)

{
    int32_t result = a1[9];
    int32_t* edx_1;
    int32_t esi_1;

    switch (result)
    {
        case 0:
        {
            int32_t* i_1 = a1[5];

            for (int32_t* i = *i_1; i; i = *i)
            {
                sub_4b5c90(i_1[2]);
                i_1 = i;
            }

            sub_4af960(a1);
            sub_4b1a30(a1[0xd]);
            goto label_4b5cf2;
        }
        case 1:
        case 4:
        {
            sub_4af960(&a1[2]);
            goto label_4b5ced;
        }
        case 2:
        {
            sub_4b1a30(a1[0xd]);
        label_4b5ced:
            sub_4af960(a1);
        label_4b5cf2:
            edx_1 = g_943e34;
            result = g_943e28 - 1;
            esi_1 = *(edx_1 + a1);
            g_943e28 = result;

            if (esi_1 != result)
                goto label_4b5d30;
            break;
        }
        case 3:
        {
            sub_4af960(a1);
            edx_1 = g_943e34;
            result = g_943e28 - 1;
            esi_1 = *(edx_1 + a1);
            g_943e28 = result;

            if (esi_1 != result)
            {
            label_4b5d30:
                int32_t ecx_2 = g_943e24;
                result = *(ecx_2 + (result << 2)) * g_943e30 + g_943e20;
                int32_t edi_2 = *(ecx_2 + (esi_1 << 2));
                int32_t edx_2 = *(edx_1 + result);
                *(ecx_2 + (esi_1 << 2)) = *(ecx_2 + (edx_2 << 2));
                *(g_943e24 + (edx_2 << 2)) = edi_2;
                *(g_943e34 + result) = esi_1;
            }
            break;
        }
    }

    return result;
}
