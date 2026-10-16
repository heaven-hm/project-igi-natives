#include "005168FD-Terrain_BuildMipMaps_3.h"
/* 0x005168fd Terrain_BuildMipMaps_3 full linked: callers=1 callees=4 */
long double __convention("regparm") sub_5168fd(int32_t a1, int16_t a2 @ x87control, long double a3 @ st0, int32_t a4 @ 0x4, int32_t a5 @ 0x8)

{
    int32_t edx;
    int32_t var_4 = edx;
    int16_t x87status;
    int16_t temp0;
    temp0 = __fnstcw_memmem16(a2);
    var_4 = temp0;
    long double result;
    bool z;

    if (z)
    {
        int32_t eax_2;

        if (a1 & 0xfffff || a4)
        {
            long double result_1;
            result_1 = __convertTOStoQNaN(a1, a3);
            result = result_1;
        }
        else
        {
        label_516981:
            result = g_5443b0;
            eax_2 = 1;
        }

        if (!g_936058)
            return __startOneArgErrorHandling(eax_2, 0xe, result, a4, a5);
    }
    else
    {
        if (var_4 != 0x27f)
            __load_CW(var_4);

        bool c1;

        if (a1 >= 0x3ff00000)
        {
            if (a1 > 0x3ff00000 || (a5 & 0xfffff) | a4)
                goto label_516981;

            result = g_5443ba;

            if (a5 & 0x80000000)
            {
                result = -(result);
                c1 = false;
            }
        }
        else
        {
            long double result_2;
            result_2 = __fpatan(sqrtl((1 + a3) * (1 - a3)), a3);
            result = result_2;
        }

        if (!g_936058)
        {
            int16_t eax_3 = var_4;

            if (eax_3 != 0x27f)
            {
                bool c0;
                bool c2;
                bool c3;

                if (eax_3 & 0x20 && ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe) & 0x20)
                    return __startOneArgErrorHandling(8, 0xe, result, a4, a5);

                int16_t x87control_1;
                int16_t x87status_2;
                x87control_1 = __fldcw_memmem16(var_4);
            }

            return result;
        }
    }

    int16_t x87control;
    int16_t x87status_1;

    if (var_4 != 0x27f)
        x87control = __fldcw_memmem16(var_4);
    return result;
}
