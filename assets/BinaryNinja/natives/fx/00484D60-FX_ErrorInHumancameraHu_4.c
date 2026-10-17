// Original IGI.EXE function: FX_ErrorInHumancameraHu_4 (VA 0x00484D60; static CFG gate PASS, CFG score 1.000).
#include "FX_ErrorInHumancameraHu_4.h"
void* FX_ErrorInHumancameraHu_4(void* a1, int32_t a2)

{
    int32_t ctxB;
    int32_t v_4 = ctxB;
    int32_t objC = 0;

    for (int32_t* i = &g_5c1188; i < 0x5c1588; )
    {
        if (*(i + 5) && **i == a2)
        {
            *(a1 + 0x68) = *((objC << 3) + &g_5c1188);
            *(a1 + 0x120) = *((objC << 3) + &g_5c1188);
            *(a1 + 0x118) = objC;
            *(a1 + 0x11c) = objC;
            return a1;
        }

        i = &i[2];
        objC += 1;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
