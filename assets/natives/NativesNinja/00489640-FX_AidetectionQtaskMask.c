#include "00489640-FX_AidetectionQtaskMask.h"
/* 0x00489640 FX_AidetectionQtaskMask full linked: callers=2 callees=1 */
int32_t sub_489640(int16_t a1)

{
    int32_t ecx = 0;

    for (int16_t* i = &g_5c8ac4; i < 0x5c8b04; )
    {
        if (*i == 0x181)
        {
            *((ecx << 1) + &g_5c8ac4) = a1;
            return 1 << (ecx & 0x1f);
        }

        i = &i[1];
        ecx += 1;
    }

    Warning_Show("AIDetection - QTask mask is full");
    return 0;
}
