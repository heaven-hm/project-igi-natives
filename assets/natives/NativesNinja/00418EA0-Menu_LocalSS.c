#include "00418EA0-Menu_LocalSS.h"
/* 0x00418ea0 Menu_LocalSS full linked: callers=15 callees=11 */
int32_t* Menu_LocalSS(void* a1, int32_t a2)

{
    int32_t __saved_ebp = a2;
    void* var_114 = Config_English_2(*(a1 + 0x27e4));
    char var_100[0x100];
    Game_DataSymbolLoad(&var_100, "LOCAL:%s/%s");
    int32_t eax_2;
    void* ecx;
    int32_t edx;
    eax_2 = sub_4b64e0(&var_100);

    if (eax_2)
    {
        char (* __saved_ebp_1)[0x100] = &var_100;
        return Resource_Load(&var_100, edx, ecx, nullptr);
    }

    for (char* i = *(a1 + 0x260); i; i = *(i + 0x84))
    {
        eax_2 = sub_4a5980(eax_2, edx, &var_100, &var_100, i);

        if (!eax_2)
            return &i[0x40];
    }

    Qhash_Init(1);
    void* eax_5 = Mem_Alloc(0x88, 4);
    int32_t var_120_1 = a2;
    Game_DataSymbolLoad(eax_5 + 0x40, "RM: %s");
    char (* edi_1)[0x100] = &var_100;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 = &(*edi_1)[1];
        i_1 -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_2 = ~i_1;
    int32_t esi_2;
    int32_t edi_4;
    edi_4 = memcpy(eax_5, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
    memcpy(edi_4, esi_2, ecx_2 & 3);
    Qhash_Reset();
    *(eax_5 + 0x84) = *(a1 + 0x260);
    *(a1 + 0x260) = eax_5;
    return eax_5 + 0x40;
}
