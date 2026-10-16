#include "0041DC20-Menu_RequestScreen_9.h"
/* 0x0041dc20 Menu_RequestScreen_9 full linked: callers=1 callees=2 */
int32_t Menu_RequestScreen_9(int32_t a1)

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

    int32_t result = ~i;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = memcpy(g_57bbcc + 0x54, edi - result, result & 0xfffffffc);
    memcpy(edi_3, esi_1, result & 3);
    return result;
}
