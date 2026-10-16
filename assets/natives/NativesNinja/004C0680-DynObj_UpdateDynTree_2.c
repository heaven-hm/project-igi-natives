#include "004C0680-DynObj_UpdateDynTree_2.h"
/* 0x004c0680 DynObj_UpdateDynTree_2 full linked: callers=12 callees=6 */
void* sub_4c0680(void* a1, char* a2, int32_t a3, int32_t a4)

{
    int32_t* eax = Mem_Alloc(0x4910, 4);
    char* edi = a2;
    int32_t i = 0xffffffff;
    eax[1] = 0;
    *eax = 0;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = memcpy(&eax[2], edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_3, esi_1, ecx & 3);
    eax[0x1242] = a4;
    eax[0x1243] = a3;
    void** var_14 = eax;

    if (!sub_4af9d0(&eax[0x42], &eax[0xa42], a2))
        return sub_4b0d10(var_14);

    return sub_4af8f0(a1, var_14);
}
