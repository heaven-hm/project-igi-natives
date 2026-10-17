// Original IGI.EXE function: FX_ErrorInHumancameraHu_5 (VA 0x00484E00; static CFG gate PASS, CFG score 1.000).
#include "FX_ErrorInHumancameraHu_5.h"
int32_t* FX_ErrorInHumancameraHu_5(int32_t context)

{
    int32_t source_val = 0;
    int32_t* i;

    for (i = &g_5c1188; i < 0x5c1588; )
    {
        if (*(i + 5))
        {
            int32_t entity_3 = **i;

            if (!entity_3)
            {
                Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

                while (true)
                    /* nop */
            }
            else if (entity_3 == context)
            {
                int32_t data_val = Qtask_UpdateList(*((source_val << 3) + &g_5c1188));
                *((source_val << 3) + &g_5c1188) = 0;
                *((source_val << 3) + &g_5c118d) = 0;
                return data_val;
            }
        }

        i = &i[2];
        source_val += 1;
    }

    return i;
}
