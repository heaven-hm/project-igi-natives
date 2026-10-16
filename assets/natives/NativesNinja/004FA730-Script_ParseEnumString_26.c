#include "004FA730-Script_ParseEnumString_26.h"
/* 0x004fa730 Script_ParseEnumString_26 full linked: callers=1 callees=4 */
int32_t sub_4fa730(void* a1, int32_t a2)

{
    int32_t edi = a2;
    int32_t i = 0xffffffff;
    char var_104 = 9;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    char var_103 = ~i;
    void var_102;
    int32_t esi_1;
    int32_t edi_1;
    edi_1 = memcpy(&var_102, a2, ~i & 0xfffffffc);
    memcpy(edi_1, esi_1, ~i & 3);
    sub_4b17c0(*(a1 + 4));
    int32_t result = sub_4b1700(*(a1 + 4), &var_104, ~i + 2);
    result = 1;
    return result;
}
