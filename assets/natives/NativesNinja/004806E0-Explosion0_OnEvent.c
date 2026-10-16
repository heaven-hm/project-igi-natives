#include "004806E0-Explosion0_OnEvent.h"
/* 0x004806e0 Explosion0_OnEvent full linked: callers=0 callees=3 */
int32_t sub_4806e0(int32_t a1)

{
    int32_t* esi = a1;
    int32_t eax = esi[0x3f];

    if (eax > 0)
    {
        esi[0x3f] = eax - 1;
        return eax - 1;
    }

    if (!sub_4d0d90(*esi[0x1b]))
        esi[0x3c] = 0xffffffff;
    else
    {
        int32_t eax_5 = sub_4d0da0(*esi[0x1b], 0);
        int32_t var_8_1 = eax_5;
        var_8_1 = (esi[0x3e] - esi[0x3d]) / esi[0x42] * var_8_1;
        esi[0x3c] = var_8_1 % eax_5;
    }

    int32_t eax_10 = esi[0x3d];

    if (!eax_10)
        return QTask_FindType(esi);

    esi[0x3d] = eax_10 - 1;
    return eax_10 - 1;
}
