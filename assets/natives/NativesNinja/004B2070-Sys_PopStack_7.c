#include "004B2070-Sys_PopStack_7.h"
/* 0x004b2070 Sys_PopStack_7 full linked: callers=1 callees=9 */
int32_t sub_4b2070(void* a1, int32_t* a2, int32_t a3, int32_t a4)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t result = 0;
    int32_t result_2 = 0;
    int32_t* edi = sub_4b7490(a1);

    if (edi)
    {
        int32_t* ebp_1 = a2;

        while (result < a3)
        {
            if (sub_4b7580(edi) == 0x48584554)
            {
                int32_t* eax_2 = sub_4b74d0(edi, a1);
                edi = sub_4b7470(edi);

                if (!eax_2 || !edi)
                    return 0;

                if (sub_4b7580(edi) != 0x59444f42)
                    return 0;

                if (!sub_4b74d0(edi, a1))
                    return 0;

                void* eax_6 = sub_4b74d0(edi, a1);
                int32_t ecx_1 = 0;
                ecx_1 = eax_2[3];
                int32_t eax_8 = 0;
                eax_8 = eax_2[4];
                int32_t eax_9 = 0;
                eax_9 = *(eax_2 + 0x16);
                int32_t edx_2 = 0;
                edx_2 = *(eax_2 + 0x12);
                int32_t ecx_2 = 0;
                ecx_2 = *(eax_2 + 0xe);
                int32_t eax_11;
                int32_t edx_3;
                edx_3 = HIGHD(eax_9 * edx_2);
                eax_11 = LOWD(eax_9 * edx_2);
                sub_4b23b0(ebp_1, a4, (eax_11 + (edx_3 & 7)) >> 3, ecx_2, eax_8, *eax_2, ecx_1,
                    eax_2[1], eax_6);
                int32_t result_1 = result_2 + 1;
                ebp_1 = &ebp_1[9];
                result_2 = result_1;
                result = result_1;
            }

            edi = sub_4b7470(edi);

            if (!edi)
                break;
        }
    }

    return result;
}
