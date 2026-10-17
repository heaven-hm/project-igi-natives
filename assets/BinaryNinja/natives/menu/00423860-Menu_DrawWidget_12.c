// Original IGI.EXE function: Menu_DrawWidget_12 (VA 0x00423860; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_12.h"
int32_t Menu_DrawWidget_12(int32_t context, int32_t param_2)

{
    int32_t dest_2 = context << 0x1e | param_2;
    int32_t i;

    for (i = 0; i < 0x7f; i += 1)
    {
        KEY_ANGLE(i, &context, nullptr);

        if (context == dest_2)
            break;
    }

    if (i != 0x7f)
        return i;

    return 0xffffffff;
}
