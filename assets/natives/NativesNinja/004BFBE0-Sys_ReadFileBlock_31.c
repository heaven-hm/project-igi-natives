#include "004BFBE0-Sys_ReadFileBlock_31.h"
/* 0x004bfbe0 Sys_ReadFileBlock_31 full linked: callers=1 callees=4 */
void* sub_4bfbe0(void* a1, void* a2)

{
    int32_t i = 0xffffffff;
    int32_t edi = *(a2 + 0x14);

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t* eax = Mem_Alloc(~i + 0x28, 4);
    eax[1] = 0;
    *eax = 0;
    eax[4] = &eax[0xa];
    eax[2] = *(a2 + 0xc);
    eax[3] = *(a2 + 0x10);
    eax[8] = *(a2 + 0x20);
    eax[6] = *(a2 + 0x18);
    eax[7] = *(a2 + 0x1c);
    int32_t edi_1 = *(a2 + 0x14);
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_4 = ~i_1;
    int32_t esi_2;
    int32_t edi_4;
    edi_4 = memcpy(&eax[0xa], edi_1 - ecx_4, ecx_4 & 0xfffffffc);
    memcpy(edi_4, esi_2, ecx_4 & 3);
    return sub_4af8f0(a1, eax);
}
