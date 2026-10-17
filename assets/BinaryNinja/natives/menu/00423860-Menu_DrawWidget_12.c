// Original IGI.EXE function: Menu_DrawWidget_12 (VA 0x00423860; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_12.h"
int32_t Menu_DrawWidget_12(int32_t a1, int32_t a2)

{
    int32_t dstD2 = a1 << 0x1e | a2;
    int32_t i;

    for (i = 0; i < 0x7f; i += 1)
    {
        KEY_ANGLE(i, &a1, nullptr);

        if (a1 == dstD2)
            break;
    }

    if (i != 0x7f)
        return i;

    return 0xffffffff;
}
