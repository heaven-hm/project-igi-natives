#include "004A56E4-Camera_ApplyWideScreen_5.h"
/* 0x004a56e4 Camera_ApplyWideScreen_5 full linked: callers=0 callees=1 */
long double sub_4a56e4(long double a1 @ st0, long double a2 @ st1)

{
    bool c1 = false;
    long double result = a2;
    bool c0;
    bool c2;
    bool c3;

    do
    {
        if (g_93605c == 1)
        {
            int16_t x87control;
            long double result_2;
            result_2 = sub_4a96ac(x87control, result, a1);
            result = result_2;
        }
        else
        {
            long double result_1;
            uint8_t temp0;
            result_1 = __fprem(result, a1);
            result = result_1;

            if (!c2)
            {
                c0 = temp0 & 4;
                c1 = temp0 & 1;
                c3 = temp0 & 2;
            }
        }
    } while (TEST_BITB(
        *(&((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe)
            + 1),
        2));
    return result;
}
