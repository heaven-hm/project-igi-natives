#include "00416010-Level_LoadObjects_2.h"
/* 0x00416010 Level_LoadObjects_2 full linked: callers=1 callees=10 */
uint32_t Level_LoadObjects_2()

{
    void* eax = Config_GetActivePlayerProfileRecord();
    void var_11c;
    __builtin_memset(&var_11c, 0, 0x11c);
    int32_t var_104 = sub_4950e0();
    char var_106 = 1;
    int32_t var_110 = 1;
    int32_t var_10c = 0x10;
    int32_t var_118 = *(eax + 0xc);
    int32_t var_114 = *(eax + 0x10);
    char var_108 = 1;
    int32_t var_110_1 = 1;
    int32_t var_10c_1 = *(eax + 0x14);
    int32_t var_104_1 = sub_4950e0();
    char* eax_4 = eax + 0x11f;
    char var_106_1 = 1;

    if (!eax_4)
        eax_4 = &g_567c74;

    char* edi = eax_4;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:1_1 = 0 != *edi;
        edi = &edi[1];
        i -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_1 = ~i;
    void var_80;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&var_80, edi - ecx_1, ecx_1 & 0xfffffffc);
    char* eax_6 = eax + 0x1f;
    memcpy(edi_2, esi_1, ecx_1 & 3);

    if (!eax_6)
        eax_6 = &g_567c74;

    char* edi_3 = eax_6;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:3_1 = 0 != *edi_3;
        edi_3 = &edi_3[1];
        i_1 -= 1;

        if (!cond:3_1)
            break;
    }

    int32_t ecx_5 = ~i_1;
    void var_100;
    int32_t esi_3;
    int32_t edi_5;
    edi_5 = memcpy(&var_100, edi_3 - ecx_5, ecx_5 & 0xfffffffc);
    memcpy(edi_5, esi_3, ecx_5 & 3);
    Display_SetMode(&var_11c);
    return Display_SetBackgroundColourFn(-0x56, -0x7c, -0x7c);
}
