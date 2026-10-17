// Original IGI.EXE function: Camera_UpdateViewCone_16 (VA 0x004A94A6; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_16.h"
long double __convention("regparm") Camera_UpdateViewCone_16(int32_t a1, int32_t a2, int16_t a3 @ x87control, long double a4, int32_t a5 @ 0xa, long double a6, long double a7)

{
    int32_t valA1 = a5 ^ 0x700;
    int16_t arg_28;
    long double result;
    bool c0;
    bool c1;
    bool c2_3;
    bool c3;

    if (valA1 & 0x700 || !*((valA1 >> 0xb & 0xf) + 0x5443fc) || (a5 & 0x7fff0000) == 0x7fff0000)
    {
    label_4a9648:
        long double result_1;
        uint8_t f0_7;
        result_1 = __fprem(a7, a4);
        result = result_1;

        if (!c2_3)
        {
            c0 = f0_7 & 4;
            c1 = f0_7 & 1;
            c3 = f0_7 & 2;
        }
    }
    else
    {
        int32_t valA7 = *(&a7 + 6) & 0x7fff0000;

        if (!valA7 || valA7 == 0x7fff0000)
            goto label_4a9648;

        int32_t valA8 = *(&a7 + 4);

        if (valA8 != -(valA8))
            goto label_4a9648;

        int32_t valA10 = *(&a4 + 4);

        if (valA10 != -(valA10))
            goto label_4a9648;

        if ((*(&a7 + 8) & 0x7fff) <= (*(&a5 + 2) & 0x7fff) + 0x3f)
        {
            while ((*(&a7 + 8) & 0x7fff) - ((*(&a5 + 2) & 0x7fff) + 0xa) >= 0)
            {
                int32_t valA18 = *(&a5 + 2);
                int32_t ctxB8 = *(&a7 + 8) & 0x7fff;
                *(&a5 + 2) = (ctxB8 - (((ctxB8 - valA18) & 7) | 4)) | (valA18 & 0x8000);
                *(&a5 + 2) = valA18;
                long double fp0_1;
                uint8_t f0_2;
                bool c2_1;
                fp0_1 = __fprem(a7, a4);

                if (!c2_1)
                {
                    c0 = f0_2 & 4;
                    c1 = f0_2 & 1;
                    c3 = f0_2 & 2;
                }

                a7 = fp0_1;
            }

            goto label_4a9648;
        }

        if (!(a2 & 2))
            a6 = a4;

        int16_t x87status_1;
        char f0_3;
        f0_3 = __fnstcw_memmem16(a3);
        arg_28 = f0_3;
        int16_t x87control;
        int16_t x87status_2;
        x87control = __fldcw_memmem16(arg_28 | 0x33f);
        int32_t i_1 = ((((*(&a7 + 8) & 0x7fff) - (*(&a5 + 2) & 0x7fff)) & 0x3f) | 0x20) + 1;
        int32_t valA24 = *(&a5 + 2) & 0x8000;
        *(&a5 + 2) = (*(&a7 + 8) & 0x7fff) | valA24;
        long double x87_r7_6 = fabsl(a4);
        long double result_2 = fabsl(a7);
        int32_t i;

        do
        {
            result_2 - x87_r7_6;
            c0 = result_2 < x87_r7_6;
            c1 = false;
            c3 = result_2 == x87_r7_6;
            valA24 = (c0 ? 1 : 0) << 8 | (FCMP_UO(result_2, x87_r7_6) ? 1 : 0) << 0xa
                | (c3 ? 1 : 0) << 0xe | 0x3000;
            valA24 &= 0x100;

            if (!valA24)
                result_2 = result_2 - x87_r7_6;

            x87_r7_6 = x87_r7_6 * g_54442c;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        long double fp0_2;
        uint8_t f0_6;
        fp0_2 = __fprem(g_544434, a6);

        if (!c2_3)
        {
            c0 = f0_6 & 4;
            c1 = f0_6 & 1;
            c3 = f0_6 & 2;
        }

        result = result_2;
        int16_t x87status_3;
        a3 = __fldcw_memmem16(arg_28);

        if (*(&a7 + 8) & 0x8000)
        {
            result = -(result);
            c1 = false;
        }
    }

    if (a2 & 3)
    {
        if (a2 & 1)
        {
            int16_t x87status_4;
            char f0_8;
            f0_8 = __fnstcw_memmem16(a3);
            arg_28 = f0_8;
            int16_t x87control_1;
            int16_t x87status_5;
            x87control_1 = __fldcw_memmem16(arg_28 | 0x300);
            result = result * g_54441c;
            int16_t x87control_2;
            int16_t x87status_6;
            x87control_2 = __fldcw_memmem16(arg_28);
        }

        int16_t x87status_7;
        char f0_11;
        f0_11 = __fnstenv_memmem28();
        uint224_t v_28_1 = f0_11;
        *(&v_28_1 + 4) &= 0xbcff;
        *(&v_28_1 + 4) |= ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2_3 ? 1 : 0) << 0xa
            | (c3 ? 1 : 0) << 0xe | 0x3000) & 0x4300;
        __fldenv_memmem28(v_28_1);
    }

    return result;
}
