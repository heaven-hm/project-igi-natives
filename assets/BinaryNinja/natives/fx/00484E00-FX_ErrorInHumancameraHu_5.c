// Original IGI.EXE function: FX_ErrorInHumancameraHu_5 (VA 0x00484E00; static CFG gate PASS, CFG score 1.000).
#include "FX_ErrorInHumancameraHu_5.h"
int32_t* FX_ErrorInHumancameraHu_5(int32_t a1)

{
    int32_t srcS = 0;
    int32_t* i;

    for (i = &g_5c1188; i < 0x5c1588; )
    {
        if (*(i + 5))
        {
            int32_t objC3 = **i;

            if (!objC3)
            {
                Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

                while (true)
                    /* nop */
            }
            else if (objC3 == a1)
            {
                int32_t valA = Qtask_UpdateList(*((srcS << 3) + &g_5c1188));
                *((srcS << 3) + &g_5c1188) = 0;
                *((srcS << 3) + &g_5c118d) = 0;
                return valA;
            }
        }

        i = &i[2];
        srcS += 1;
    }

    return i;
}
