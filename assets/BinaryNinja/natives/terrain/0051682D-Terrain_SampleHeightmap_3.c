#include "Terrain_SampleHeightmap_3.h"
long double __convention("regparm") Terrain_SampleHeightmap_3(int32_t a1, int16_t a2 @ x87control, long double a3 @ fp0, int32_t a4 @ 0x4, int32_t a5 @ 0x8)

{
    int32_t tmpD;
    int32_t v_4 = tmpD;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(a2);
    v_4 = f0;
    long double result;
    bool z;

    if (z)
    {
        int32_t valA2;

        if (a1 & 0xfffff || a4)
        {
            long double result_1;
            result_1 = __convertTOStoQNaN(a1, a3);
            result = result_1;
        }
        else
        {
        label_5168b1:
            result = g_5443b0;
            valA2 = 1;
        }

        if (!g_936058)
            return __startOneArgErrorHandling(valA2, 0xd, result, a4, a5);
    }
    else
    {
        if (v_4 != 0x27f)
            __load_CW(v_4);

        bool c1;

        if (a1 >= 0x3ff00000)
        {
            if (a1 > 0x3ff00000 || (a5 & 0xfffff) | a4)
                goto label_5168b1;

            result = !(a5 & 0x80000000) ? 0 : 3.1415926534682512 + 1.2154201012607932e-10;
        }
        else
        {
            long double result_2;
            result_2 = __fpatan(a3, sqrtl((1 + a3) * (1 - a3)));
            result = result_2;
        }

        if (!g_936058)
        {
            int16_t valA3 = v_4;

            if (valA3 != 0x27f)
            {
                bool c0;
                bool c2;
                bool c3;

                if (valA3 & 0x20 && ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe) & 0x20)
                    return __startOneArgErrorHandling(8, 0xd, result, a4, a5);

                int16_t x87control_1;
                int16_t x87status_2;
                x87control_1 = __fldcw_memmem16(v_4);
            }

            return result;
        }
    }

    int16_t x87control;
    int16_t x87status_1;

    if (v_4 != 0x27f)
        x87control = __fldcw_memmem16(v_4);
    return result;
}
