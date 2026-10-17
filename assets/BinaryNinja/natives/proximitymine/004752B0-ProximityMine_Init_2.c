// Original IGI.EXE function: ProximityMine_Init_2 (VA 0x004752B0; static CFG gate PASS, CFG score 1.000).
#include "ProximityMine_Init_2.h"

int32_t ProximityMine_Init_2(void* pThis, char* param)

{
    int32_t result = *(param + 8);

    if (result != pThis)
    {
        int32_t scratch_val_1 = *(pThis + 0x208);

        if (result != scratch_val_1)
        {
            result = *(param + 0xc);

            if (result != pThis && result != scratch_val_1)
            {
                *param = 1;
                return result;
            }
        }
    }

    *param = 0;
    return result;
}
