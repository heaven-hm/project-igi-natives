#include "FX_Germany.h"
int32_t FX_Germany()

{
    if (!g_5c8c20)
    {
        int32_t valA;
        int32_t objC1;
        int32_t tmpD1;
        valA = GetLocaleInfoA(0x400, 0x1002, &g_5c8c20, 0x100);

        if (!Camera_UpdateTransform_6(valA, tmpD1, objC1, &g_5c8c20, "Germany"))
            FX_FireBallUpdate_26(1);
    }

    return FX_TrailUpdate_23(0, 0);
}
