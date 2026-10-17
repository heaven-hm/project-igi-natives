// Original IGI.EXE function: Camera_ApplyBandFilter_12 (VA 0x004A7F2A; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_12.h"
BOOL __convention("regparm") Camera_ApplyBandFilter_12(int32_t a1, int32_t a2, int32_t a3, int32_t a4 @ 0x8)

{
    int32_t v_8 = a3;
    int32_t arg_4;
    int32_t valA = arg_4;
    uint32_t valA1;

    if (valA + 1 > 0x100)
    {
        char objC3 = valA >> 8;
        int32_t __saved_esi_1;

        if (!(*(&(**&g_544070)[objC3] + 1) & 0x80))
        {
            *(&v_8 + 1) = 0;
            v_8 = valA;
            __saved_esi_1 = 1;
        }
        else
        {
            *(&v_8 + 2) = 0;
            v_8 = objC3;
            *(&v_8 + 1) = valA;
            __saved_esi_1 = 2;
        }

        BOOL result = Camera_SetFieldOfView_27(1, &v_8, __saved_esi_1, (&arg_4 + 2), 0, 0, 1);

        if (!result)
            return result;

        valA1 = *(&arg_4 + 2);
    }
    else
        valA1 = (**&g_544070)[valA];

    return valA1 & a4;
}
