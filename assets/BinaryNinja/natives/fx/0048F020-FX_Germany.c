// Original IGI.EXE function: FX_Germany (VA 0x0048F020; static CFG gate PASS, CFG score 1.000).
#include "FX_Germany.h"
int32_t FX_Germany()

{
    if (!g_5c8c20)
    {
        int32_t data_val;
        int32_t entity_1;
        int32_t temp_1;
        data_val = GetLocaleInfoA(0x400, 0x1002, &g_5c8c20, 0x100);

        if (!Camera_UpdateTransform_6(data_val, temp_1, entity_1, &g_5c8c20, "Germany"))
            FX_FireBallUpdate_26(1);
    }

    return FX_TrailUpdate_23(0, 0);
}
