#include "00484D60-FX_ErrorInHumancameraHu_4.h"
/* 0x00484d60 FX_ErrorInHumancameraHu_4 full linked: callers=1 callees=1 */
void* sub_484d60(void* a1, int32_t a2)

{
    int32_t ebx;
    int32_t var_4 = ebx;
    int32_t ecx = 0;

    for (int32_t* i = &g_5c1188; i < 0x5c1588; )
    {
        if (*(i + 5) && **i == a2)
        {
            *(a1 + 0x68) = *((ecx << 3) + &g_5c1188);
            *(a1 + 0x120) = *((ecx << 3) + &g_5c1188);
            *(a1 + 0x118) = ecx;
            *(a1 + 0x11c) = ecx;
            return a1;
        }

        i = &i[2];
        ecx += 1;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
