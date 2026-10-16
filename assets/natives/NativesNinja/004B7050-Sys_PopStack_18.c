#include "004B7050-Sys_PopStack_18.h"
/* 0x004b7050 Sys_PopStack_18 full linked: callers=6 callees=2 */
int32_t sub_4b7050(void* a1, int32_t a2)

{
    int32_t ebp = a2;
    int32_t edi = ebp;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    void* edi_1 = a1;
    int32_t eax = sub_4b6d20(edi_1);
    char* i_1 = nullptr;
    a2 = 0;

    if (~i - 1 <= 0)
        return 0;

    int32_t result;

    do
    {
        a1 = i_1[ebp];
        char eax_3 = sub_4b7710(*(edi_1 + 0xc), a1, 0);
        int32_t eax_1;

        if (!eax_3)
            eax_1 = eax;
        else
            eax_1 = *(*(edi_1 + 8) + eax_3 * 0x24 - 0x14);

        result = a2 + eax_1;
        i_1 = &i_1[1];
        a2 = result;
    } while (i_1 < ~i - 1);

    return result;
}
