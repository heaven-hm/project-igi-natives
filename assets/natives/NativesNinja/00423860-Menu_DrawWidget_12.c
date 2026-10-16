#include "00423860-Menu_DrawWidget_12.h"
/* 0x00423860 Menu_DrawWidget_12 full linked: callers=2 callees=2 */
int32_t Menu_DrawWidget_12(int32_t a1, int32_t a2)

{
    int32_t edi_2 = a1 << 0x1e | a2;
    int32_t i;

    for (i = 0; i < 0x7f; i += 1)
    {
        KEY_ANGLE(i, &a1, nullptr);

        if (a1 == edi_2)
            break;
    }

    if (i != 0x7f)
        return i;

    return 0xffffffff;
}
