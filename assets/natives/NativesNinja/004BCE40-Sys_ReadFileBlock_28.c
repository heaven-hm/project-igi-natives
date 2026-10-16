#include "004BCE40-Sys_ReadFileBlock_28.h"
/* 0x004bce40 Sys_ReadFileBlock_28 full linked: callers=6 callees=2 */
int32_t sub_4bce40(void* a1, int32_t a2, int32_t a3)

{
    int32_t edi = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t edi_1 = *(a1 + 0x28);
    int32_t eax_1 = *(a1 + 0x1c) - 1;
    *(a1 + 0x1c) = eax_1;
    *(edi_1 + (eax_1 << 2)) = a3;
    int32_t ecx_3 = *(a1 + 0x24);
    uint32_t ebx_2 = ((~i + 3) & 0xfffffffc) >> 2;
    int32_t edi_3 = *(a1 + 0x18) - ebx_2;
    *(a1 + 0x18) = edi_3;
    int32_t edi_4 = a2;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_4;
        edi_4 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_4 = ~i_1;
    int32_t esi_2;
    int32_t edi_7;
    edi_7 = memcpy(ecx_3 + (edi_3 << 2), edi_4 - ecx_4, ecx_4 & 0xfffffffc);
    memcpy(edi_7, esi_2, ecx_4 & 3);
    int32_t ecx_8 = *(a1 + 0x24);
    int32_t result = *(a1 + 0x18) - 1;
    *(a1 + 0x18) = result;
    *(ecx_8 + (result << 2)) = ebx_2;
    return result;
}
