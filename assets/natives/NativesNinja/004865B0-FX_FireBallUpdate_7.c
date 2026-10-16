#include "004865B0-FX_FireBallUpdate_7.h"
/* 0x004865b0 FX_FireBallUpdate_7 full linked: callers=1 callees=2 */
int32_t sub_4865b0(int32_t a1, int32_t a2, int32_t a3, float a4)

{
    int32_t i_1 = 3;
    int32_t* esi = a1 + a2 * 0x102c + 0x30;
    int32_t result;
    int32_t i;

    do
    {
        *(*esi + 4) = a3;
        *(*esi + 8) = a4;
        sub_4b6f50(*esi);
        result = sub_4b7e00(*esi);
        esi = &esi[1];
        i = i_1;
        i_1 -= 1;
        a4 = result + a4;
    } while (i != 1);
    return result;
}
