#include "Camera_ApplyWideScreen_28.h"
uint32_t __fastcall Camera_ApplyWideScreen_28(int32_t a1)

{
    int32_t v_8 = a1;
    uint32_t arg_4;

    if (!g_9361e4)
    {
        uint32_t valA1 = arg_4;

        if (valA1 >= 0x61 && valA1 <= 0x7a)
            return valA1 - 0x20;

        return valA1;
    }

    uint32_t ctxB1 = arg_4;
    BOOL valA2;

    if (ctxB1 < 0x100)
    {
        if (g_54427c <= 1)
        {
            wchar16 (* valA3)[0x21] = g_544070;
            valA3 = (*valA3)[ctxB1];
            valA2 = valA3 & 2;
        }
        else
        {
            uint32_t v_14_1 = ctxB1;
            int32_t valA;
            int32_t entry_edx;
            valA2 = Camera_ApplyBandFilter_12(valA, entry_edx, a1, 2);
        }
    }

    if (ctxB1 >= 0x100 || valA2)
    {
        char valA5 = ctxB1 >> 8;
        void* v_10_1;

        if (!(*(&(**&g_544070)[valA5] + 1) & 0x80))
        {
            *(&arg_4 + 1) = 0;
            arg_4 = ctxB1;
            v_10_1 = 1;
        }
        else
        {
            *(&arg_4 + 2) = 0;
            arg_4 = valA5;
            *(&arg_4 + 1) = ctxB1;
            v_10_1 = 2;
        }

        int32_t valA7 = Camera_UpdateViewCone_27(g_9361e4, 0x200, &arg_4, v_10_1, &v_8, 3, 0, 1);

        if (valA7)
        {
            if (valA7 != 1)
                return *(&v_8 + 1) << 8 | v_8;

            return v_8;
        }
    }

    return ctxB1;
}
