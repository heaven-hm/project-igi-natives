#include "004B19C0-Sys_FreeMemory_5.h"
/* 0x004b19c0 Sys_FreeMemory_5 full linked: callers=2 callees=5 */
void** sub_4b19c0(int32_t a1)

{
    int32_t edi = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    void** result = Mem_Alloc(~i + 0x1c, 4);
    __builtin_memset(result, 0, 0x1c);
    result[1] = 0;
    *result = nullptr;
    sub_4af8f0(&g_943970, result);
    int32_t edi_2 = a1;
    int32_t i_1 = 0xffffffff;
    result[2] = &result[7];

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_2;
        edi_2 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_2 = ~i_1;
    int32_t esi_2;
    int32_t edi_5;
    edi_5 = memcpy(&result[7], edi_2 - ecx_2, ecx_2 & 0xfffffffc);
    memcpy(edi_5, esi_2, ecx_2 & 3);
    return result;
}
