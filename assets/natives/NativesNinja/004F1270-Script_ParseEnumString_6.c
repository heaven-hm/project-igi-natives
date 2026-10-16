#include "004F1270-Script_ParseEnumString_6.h"
/* 0x004f1270 Script_ParseEnumString_6 full linked: callers=87 callees=7 */
int32_t sub_4f1270(char* a1, void* a2)

{
    uint32_t eax_1 = sub_4f1200();
    int32_t ecx = 0;
    ecx = *(a2 + 0x1c);

    if (!*(((eax_1 * 0x180 + ecx) << 2) + &g_a96ae0))
    {
        int32_t __saved_edi_2 = sub_4f1050(a2);
        int32_t __saved_edi_1 = __saved_edi_2;
        __saved_edi_2 = *(a2 + 0x1c);
        int32_t var_4c_2 = QTask_RegisterEventCallback_2(__saved_edi_2);
        return Game_DataSymbolLoad(a1, "%s_%d");
    }

    uint32_t eax_6 = sub_4f1200();
    int32_t eax_7 = 0;
    eax_7 = *(a2 + 0x1c);
    void var_40;
    (*(((eax_6 * 0x180 + eax_7) << 2) + &g_a96ae0))(a2, &var_40);
    void* edi = &var_40;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_2 = ~i;
    int32_t esi_2;
    int32_t edi_3;
    edi_3 = memcpy(a1, edi - ecx_2, ecx_2 & 0xfffffffc);
    memcpy(edi_3, esi_2, ecx_2 & 3);
    return 0;
}
