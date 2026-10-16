#include "004BAE00-Sys_DuplicateLabelS.h"
/* 0x004bae00 Sys_DuplicateLabelS full linked: callers=2 callees=9 */
int32_t* sub_4bae00(void* a1, int32_t a2)

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

    int32_t ecx = ~i;
    int32_t* var_84 = nullptr;
    void var_80;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&var_80, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx & 3);
    void* edi_3 = &var_80;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_3;
        edi_3 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t __saved_edi;

    if (*((&var_84 + 3) + ~i_1 - 1) == 0x3a)
        *(&__saved_edi + ~i_1 - 1 + 0xb) = 0;
    sub_4c0620(*(a1 + 0x1c), &var_84, &var_80);
    int32_t* eax_3 = var_84;

    if (eax_3)
    {
        if (!eax_3[5])
            return eax_3;

        *(a1 + 4) = 1;
        void* __saved_ebp_1 = &var_80;
        void* var_98_1 = a1;
        sub_4baf30("Duplicate label: '%s'");
        return 0;
    }

    int32_t* eax_5 = Mem_Alloc(0x9c, 4);
    Symbol_CheckRegister(*(a1 + 0x1c), &var_80, eax_5);
    eax_5[1] = 0;
    *eax_5 = 0;
    sub_4af8f0(a1 + 0x20, eax_5);
    void* edi_4 = &var_80;
    int32_t i_2 = 0xffffffff;
    eax_5[5] = 0;

    while (i_2)
    {
        bool cond:2_1 = 0 != *edi_4;
        edi_4 += 1;
        i_2 -= 1;

        if (!cond:2_1)
            break;
    }

    int32_t ecx_8 = ~i_2;
    int32_t esi_5;
    int32_t edi_7;
    edi_7 = memcpy(&eax_5[7], edi_4 - ecx_8, ecx_8 & 0xfffffffc);
    memcpy(edi_7, esi_5, ecx_8 & 3);
    eax_5[3] = 0;
    eax_5[4] = &eax_5[2];
    eax_5[2] = &eax_5[3];
    return eax_5;
}
