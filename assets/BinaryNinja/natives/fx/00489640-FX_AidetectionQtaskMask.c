#include "FX_AidetectionQtaskMask.h"
int32_t FX_AidetectionQtaskMask(int16_t a1)

{
    int32_t objC = 0;

    for (int16_t* i = &g_5c8ac4; i < 0x5c8b04; )
    {
        if (*i == 0x181)
        {
            *((objC << 1) + &g_5c8ac4) = a1;
            return 1 << (objC & 0x1f);
        }

        i = &i[1];
        objC += 1;
    }

    Warning_Show("AIDetection - QTask mask is full");
    return 0;
}
